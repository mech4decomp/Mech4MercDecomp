/*
 * FUN_00698990 (12 B) — __thiscall: returns *this + param1*4
 * (indexed pointer accessor).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00698990(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [esp+4]
        lea     eax, [eax+ecx*4]
        ret     4
    }
}
