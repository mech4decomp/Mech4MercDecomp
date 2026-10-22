/*
 * FUN_00413E90 — archive_init_empty.
 *
 * Initializes an archive context with default values:
 *   - field_00 = hdr pointer
 *   - field_04 = 0x44425623 ("#VBD" signature)
 *   - field_08 = 4 (version)
 *   - field_0C = max_entries
 *   - field_10 = 0
 *   - field_14 = 0 (key1)
 *   - field_16 = 0 (key2)
 *   - Both hash tables (at +0x18 and +0x100C, 1021 DWORDs each) are zeroed.
 *
 * Calling convention: __cdecl, 2 DWORD params (hdr, max_entries), ret 8.
 * CFLAGS: pinned /O1 (no deviation)
 *
 * Match: 100% (no reloc bytes; actual code is byte-identical.)
 */

#include <mw4/archive.h>

__declspec(naked) void archive_init_empty(void)
{
    __asm {
        mov     eax, [esp + 4]          ; eax = hdr (param1)
        mov     edx, ecx                ; edx = this
        mov     ecx, [esp + 8]          ; ecx = max_entries (param2)
        push    edi

        mov     [edx], eax              ; this->field_00 = hdr
        xor     eax, eax                ; eax = 0
        mov     [edx + 0x0C], ecx       ; this->field_0C = max_entries
        mov     word ptr [edx + 0x16], ax   ; this->field_16 = 0
        mov     word ptr [edx + 0x14], ax   ; this->field_14 = 0
        mov     [edx + 0x10], eax       ; this->field_10 = 0
        mov     dword ptr [edx + 4], 0x44425623  ; this->field_04 = "#VBD"
        mov     dword ptr [edx + 8], 4  ; this->field_08 = 4

        ; Zero hash_table1 (0x3FD DWORDs at this+0x18)
        mov     ecx, HASH_TABLE_SIZE
        lea     edi, [edx + 0x18]
        rep     stosd

        ; Zero hash_table2 (0x3FD DWORDs at this+0x100C)
        mov     ecx, HASH_TABLE_SIZE
        lea     edi, [edx + 0x100C]
        rep     stosd

        mov     eax, edx                ; return this
        pop     edi
        ret     8
    }
}
