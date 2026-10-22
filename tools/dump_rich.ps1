param([string]$Path)
$b = [IO.File]::ReadAllBytes($Path)
$name = Split-Path $Path -Leaf

# Find Rich marker
$richOff = -1
for ($i = 0; $i -lt [Math]::Min($b.Length, 0x400); $i++) {
  if ($b[$i] -eq 0x52 -and $b[$i+1] -eq 0x69 -and $b[$i+2] -eq 0x63 -and $b[$i+3] -eq 0x68) { $richOff = $i; break }
}
Write-Output "=== $name ==="
if ($richOff -lt 0) { Write-Output "  No Rich marker"; return }

$key = [BitConverter]::ToUInt32($b, $richOff + 4)
Write-Output ("  Rich marker at 0x{0:X4}, XOR key = 0x{1:X8}" -f $richOff, $key)

# Find DanS marker
$dansOff = -1
for ($i = 0; $i -lt $richOff; $i++) {
  $dw = [BitConverter]::ToUInt32($b, $i)
  if (($dw -bxor $key) -eq 0x536E6144) { $dansOff = $i; break }
}
if ($dansOff -lt 0) { Write-Output "  No DanS marker"; return }
Write-Output ("  DanS marker at 0x{0:X4}" -f $dansOff)

# Known prodids (VC6 family)
$prodNames = @{
  0x0F="Linker 5.10"; 0x10="Cvtomf 5.10"
  0x1E="Linker 6.00"; 0x1F="Cvtomf 6.00"
  0x20="Linker 6.00 SP1"; 0x21="Cvtomf 6.00 SP1"
  0x22="Linker 6.00 SP2"; 0x23="Cvtomf 6.00 SP2"
  0x24="Linker 6.00 SP3"; 0x25="Cvtomf 6.00 SP3"
  0x26="Linker 6.00 SP4"; 0x27="Cvtomf 6.00 SP4"
  0x28="Linker 6.00 SP5"; 0x29="Cvtomf 6.00 SP5"
  0x2A="Linker 6.00 SP6"; 0x2B="Cvtomf 6.00 SP6"
  0x03="Cvtomf 5.0"
}

# Each block is 8 bytes: (prodid<<16 | build) then count
$i = $dansOff + 16  # skip DanS(4) + key(4) + key sentinel(4) + key sentinel(4)
# Actually DanS is 4, then 2 key dwords = 8 bytes sentinel = 12, so blocks start at dansOff+16
while ($i -lt $richOff) {
  $w1 = [BitConverter]::ToUInt32($b, $i)
  $w2 = [BitConverter]::ToUInt32($b, $i + 4)
  if ($w1 -eq $key -and $w2 -eq $key) { break }
  $d1 = $w1 -bxor $key
  $d2 = $w2 -bxor $key
  $prodId = ($d1 -shr 16) -band 0xFFFF
  $build  =  $d1        -band 0xFFFF
  $nm = $prodNames[[int]$prodId]
  if (-not $nm) { $nm = "Unknown 0x{0:X4}" -f $prodId }
  Write-Output ("  ProdId 0x{0:X4} ({1}) Build 0x{2:X4} ({3}) x {4}" -f $prodId, $nm, $build, $build, $d2)
  $i += 8
}
Write-Output ("  Total Rich header bytes: 0x{0:X4}" -f ($richOff + 8 - $dansOff))