param(
    [string]$Path = ""
)
if (-not $Path) {
    $root = Split-Path -Parent $PSScriptRoot
    $Path = Join-Path $root "reference\MW4Mercs.exe"
}
$bytes = [System.IO.File]::ReadAllBytes($Path)
$ms = New-Object System.IO.MemoryStream(,$bytes)
$br = New-Object System.IO.BinaryReader($ms)
function Loc($off) { $ms.Position = $off }
function U16($off) { [BitConverter]::ToUInt16($bytes, $off) }
function U32($off) { [BitConverter]::ToUInt32($bytes, $off) }

$e_lfanew = U32 0x3C
Write-Output ("DOS e_lfanew  = 0x{0:X8} ({0})" -f $e_lfanew)

$peSig = U32 $e_lfanew
Write-Output ("PE signature  = 0x{0:X8}" -f $peSig)
$fh = $e_lfanew + 4
$machine = U16 $fh
$nSections = U16 ($fh + 2)
$timeDate = U32 ($fh + 4)
$szOptHdr = U16 ($fh + 16)
$character = U16 ($fh + 18)
Write-Output ("Machine       = 0x{0:X4}" -f $machine)
Write-Output ("NumSections   = $nSections")
Write-Output ("TimeDateStamp = 0x{0:X8} ({1} UTC)" -f $timeDate, ([datetimeoffset]::FromUnixTimeSeconds($timeDate).UtcDateTime.ToString("u")))
Write-Output ("SizeOfOptHdr  = 0x{0:X4} ({0})" -f $szOptHdr)
Write-Output ("Characteristics = 0x{0:X4}" -f $character)

$optStart = $fh + 20
$magic = U16 $optStart
$is64 = ($magic -eq 0x20B)
Write-Output ("OptMagic      = 0x{0:X4} ({1})" -f $magic, $(if($is64){"PE32+"}else{"PE32"}))
$majorLink = $bytes[$optStart + 2]
$minorLink = $bytes[$optStart + 3]
Write-Output ("LinkerVersion = $majorLink.$minorLink")

$off = $optStart + 4
$sizeOfCode = U32 $off; $off += 4
$sizeOfInit = U32 $off; $off += 4
$sizeOfUninit = U32 $off; $off += 4
$addrEntry = U32 $off; $off += 4
$baseOfCode = U32 $off; $off += 4
if (-not $is64) {
    $baseOfData = U32 $off; $off += 4
    $imageBase = U32 $off; $off += 4
} else {
    $imageBase = [BitConverter]::ToUInt64($bytes, $off); $off += 8
}
Write-Output ("SizeOfCode    = 0x{0:X8}" -f $sizeOfCode)
Write-Output ("SizeOfInit    = 0x{0:X8}" -f $sizeOfInit)
Write-Output ("SizeOfUninit  = 0x{0:X8}" -f $sizeOfUninit)
Write-Output ("AddressOfEntry = 0x{0:X8}" -f $addrEntry)
Write-Output ("BaseOfCode    = 0x{0:X8}" -f $baseOfCode)
if (-not $is64) { Write-Output ("BaseOfData   = 0x{0:X8}" -f $baseOfData) }
Write-Output ("ImageBase     = 0x{0:X16}" -f $imageBase)

$sectionAlign = U32 $off; $off += 4
$fileAlign = U32 $off; $off += 4
Write-Output ("SectionAlign  = 0x{0:X8} ({0})" -f $sectionAlign)
Write-Output ("FileAlign     = 0x{0:X8} ({0})" -f $fileAlign)
$majorOS = U16 $off; $off += 2
$minorOS = U16 $off; $off += 2
Write-Output ("OSVer         = $majorOS.$minorOS")
$majorImg = U16 $off; $off += 2
$minorImg = U16 $off; $off += 2
Write-Output ("ImageVer      = $majorImg.$minorImg")
$majorSub = U16 $off; $off += 2
$minorSub = U16 $off; $off += 2
Write-Output ("Subsys Ver    = $majorSub.$minorSub")
$off += 4  # win32Ver
$sizeImage = U32 $off; $off += 4
$sizeHeaders = U32 $off; $off += 4
$checksum = U32 $off; $off += 4
$subsystem = U16 $off; $off += 2
$ddlChar = U16 $off; $off += 2
Write-Output ("SizeOfImage   = 0x{0:X8} ({0})" -f $sizeImage)
Write-Output ("SizeOfHeaders = 0x{0:X8} ({0})" -f $sizeHeaders)
Write-Output ("Checksum      = 0x{0:X8}" -f $checksum)
Write-Output ("Subsystem     = 0x{0:X4} ({1})" -f $subsystem, $(switch($subsystem){2{"GUI"}3{"CONSOLE"}default{"?"}}))
Write-Output ("DllCharacteristics = 0x{0:X4}" -f $ddlChar)

if ($is64) { $off += 4*4 } else { $off += 4*4 }  # stack/heap res/commit
$off += 4  # loaderFlags
$nDataDir = U32 $off; $off += 4
Write-Output ("NumberOfRvaAndSizes = $nDataDir")

$dataDirs = @()
for ($i=0; $i -lt $nDataDir; $i++) {
    $dataDirs += [pscustomobject]@{Rva=(U32 $off); Size=(U32 ($off+4))}
    $off += 8
}

$ddNames = @("Export","Import","Resource","Exception","Certificate","BaseReloc","Debug","Architecture","GlobalPtr","TLS","LoadConfig","BoundImport","IAT","DelayImport","CLR","Reserved")
Write-Output ""
Write-Output "Data Directories:"
for ($i=0; $i -lt $dataDirs.Count; $i++) {
    $d = $dataDirs[$i]
    $name = if ($i -lt $ddNames.Count) { $ddNames[$i] } else { "#$i" }
    Write-Output ("  {0,-14} RVA=0x{1:X8} Size=0x{2:X8}" -f $name, $d.Rva, $d.Size)
}

$secStart = $optStart + $szOptHdr
function RvaToOff($rva) {
    for ($s=0; $s -lt $nSections; $s++) {
        $va = U32 ($secStart + $s*40 + 12)
        $vsz = U32 ($secStart + $s*40 + 8)
        $ra = U32 ($secStart + $s*40 + 20)
        if ($rva -ge $va -and $rva -lt ($va + $vsz)) { return ($rva - $va) + $ra }
    }
    return -1
}

Write-Output ""
Write-Output "Sections:"
Write-Output ("{0,-8} {1,-12} {2,-12} {3,-10} {4,-10} {5,-10} {6}" -f "Name","VAddr","VSize","RawAddr","RawSize","RVA.End","Flags")
for ($s=0; $s -lt $nSections; $s++) {
    $so = $secStart + $s*40
    $name = [System.Text.Encoding]::ASCII.GetString($bytes[$so..($so+7)]).TrimEnd([char]0)
    $vsz = U32 ($so + 8); $va = U32 ($so + 12); $rsz = U32 ($so + 16); $ra = U32 ($so + 20)
    $flags = U32 ($so + 36)
    Write-Output ("{0,-8} 0x{1:X8}   0x{2:X8}   0x{3:X8} 0x{4:X8} 0x{5:X8}  0x{6:X8}" -f $name, $va, $vsz, $ra, $rsz, ($va+$vsz), $flags)
}

Write-Output ""
Write-Output "Rich header:"
$richOff = -1
for ($i = 0x80; $i -lt $e_lfanew; $i++) {
    if ($bytes[$i] -eq 0x52 -and $bytes[$i+1] -eq 0x69 -and $bytes[$i+2] -eq 0x63 -and $bytes[$i+3] -eq 0x68) {
        $richOff = $i
        break
    }
}
if ($richOff -gt 0) {
    $richXor = U32 ($richOff + 4)
    Write-Output ("  Rich marker at 0x{0:X4}, XOR key = 0x{1:X8}" -f $richOff, $richXor)
    $dansOff = -1
    for ($i = 0x40; $i -lt $richOff; $i++) {
        $dw = U32 $i
        if (($dw -bxor $richXor) -eq 0x536E6144) {  # 'DanS'
            $dansOff = $i
            break
        }
    }
    if ($dansOff -ge 0) {
        Write-Output ("  DanS marker at 0x{0:X4}" -f $dansOff)
        $i = $dansOff + 12  # skip DanS + key
        $prodNames = @{
            0x0F="Linker 5.10"; 0x10="Cvtomf 5.10"
            0x1E="Linker 6.00"; 0x1F="Cvtomf 6.00"
            0x20="Linker 6.00 SP1"; 0x21="Cvtomf 6.00 SP1"
            0x22="Linker 6.00 SP2"; 0x23="Cvtomf 6.00 SP2"
            0x24="Linker 6.00 SP3"; 0x25="Cvtomf 6.00 SP3"
            0x26="Linker 6.00 SP4"; 0x27="Cvtomf 6.00 SP4"
            0x28="Linker 6.00 SP5"; 0x29="Cvtomf 6.00 SP5"
            0x2A="Linker 6.00 SP6"; 0x2B="Cvtomf 6.00 SP6"
            0x3D="Linker 7.00"; 0x3E="Cvtomf 7.00"
            0x3F="Linker 7.00 SP1"; 0x40="Cvtomf 7.00 SP1"
            0x41="Linker 7.10"; 0x42="Cvtomf 7.10"
            0x43="Linker 7.10 SP1"; 0x44="Cvtomf 7.10 SP1"
            0x45="Linker 7.10 SP1 (alt)"; 0x46="Cvtomf 7.10 SP1 (alt)"
            0x47="Linker 8.00"; 0x48="Cvtomf 8.00"
        }
        $i = $dansOff + 16  # skip DanS + plain key + 1 sentinel block (key,key)
        while ($i -lt $richOff) {
            $w1 = U32 $i
            $w2 = U32 ($i + 4)
            $d1 = $w1 -bxor $richXor
            $d2 = $w2 -bxor $richXor
            if ($w1 -eq $richXor -and $w2 -eq $richXor) { break }  # sentinel/key
            if ($d1 -eq 0x68636952) { break }  # 'Rich'
            # Standard MS format: dword0 = (prodid << 16) | build, dword1 = count
            $prodId = ($d1 -shr 16) -band 0xFFFF
            $bld = $d1 -band 0xFFFF
            $nm = $prodNames[[int]$prodId]
            if (-not $nm) { $nm = "Unknown" }
            Write-Output ("  ProdId 0x{0:X4} ({1}) Build 0x{2:X4} x {3}" -f $prodId, $nm, $bld, $d2)
            $i += 8
        }
    } else { Write-Output "  DanS marker NOT FOUND" }
} else { Write-Output "  Rich marker NOT FOUND" }

Write-Output ""
Write-Output "Import directory:"
$importDd = $dataDirs[1]
if ($importDd.Rva -ne 0) {
    $off = RvaToOff $importDd.Rva
    $pos = $off
    while ($true) {
        $origFirst = U32 $pos
        $nameRva = U32 ($pos + 12)
        $firstThunk = U32 ($pos + 16)
        if ($nameRva -eq 0 -and $origFirst -eq 0) { break }
        $nameOff = RvaToOff $nameRva
        $sb = New-Object System.Text.StringBuilder
        for ($j = 0; $bytes[$nameOff + $j] -ne 0; $j++) { [void]$sb.Append([char]$bytes[$nameOff + $j]) }
        $dllName = $sb.ToString()
        $thunkRva = if ($origFirst -ne 0) { $origFirst } else { $firstThunk }
        $thunkOff = RvaToOff $thunkRva
        $nFunc = 0
        for ($k = 0;; $k += 4) {
            $v = U32 ($thunkOff + $k)
            if ($v -eq 0) { break }
            $nFunc++
        }
        Write-Output ("  {0,-24} {1} function(s)" -f $dllName, $nFunc)
        $pos += 20
    }
}