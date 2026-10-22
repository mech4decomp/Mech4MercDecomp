/*
 * FUN_00423b60 (12 B) — __thiscall MLR accessor: returns
 * this->[0] + arg*4 (indexed element pointer into owned buffer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00423b60(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [esp+4]
        lea     eax, [eax+ecx*4]
        ret     4
    }
}
