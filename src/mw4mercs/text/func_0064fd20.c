/*
 * FUN_0064fd20 (63 B) — __cdecl helper.
 *
 * Calls FUN_0064ff50(&DAT_007f3254, arg2); stores result to *arg1. If zero,
 * calls FUN_00650120(&DAT_007f3254, &arg2) and stores result. Else calls
 * FUN_00562f40(0xe).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064ff50(unsigned int a, unsigned int b);
extern void __cdecl FUN_00650120(unsigned int a, unsigned int *b);
extern void __cdecl FUN_00562f40(unsigned int a);

__declspec(naked) void FUN_0064fd20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    eax
        push    0x7f3254
        call    FUN_0064ff50
        mov     esi, dword ptr [esp + 0x10]
        add     esp, 0x8
        test    eax, eax
        mov     dword ptr [esi], eax
        jnz     L_nonzero
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x7f3254
        call    FUN_00650120
        add     esp, 0x8
        mov     dword ptr [esi], eax
        pop     esi
        ret
    L_nonzero:
        push    0xe
        call    FUN_00562f40
        add     esp, 0x4
        pop     esi
        ret
    }
}
