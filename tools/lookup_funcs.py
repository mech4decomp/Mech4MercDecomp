import csv, sys
want = {x.lower() for x in sys.argv[1:]}
rows = [r for r in csv.DictReader(open(r"build\ghidra\MW4_project\dumps\functions.csv", encoding="utf-8"))]
for r in rows:
    if r["entry"].lower() in want:
        print(f"{r['entry']:>10}  size={r['size']:>6}  {r['name']}  ({r['calling_conv']})")
