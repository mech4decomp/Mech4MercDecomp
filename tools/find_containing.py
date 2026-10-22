import csv, sys
addrs = [int(x, 16) for x in sys.argv[1:]]
rows = [r for r in csv.DictReader(open(r"build\ghidra\MW4_project\dumps\functions.csv", encoding="utf-8"))]
for a in addrs:
    found = False
    for r in rows:
        try:
            entry = int(r["entry"], 16)
            size = int(r["size"])
        except (ValueError, KeyError):
            continue
        if entry <= a < entry + size:
            print(f"{a:#010x} inside {r['entry']} (size {size}, {r['name']}) offset +{a-entry}")
            found = True
            break
    if not found:
        print(f"{a:#010x} NOT in any known function")
