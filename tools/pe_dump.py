#!/usr/bin/env python3
"""
tools/pe_dump.py -- read-only PE inventory + data-section ground truth.

Parses a reference/canonical PE (EXE or DLL) and prints:
  - header fields, section map
  - import directory (per-DLL function lists)
  - export directory (name/ordinal/RVA)
  - .rdata/.data contents as labeled hex notebooks (RVA + raw words + ascii)

Usage:
    python tools/pe_dump.py reference\MW4Stats.dll
    python tools/pe_dump.py reference\MW4Stats.dll --data-only      # skip code/headers
    python tools/pe_dump.py reference\MW4Stats.dll --out build\mw4stats_data.csv
      (--out writes .rdata+.data as 8-col aligned word CSV: rva,off,dword,float,ascii)
"""
import argparse
import struct
import sys

IMAGE_SCN_MEM_EXECUTE = 0x20000000
IMAGE_SCN_MEM_READ = 0x40000000
IMAGE_SCN_MEM_WRITE = 0x80000000


class PE:
    def __init__(self, path):
        self.path = path
        d = self.data = open(path, "rb").read()
        self.e = e = struct.unpack_from("<I", d, 0x3C)[0]
        assert d[e:e+4] == b"PE\x00\x00", "not a PE file"
        self.machine, self.nsec = struct.unpack_from("<HH", d, e+4)
        self.timestamp = struct.unpack_from("<I", d, e+8)[0]
        self.osize = struct.unpack_from("<H", d, e+20)[0]
        oh = e + 24
        self.magic = struct.unpack_from("<H", d, oh)[0]
        self.imagebase = struct.unpack_from("<I", d, oh+28)[0]
        self.entry = struct.unpack_from("<I", d, oh+16)[0]
        self.checksum = struct.unpack_from("<I", d, oh+64)[0]
        self.subsystem = struct.unpack_from("<H", d, oh+68)[0]
        self.filealign = struct.unpack_from("<I", d, oh+36)[0]
        self.secalign = struct.unpack_from("<I", d, oh+32)[0]
        self.dir_rva = struct.unpack_from("<I", d, oh+96)[0]
        so = oh + self.osize
        self.secs = []
        for i in range(self.nsec):
            s = d[so + i*40: so + i*40 + 40]
            name = s[:8].rstrip(b"\x00").decode("latin1")
            vs, rva, rs, rp = struct.unpack_from("<IIII", s, 8)
            flags = struct.unpack_from("<I", s, 36)[0]
            self.secs.append(dict(name=name, vs=vs, rva=rva, rs=rs, rp=rp, flags=flags))
        # file offset of the IMAGE_DATA_DIRECTORY array (it lives in the optional
        # header itself, starting at offset 96; dword here = export dir RVA)
        self.data_dir_off = oh + 96

    def r2o(self, rva):
        for s in self.secs:
            if s["rva"] <= rva < s["rva"] + max(s["rs"], s["vs"]):
                return s["rp"] + (rva - s["rva"])
        return None

    def rd(self, rva, n):
        """read n bytes at rva (may cross sections; no bounds check beyond image)"""
        out = bytearray()
        while n > 0:
            o = self.r2o(rva)
            if o is None or o + n > len(self.data):
                # pad with 0xff if beyond image end
                out += b"\xff" * min(n, 16)
                rva += min(n, 16)
                n -= min(n, 16)
                continue
            # clip to section end
            for s in self.secs:
                if s["rva"] <= rva < s["rva"] + max(s["rs"], s["vs"]):
                    room = s["rva"] + max(s["rs"], s["vs"]) - rva
                    take = min(n, room)
                    out += self.data[o:o+take]
                    rva += take
                    n -= take
                    break
        return bytes(out)

    def imports(self):
        imp_rva = struct.unpack_from("<I", self.data, self.data_dir_off + 1*8)[0]
        if not imp_rva:
            return []
        o = self.r2o(imp_rva)
        mods = []
        i = 0
        while True:
            trailer = struct.unpack_from("<I", self.data, o + i*20)[0]
            if trailer == 0:
                break
            nrv = struct.unpack_from("<I", self.data, o + i*20 + 12)[0]
            ft = struct.unpack_from("<I", self.data, o + i*20 + 16)[0]
            nmo = self.r2o(nrv)
            end = self.data.index(b"\x00", nmo)
            mod = self.data[nmo:end].decode("latin1")
            # function names via FirstThunk (IAT)
            names = []
            fo = self.r2o(ft)
            j = 0
            while fo is not None:
                v = struct.unpack_from("<I", self.data, fo + j*4)[0]
                if v == 0:
                    break
                if v & 0x80000000:  # ordinal import
                    names.append("#%d" % (v & 0xffff))
                else:
                    no = self.r2o(v)
                    end2 = self.data.index(b"\x00", no + 2)
                    names.append(self.data[no+2:end2].decode("latin1"))
                j += 1
            mods.append((mod, names))
            i += 1
        return mods

    def exports(self):
        exp_rva = struct.unpack_from("<I", self.data, self.data_dir_off + 0*8)[0]
        if not exp_rva:
            return []
        o = self.r2o(exp_rva)
        nb = struct.unpack_from("<I", self.data, o+16)[0]
        nf, na = struct.unpack_from("<II", self.data, o+20)
        af, an, ao = struct.unpack_from("<III", self.data, o+28)
        out = []
        an_o, ao_o, af_o = self.r2o(an), self.r2o(ao), self.r2o(af)
        for k in range(na):
            p = struct.unpack_from("<I", self.data, an_o + k*4)[0]
            nmo = self.r2o(p)
            end = self.data.index(b"\x00", nmo)
            nm = self.data[nmo:end].decode("latin1")
            oi = struct.unpack_from("<H", self.data, ao_o + k*2)[0]
            ord_ = nb + oi
            rv = struct.unpack_from("<I", self.data, af_o + oi*4)[0]
            out.append((nm, ord_, rv))
        return out


def dump(path, data_only, out_csv):
    pe = PE(path)
    if not data_only:
        print("== %s (%d bytes) ==" % (path, len(pe.data)))
        print("machine 0x%04x  nsec %d  ts 0x%08x  stamp" % (pe.machine, pe.nsec, pe.timestamp))
        print("imagebase 0x%x  entry 0x%x  subsystem %d  checksum 0x%x"
              % (pe.imagebase, pe.entry, pe.subsystem, pe.checksum))
        print("filealign 0x%x  secalign 0x%x" % (pe.filealign, pe.secalign))
        print("section map:")
        for s in pe.secs:
            rwx = ("R" if s["flags"] & IMAGE_SCN_MEM_READ else "") + \
                  ("W" if s["flags"] & IMAGE_SCN_MEM_WRITE else "") + \
                  ("X" if s["flags"] & IMAGE_SCN_MEM_EXECUTE else "")
            print("  %-8s rva=0x%x vs=0x%x raw=0x%x flags=0x%08x %s"
                  % (s["name"], s["rva"], s["vs"], s["rs"], s["flags"], rwx))
        print("imports:")
        for mod, names in pe.imports():
            print("  %-14s (%d): %s" % (mod, len(names), ", ".join(names)))
        print("exports:")
        for nm, ord_, rv in pe.exports():
            print("  %-30s ord=%d rva=0x%x" % (nm, ord_, rv))

    rows = []
    for name in (".rdata", ".data"):
        s = next((x for x in pe.secs if x["name"] == name), None)
        if not s:
            continue
        size = min(s["vs"] or s["rs"], s["rs"])
        b = pe.rd(s["rva"], size)
        print("== %s rva=0x%x size=0x%x ==" % (name, s["rva"], size))
        for i in range(0, size, 16):
            chunk = b[i:i+16]
            hexs = " ".join("%02X" % c for c in chunk)
            asc = "".join(chr(c) if 32 <= c < 127 else "." for c in chunk)
            print("  %08X  %-47s  %s" % (s["rva"]+i, hexs, asc))
            if out_csv:
                for j in range(0, len(chunk), 4):
                    word = chunk[j:j+4]
                    if len(word) == 4:
                        dword = struct.unpack("<I", word)[0]
                        f = struct.unpack("<f", word)[0]
                        a = "".join(chr(c) if 32 <= c < 127 else "." for c in word)
                        rows.append((s["rva"]+i+j, dword, f, a))
    if out_csv:
        import csv as _csv
        with open(out_csv, "w", newline="") as f:
            w = _csv.writer(f)
            w.writerow(["rva", "dword", "float", "ascii", "section"])
            for rr in rows:
                w.writerow(rr)
        print("wrote", out_csv, len(rows), "dword rows")


if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("pe", help="path to reference PE")
    ap.add_argument("--data-only", action="store_true")
    ap.add_argument("--out", default=None)
    args = ap.parse_args()
    dump(args.pe, args.data_only or args.out, args.out)
