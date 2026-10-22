/*
 * FUN_006a1dc0 (4 B) — __fastcall accessor: returns the double at [ECX+0x14].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a1dc0(void)
{
    __asm {
        fld     qword ptr [ecx + 0x14]
        ret
    }
}
