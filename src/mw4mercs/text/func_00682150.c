/*
 * FUN_00682150 (17 B) — HUD helper: if the first stack arg is non-null, copy
 * the dword pointed to by the second stack arg into it. __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00682150(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        test    eax, eax
        jz      L_682160
        mov     ecx, dword ptr [esp+0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
    L_682160:
        ret
    }
}
