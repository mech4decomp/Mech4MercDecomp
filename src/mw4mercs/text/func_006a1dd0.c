/*
 * FUN_006a1dd0 (7 B) — __fastcall accessor: returns [ECX+0x10] & 0xfffffffc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a1dd0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        and     eax, 0xfffffffc
        ret
    }
}
