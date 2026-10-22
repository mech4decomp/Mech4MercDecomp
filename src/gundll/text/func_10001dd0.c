/*
 * FUN_10001dd0 (64 B) - __stdcall, RET 0x4.
 * String/array clone helper: if param_1 is NULL return NULL; else
 * compute size via FUN_1003791a, allocate via FUN_10001d50, copy via
 * FUN_10037999, return the new pointer.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003791a(void);   /* rel32 call */
extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern void __cdecl FUN_10037999(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10001dd0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        jnz     L_e1
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
    L_e1:
        push    edi
        call    FUN_1003791a
        lea     eax, [eax + eax + 2]
        push    eax
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jnz     L_ff
        pop     edi
        pop     esi
        ret     0x4
    L_ff:
        push    edi
        push    esi
        call    FUN_10037999
        add     esp, 0x8
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
