/*
 * FUN_10008090 (55 B) - __stdcall, RET 0x4. Calls CoInitializeEx (IAT
 * 0x10049240) and FUN_10008dc0; sets flags in param_1, returns 0x8007000e
 * on failure.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10049240;              /* IAT: CoInitializeEx */
extern void __cdecl FUN_10008dc0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10008090(void)
{
    __asm {
        push    esi
        push    edi
        push    0
        push    0
        call    dword ptr [g_10049240]
        test    eax, eax
        mov     edi, dword ptr [esp + 0xc]
        jl      L_a8
        mov     byte ptr [edi + 1], 1
L_a8:
        xor     esi, esi
        call    FUN_10008dc0
        test    eax, eax
        jnz     L_bd
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     4
L_bd:
        mov     byte ptr [edi], 1
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
