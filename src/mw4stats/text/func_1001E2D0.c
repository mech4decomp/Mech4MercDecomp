/*
 * FUN_1001e2d0 (34 B) - __stdcall (1 arg, RET 0x4). If [arg+0x18] is null,
 * returns 0x80040290; otherwise calls FUN_1000e330 with [arg+0x18] and
 * [arg+0x14] and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000e330(void);

__declspec(naked) int __cdecl FUN_1001e2d0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx + 0x18]
        test    eax, eax
        jnz     L_e2e3
        mov     eax, 0x80040290
        ret     0x4
L_e2e3:
        push    eax
        mov     eax, dword ptr [ecx + 0x14]
        push    eax
        call    FUN_1000e330
        xor     eax, eax
        ret     0x4
    }
}
