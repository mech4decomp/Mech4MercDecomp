/*
 * FUN_00624960 (14 B) — destructor. If *this != 0, free it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00624960(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_96d
        push    eax
        call    FUN_004084e0
        pop     ecx
L_96d:
        ret
    }
}
