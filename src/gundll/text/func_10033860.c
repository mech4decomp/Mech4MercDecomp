/*
 * FUN_10033860 (39 B) - __thiscall, RET 0xc. Dispatches on *param_2:
 * 0 -> FUN_100309b0, 2 -> FUN_10036900.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100309b0(void);   /* rel32 call */
extern void __cdecl FUN_10036900(void);   /* rel32 call */

__declspec(naked) void FUN_10033860(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [edx]
        test    eax, eax
        jnz     L_76
        push    ecx
        mov     ecx, dword ptr [edx + 4]
        call    FUN_100309b0
        ret     0xc
L_76:
        cmp     eax, 2
        jnz     L_84
        push    ecx
        mov     ecx, dword ptr [edx + 4]
        call    FUN_10036900
L_84:
        ret     0xc
    }
}
