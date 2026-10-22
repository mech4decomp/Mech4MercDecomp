/*
 * FUN_00612010 (11 B) — __thiscall getter: copies the dword pointed to
 * by `this` into the caller-provided out pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00612010(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [esp+4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
