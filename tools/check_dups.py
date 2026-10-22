import csv
from collections import Counter

with open('build/ghidra/rename_map.csv') as f:
    reader = csv.DictReader(f)
    rows = list(reader)

print(f"Total entries: {len(rows)}")

# Check for duplicate new_names
name_counts = Counter(r['new_name'] for r in rows)
dupes = {n: c for n, c in name_counts.items() if c > 1}
print(f"Duplicate new_names: {len(dupes)}")
for name, cnt in sorted(dupes.items()):
    va_list = [r['va'] for r in rows if r['new_name'] == name]
    print(f"  {name} ({cnt}x): {', '.join(va_list)}")

# Check how many will actually be renamed (old != new)
to_rename = [r for r in rows if r['old_name'] != r['new_name']]
print(f"\nFiles to rename: {len(to_rename)}")
print(f"Files keeping name: {len(rows) - len(to_rename)}")
