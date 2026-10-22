/*
 * FUN_006247a0 (22 B) — destructor. If *this != 0, free it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_006247a0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [ecx]
        test    eax, eax
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (89 04 24); ref needs 89 44 24 00 */
        __emit  0x89
        __emit  0x44
        __emit  0x24
        __emit  0x00
        jz      L_b4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_b4:
        pop     ecx
        ret
    }
}
