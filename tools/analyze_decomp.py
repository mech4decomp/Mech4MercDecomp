#!/usr/bin/env python3
"""
Parse Ghidra decompilation output and generate meaningful file names
for the generic func_00XXXXX.c files.

Reads:  build/ghidra/all_decomp.txt  (and texture_decomp.txt)
Writes: build/ghidra/rename_map.csv   (va, old_name, new_name, category, description)
"""

import re
import os
import sys
from pathlib import Path

# Known vtable addresses -> class names (from AGENTS.md)
VTABLE_MAP = {
    0x0076E330: "class_76e330",
    0x0076E430: "class_76e430",
    0x0076E51C: "class_76e51c",
    0x0076E974: "class_76e974",
    0x0076EC24: "class_76ec24",
    0x0079E9AC: "class_79e9ac",
    0x0077260C: "database",
    0x00772654: "db_item",
    0x007725A0: "iterator",
    0x00772A54: "db_item_2",
    0x0076D3F0: "base_obj",
    0x0076CD9C: "base_obj_2",
    0x0079E29C: "texture_sub",
    0x0076D7B0: "stream",
    0x00798C44: "vtable_798c44",
    0x00799CD8: "vtable_799cd8",
    0x007AFAE8: "type_info",
}

# Known function addresses -> names (from AGENTS.md already-matched functions)
KNOWN_FUNCS = {
    0x004084C0: "alloc",
    0x004084D0: "realloc",
    0x004084E0: "dealloc",
    0x006F3C80: "gos_malloc",
    0x006F4230: "gos_free",
    0x006F4950: "heap_enter",
    0x006F49A0: "heap_leave",
    0x006FAB90: "assert_func",
    0x006F91D0: "log_dispatcher",
    0x006FA880: "log_append",
    0x006FA8F0: "log_flush_int",
    0x006FB7C0: "delete_file",
    0x006FACA0: "file_open",
    0x006FBC60: "get_full_path_name",
    0x004145E0: "archive_open",
    0x00414820: "archive_open_stream",
    0x004148F0: "archive_close",
    0x00413BE0: "archive_fetch_by_index",
    0x00413C70: "archive_fetch_by_name",
    0x00413D20: "archive_fetch_iter",
    0x00413830: "archive_member_fetch",
    0x006FC220: "lzw_decompress",
    0x006FBE80: "lzw_compress",
    0x006C9B80: "texture_decode",
    0x006CA170: "surface_unlock",
    0x006CA220: "texture_get_surface",
    0x006CA950: "texture_cache_clear",
    0x006CA0E0: "texture_release",
    0x006CA960: "texture_cache_free",
    0x006CA9A0: "texture_lru_evict",
    0x006CAEA0: "texture_ctor",
    0x006CAF90: "texture_log",
    0x006CAEF0: "texture_set_log_ctx",
    0x006CAF00: "texture_set_log_dims",
    0x006CAF20: "texture_set_log_state",
    0x006CB0E0: "texture_sub_ctor",
    0x006CBF20: "texture_log_handler_wrap",
    0x006CB240: "texture_log_handler_default",
    0x006CB9F0: "texture_glyph_blitter",
    0x006C8B90: "texture_load_bmp",
    0x006C8C40: "texture_load_tga",
    0x006C8AE0: "texture_load_jpeg",
    0x006C8950: "texture_name_init",
    0x006C8E20: "texture_get_pixel_base",
    0x006C8E30: "texture_name_finalize",
    0x006C9210: "texture_get_pixel",
    0x006CB160: "texture_cond_init",
    0x006CBEA0: "texture_string_pixel_width",
    0x004D2D00: "database_ctor_path",
    0x004D2E00: "database_ctor_stream",
    0x004D3210: "database_dtor_0",
    0x004D2B60: "database_dtor_1",
    0x004D3110: "database_dtor_2",
    0x00415B70: "database_assert",
    0x00416EB0: "database_clear",
    0x00416EF0: "database_get_item",
    0x00416EE0: "database_get_count",
    0x00416F10: "database_is_empty",
    0x00416F20: "database_register",
    0x00416F60: "database_lookup",
    0x004D3030: "database_factory",
    0x004D31B0: "database_compare_id",
    0x004D31E0: "database_compare_name",
    0x004D2A40: "database_dtor_body_0",
    0x004D2B80: "database_dtor_body_1",
    0x00416E50: "list_dtor_body",
    0x00416110: "singleton_get_item",
    0x00415D70: "singleton_ctor",
    0x00415D40: "item_init",
    0x004170A0: "list_find_by_name",
    0x00417030: "list_post_insert",
    0x00417170: "iterator_ctor",
    0x00417230: "iterator_next",
    0x004171B0: "iterator_dtor",
    0x00417980: "subobj_dtor_2c",
    0x00415BC0: "base_dtor_empty",
    0x00415BE0: "register_finalize",
    0x00415380: "base_dtor",
    0x00415E80: "singleton_pool_alloc",
    0x00416F90: "register_add_item",
    0x006F4710: "singleton_sub_init",
    0x00415CF0: "item_sddtor",
    0x004D3150: "item_dtor",
    0x00415C10: "node_insert",
    0x00415C40: "iterator_dtor_body",
    0x00416130: "pool_return",
    0x00417890: "node_destroy",
    0x00417910: "node_destroy_slist",
    0x00415E30: "singleton_dtor",
    0x00416DE0: "item_dtor_body",
    0x004170F0: "list_index_of",
    0x00417120: "list_remove_at",
    0x00415D00: "item_unlink",
    0x00415CD0: "item_base_dtor_empty",
    0x00415180: "object_init",
    0x004179B0: "subobj_init_2c",
    0x006BFA50: "error_log",
    0x006C07C0: "tokenizer",
    0x006C7600: "tex_set_30_34_38",
    0x006C7620: "tex_set_10_14",
    0x006C7640: "tex_set_floats_18_1c_20",
    0x006C7660: "tex_set_08",
    0x006C7670: "tex_set_0c",
    0x006C8490: "tex_vcall_3c_1",
    0x006C84A0: "tex_vcall_3c_2",
    0x006C84B0: "tex_vcall_3c_3",
    0x006C8590: "tex_get_20",
    0x006C8630: "tex_wrapper_8f00",
    0x006C8650: "tex_wrapper_8ee0",
    0x006C8660: "tex_get_08",
    0x006C8670: "tex_get_04",
    0x006C8680: "tex_get_0c",
    0x006C86B0: "tex_get_pixel_wrapper",
    0x006C86D0: "tex_set_byte_1c",
}


def parse_decomp_file(filepath):
    """Parse a Ghidra decompilation log file into function entries."""
    with open(filepath, "r", encoding="utf-8") as f:
        content = f.read()

    # Split on the ==== header lines
    entries = []
    # Pattern: ==== 0xXXXXXX  name=FUN_XXXX  size=NN ====
    pattern = r"==== (0x[0-9A-Fa-f]+)\s+name=(\w+)\s+size=(\d+)\s*====\s*\n(.*?)(?====|\Z)"
    for m in re.finditer(pattern, content, re.DOTALL):
        va = int(m.group(1), 16)
        name = m.group(2)
        size = int(m.group(3))
        body = m.group(4).strip()
        entries.append({"va": va, "name": name, "size": size, "body": body})
    return entries


def extract_callees(body):
    """Extract callee VAs from the --- callees (N) --- section."""
    callees = []
    m = re.search(r"--- callees \(\d+\) ---\s*\n(.*)", body, re.DOTALL)
    if m:
        for line in m.group(1).strip().split("\n"):
            cm = re.match(r"\s*(0x[0-9A-Fa-f]+)\s+size=\d+\s+name=(\w+)", line)
            if cm:
                callees.append({"va": int(cm.group(1), 16), "name": cm.group(2)})
    return callees


def extract_decompiled_code(body):
    """Extract just the decompiled C code (before callees section)."""
    m = re.split(r"--- callees \(\d+\) ---", body, maxsplit=1)
    return m[0].strip()


def extract_vtable_refs(code):
    """Extract vtable addresses referenced in the code."""
    refs = re.findall(r"&PTR_FUN_([0-9A-Fa-f]+)", code)
    return [int(r, 16) for r in refs]


def categorize(entry):
    """Categorize a function and generate a meaningful name."""
    code = extract_decompiled_code(entry["body"])
    callees = extract_callees(entry["body"])
    va = entry["va"]
    size = entry["size"]

    # Extract calling convention and signature
    # Ghidra format: "ret_type [__thiscall|__fastcall|__stdcall|__cdecl] FUN_xxx(params)"
    # Use search to find the FUN_ token anywhere in the first few lines
    sig_match = re.search(r"(FUN_\w+)\s*\(([^)]*)\)", code)
    if not sig_match:
        return "unknown", f"func_{va:08x}", "Could not parse signature"

    func_name = sig_match.group(1)
    params = sig_match.group(2)

    is_thiscall = "__thiscall" in code[:200] or "__fastcall" in code[:200]
    is_void = "void " in code[:200]

    # Pattern: Scalar deleting destructor
    # __thiscall FUN_XXX(param1, byte param2) { FUN_BODY(); if (param2 & 1) FUN_004084e0(param1); return param1; }
    sddtor_pattern = re.search(
        r"FUN_(\w+)\(\);\s*\n\s*if\s*\(\((\w+)\s*&\s*1\)\s*!=\s*0\)\s*\{\s*\n\s*FUN_004084e0\(",
        code,
    )
    if sddtor_pattern:
        body_func = int("00" + sddtor_pattern.group(1), 16)
        # Name based on the body function's target
        body_name = KNOWN_FUNCS.get(body_func, None)
        if body_name:
            return "scalar_deleting_dtor", f"sddtor_{body_name}", f"scalar deleting destructor, body={body_name}"
        return "scalar_deleting_dtor", f"sddtor_{body_func:08x}", f"scalar deleting destructor, body=FUN_{body_func:08x}"

    # Pattern: Vtable setter thunk
    # *param_1 = &PTR_FUN_XXXX; FUN_YYYY();
    vtable_setter = re.search(r"\*param_1\s*=\s*&PTR_FUN_([0-9A-Fa-f]+);\s*\n\s*FUN_(\w+)\(\);", code)
    if vtable_setter:
        vtable_va = int(vtable_setter.group(1), 16)
        next_func = int("00" + vtable_setter.group(2), 16)
        class_name = VTABLE_MAP.get(vtable_va, f"vtbl_{vtable_va:06x}")
        return "vtable_set_ctor", f"{class_name}_ctor", f"sets vtable {vtable_va:08x} then calls FUN_{next_func:08x}"

    # Pattern: Vtable-setting constructor (broader: sets *param or param[N] = &PTR_FUN_XXXX with other init)
    vtable_set_any = re.search(r"(?:\*param_1|param_1_00\[(?:0x[0-9A-Fa-f]+|\d+)\]|param_1\[(?:0x[0-9A-Fa-f]+|\d+)\])\s*=\s*&PTR_FUN_([0-9A-Fa-f]+);", code)
    if vtable_set_any:
        vtable_va = int(vtable_set_any.group(1), 16)
        class_name = VTABLE_MAP.get(vtable_va, f"vtbl_{vtable_va:06x}")
        return "vtable_ctor", f"{class_name}_ctor", f"sets vtable {vtable_va:08x}"

    # Pattern: Virtual call with specific vtable offset
    # (**(code **)(*param_1 + 0xNN))(...)
    vcall = re.search(r"\(\*\*\(code\s*\*\*\)\(\*param_1\s*\+\s*(0x[0-9A-Fa-f]+)\)\)", code)
    if vcall and size < 50:
        vtbl_off = int(vcall.group(1), 16)
        return "vcall", f"vcall_{vtbl_off:02x}", f"virtual call via vtable+{vtbl_off}"

    # Pattern: Named parameter serialization (FUN_00411c40 / FUN_00411d10 with string keys)
    if re.search(r'FUN_00411c40\s*\(\s*"', code) or re.search(r'FUN_00411d10\s*\(\s*&DAT_', code):
        return "serialize", f"serialize_{va:08x}", "named parameter serialization"

    # Pattern: Virtual dispatch at any offset (broader - catch 3x3 grid loops etc.)
    vcall_any = re.search(r"\(\*\*\(code\s*\*\*\)\(\*(\w+)\s*\+\s*(0x[0-9A-Fa-f]+)\)\)", code)
    if vcall_any and size < 50:
        vtbl_off = int(vcall_any.group(2), 16)
        return "vcall", f"vcall_{vtbl_off:02x}", f"virtual call via vtable+{vtbl_off}"

    # Pattern: Simple getter - returns a field
    # return *(type *)(param_1 + N);
    getter = re.search(r"return\s*\*\((\w+)\s*\*\)\s*\(param_1\s*\+\s*(\d+)\)\s*;", code)
    if getter and size < 20:
        offset = int(getter.group(2))
        return "getter", f"get_field{offset:02x}", f"returns *(param+0x{offset:02x})"

    # Pattern: Simple getter via array index
    # return param_1[N];
    getter_arr = re.search(r"return\s+param_1\[(\d+)\]\s*;", code)
    if getter_arr and size < 20:
        idx = int(getter_arr.group(1))
        offset = idx * 4
        return "getter", f"get_field{offset:02x}", f"returns param[{idx}] (offset 0x{offset:02x})"

    # Pattern: Simple setter - stores param to a field
    # *(type *)(param_1 + N) = param_2;
    setter = re.search(r"\*\((\w+)\s*\*\)\s*\(param_1\s*\+\s*(\d+)\)\s*=\s*param_2\s*;", code)
    if setter and size < 30:
        offset = int(setter.group(2))
        return "setter", f"set_field{offset:02x}", f"sets *(param+0x{offset:02x}) = param2"

    # Pattern: Wrapper/thunk - just calls another function
    # void FUN_XXX() { FUN_YYY(); return; }
    lines = [l.strip() for l in code.split("\n") if l.strip() and not l.strip().startswith(("void", "undefined", "int", "char", "float", "uint", "long", "{", "}", "//"))]
    if len(lines) == 1 and re.match(r"FUN_\w+\(", lines[0]):
        callee = re.match(r"FUN_(\w+)\(", lines[0])
        if callee:
            target_va = int("00" + callee.group(1), 16)
            target_name = KNOWN_FUNCS.get(target_va, None)
            if target_name:
                return "thunk", f"{target_name}_thunk", f"thunk to FUN_{target_va:08x} ({target_name})"
            return "thunk", f"thunk_{target_va:08x}", f"thunk to FUN_{target_va:08x}"

    # Pattern: Returns a constant
    # return N;
    const_ret = re.search(r"return\s+(\d+)\s*;", code)
    if const_ret and size < 10:
        val = int(const_ret.group(1))
        return "const", f"return_{val}", f"returns constant {val}"

    # Pattern: Conditional call
    # if (param != 0) { FUN_XXX(param); }
    cond_call = re.search(r"if\s*\(\(?\s*(\w+)\s*(?:!=\s*0|==\s*0)\s*\)?\)\s*\{\s*FUN_(\w+)\(", code)
    if cond_call and size < 30:
        target = int("00" + cond_call.group(2), 16)
        target_name = KNOWN_FUNCS.get(target, f"fun_{target:08x}")
        return "cond_call", f"cond_{target_name}", f"conditional call to {target_name}"

    # Check callees for known functions
    for c in callees:
        if c["va"] in KNOWN_FUNCS:
            # If it calls a known function, note it
            pass

    # Try to identify by string constants or known patterns
    # Check for specific function calls
    calls = re.findall(r"FUN_(\w+)\(", code)
    call_vas = [int("00" + c, 16) for c in calls]

    # Check for Enter/LeaveCriticalSection
    if "EnterCriticalSection" in code or any(c == 0x77 for c in call_vas):
        pass

    # Check for specific patterns
    # File I/O
    if any(kw in code for kw in ["CreateFile", "ReadFile", "WriteFile", "CloseHandle", "GetFileSize"]):
        return "file_io", f"file_io_{va:08x}", "file I/O operation"

    # String operations
    if any(kw in code for kw in ["_stricmp", "strlen", "_mbsstr", "strcmp", "strcpy", "sprintf"]):
        if "GetFullPathName" in code or "GetFileAttributes" in code:
            return "path_util", f"path_util_{va:08x}", "path utility"
        return "string_op", f"str_op_{va:08x}", "string operation"

    # Memory operations
    if any(kw in code for kw in ["memmove", "memcpy", "memset"]):
        return "mem_op", f"mem_op_{va:08x}", "memory operation"

    # Math operations
    if any(kw in code for kw in ["FILD", "fld", "fstp", "fild", "fadd", "fmul"]):
        return "float_math", f"float_math_{va:08x}", "floating point math"

    # Pattern: Type byte dispatch (switch on **(int **)(param + 4) == 0xNN)
    if re.search(r'\*\*\(int\s*\*\*\)\(param_1\s*\+\s*4\)\s*==\s*0x[0-9A-Fa-f]+', code) or \
       re.search(r'iVar\d+\s*==\s*0x8[0-9A-Fa-f]', code):
        return "dispatcher", f"dispatch_{va:08x}", "type byte dispatcher"

    # Pattern: Linked list iteration over DAT globals
    if re.search(r"DAT_00[0-9A-Fa-f]+\s*=\s*0;\s*\n\s*return", code) and \
       any(kw in code for kw in ["FUN_006f4850", "FUN_006f4230", "FUN_004084e0"]):
        return "cleanup", f"cleanup_{va:08x}", "resource cleanup (zeroes globals after release)"

    # Pattern: Obfuscated pointer access (DAT_007dab44 ^ DAT_007dab40)
    if "007dab44" in code and "007dab40" in code:
        return "game_state", f"game_state_{va:08x}", "obfuscated game state access"

    # Pattern: 3x3 grid neighborhood iteration
    if re.search(r"param_1\s*\+\s*-1.*param_1\s*\+\s*1", code, re.DOTALL) and \
       re.search(r"param_2\s*\+\s*-1.*param_2\s*\+\s*1", code, re.DOTALL):
        return "grid_iter", f"grid_iter_{va:08x}", "3x3 grid neighborhood iteration"

    # Pattern: Conditional resource cleanup (if DAT != 0, call FUN then zero it)
    if re.search(r"if\s*\(DAT_00[0-9A-Fa-f]+\s*!=\s*0\)\s*\{[^}]*FUN_\w+\(.*DAT", code) and \
       re.search(r"DAT_00[0-9A-Fa-f]+\s*=\s*0;", code):
        return "cleanup_cond", f"cleanup_cond_{va:08x}", "conditional resource cleanup"

    # If function has no callees and is very small
    if len(callees) == 0 and size < 20:
        return "small_helper", f"helper_{va:08x}", f"small helper ({size}B, no callees)"

    # If function has no callees
    if len(callees) == 0:
        return "leaf", f"leaf_{va:08x}", f"leaf function ({size}B)"

    # Default: use callee info for naming
    callee_names = [KNOWN_FUNCS.get(c["va"], None) for c in callees]
    known_callees = [n for n in callee_names if n]
    if known_callees:
        return "wrapper", f"wrap_{known_callees[0]}", f"wraps {', '.join(known_callees)}"

    return "unknown", f"func_{va:08x}", f"unclassified ({size}B, {len(callees)} callees)"


def main():
    entries = []
    for fname in ["build/ghidra/all_decomp.txt", "build/ghidra/texture_decomp.txt"]:
        fpath = Path(fname)
        if fpath.exists():
            entries.extend(parse_decomp_file(fpath))

    print(f"Parsed {len(entries)} function decompilations")

    # VAs that Ghidra couldn't decompile ("no function at this entry") but are
    # documented in AGENTS.md as vtable methods.
    MANUAL_MAP = {
        0x00688000: ("vtbl_798c44_set_byte1a", "vtable_method", "slot 14: set byte_1A (vtable 0x798C44)"),
        0x006884B0: ("vtbl_798c44_serialize_write", "vtable_method", "slot 17: serialization write wrapper (vtable 0x798C44)"),
        0x006884E0: ("vtbl_798c44_serialize_read", "vtable_method", "slot 18: deserialization read wrapper (vtable 0x798C44)"),
        0x00688510: ("vtbl_798c44_copy3", "vtable_method", "slot 19: copy 3 dwords + call no-op (vtable 0x798C44)"),
        0x0069F280: ("vtbl_799cd8_noop5", "vtable_method", "slot 5: no-op, RET 4 (vtable 0x799CD8)"),
        0x0069F290: ("vtbl_799cd8_return1", "vtable_method", "slot 6: return 1 (vtable 0x799CD8)"),
        0x0069F2A0: ("vtbl_799cd8_set_param1", "vtable_method", "slot 10: set *param = 1 (vtable 0x799CD8)"),
        0x0069F2B0: ("vtbl_799cd8_return1", "vtable_method", "slot 11: return 1 (vtable 0x799CD8)"),
        0x0069F2C0: ("vtbl_799cd8_return0", "vtable_method", "slot 12: return 0 (vtable 0x799CD8)"),
        0x0069F2D0: ("vtbl_799cd8_noop13", "vtable_method", "slot 13: no-op (single ret) (vtable 0x799CD8)"),
        0x0069F2E0: ("vtbl_799cd8_noop14", "vtable_method", "slot 14: no-op (single ret) (vtable 0x799CD8)"),
        0x006A09D0: ("vtbl_799cd8_return0", "vtable_method", "slot 7: return 0 (vtable 0x799CD8)"),
        0x006A09E0: ("vtbl_799cd8_return0b", "vtable_method", "slot 8: return 0 byte (vtable 0x799CD8)"),
        0x006A09F0: ("vtbl_799cd8_return_float", "vtable_method", "slot 9: return global float (vtable 0x799CD8)"),
        0x006A1BA0: ("vtbl_799cd8_wrap_6a02e0", "vtable_method", "slot 16: wrapper calling FUN_006A02E0 (vtable 0x799CD8)"),
        0x006A2050: ("vtbl_799cd8_wrap_6a20a0", "vtable_method", "slot 19: wrapper calling FUN_006A20A0 (vtable 0x799CD8)"),
        0x006B0640: ("vtbl_798c44_return0", "vtable_method", "slot 12: return 0 (vtable 0x798C44)"),
        0x006B0650: ("vtbl_798c44_set_neg1_floats", "vtable_method", "slot 11: set 3 floats to -1.0 (vtable 0x798C44)"),
        0x006B0760: ("vtbl_798c44_cond_float", "vtable_method", "slot 13: conditional float return (vtable 0x798C44)"),
    }

    results = []
    unnamed = 0
    for entry in entries:
        category, suggested_name, desc = categorize(entry)
        if suggested_name is None:
            suggested_name = f"func_{entry['va']:08x}"
            unnamed += 1
        results.append({
            "va": entry["va"],
            "old_name": f"func_{entry['va']:08x}",
            "new_name": suggested_name,
            "category": category,
            "description": desc,
            "size": entry["size"],
        })

    # Add manual entries for "no function" VAs
    existing_vas = {r["va"] for r in results}
    for va, (name, cat, desc) in MANUAL_MAP.items():
        if va not in existing_vas:
            results.append({
                "va": va,
                "old_name": f"func_{va:08x}",
                "new_name": name,
                "category": cat,
                "description": desc,
                "size": 0,
            })

    # Also add remaining "no function" VAs with generic names (so they're in the map)
    import re as re_mod
    with open("build/ghidra/all_decomp.txt", "r") as f:
        nofunc_content = f.read()
    nofunc_vas = re_mod.findall(r"==== (0x[0-9A-Fa-f]+) : no function at this entry ====", nofunc_content)
    for va_str in nofunc_vas:
        va = int(va_str, 16)
        if va not in existing_vas and va not in MANUAL_MAP:
            results.append({
                "va": va,
                "old_name": f"func_{va:08x}",
                "new_name": f"func_{va:08x}",
                "category": "no_function",
                "description": "not in Ghidra function list",
                "size": 0,
            })
            existing_vas.add(va)

    # Write CSV
    import csv as csvmod
    outpath = Path("build/ghidra/rename_map.csv")
    
    # Deduplicate: for names that appear multiple times, append VA suffix
    from collections import Counter
    name_counts = Counter(r["new_name"] for r in results)
    for r in results:
        if name_counts[r["new_name"]] > 1 and r["new_name"] != r["old_name"]:
            suffix = f"_{r['va'] & 0xFFF:03x}"
            r["new_name"] = r["new_name"] + suffix
    
    with open(outpath, "w", encoding="utf-8", newline="") as f:
        writer = csvmod.writer(f)
        writer.writerow(["va", "old_name", "new_name", "category", "description", "size"])
        for r in results:
            writer.writerow([f"0x{r['va']:08X}", r['old_name'], r['new_name'], r['category'], r['description'], r['size']])

    # Summary
    from collections import Counter
    cats = Counter(r["category"] for r in results)
    print("\nCategory distribution:")
    for cat, cnt in cats.most_common():
        marker = " *" if cat == "unknown" else ""
        print(f"  {cat:30s} {cnt:4d}{marker}")

    renamed = sum(1 for r in results if r["new_name"] != r["old_name"])
    print(f"\nTotal: {len(results)} functions")
    print(f"Renamed: {renamed}")
    print(f"Still unnamed: {unnamed}")
    print(f"Output: {outpath}")


if __name__ == "__main__":
    main()
