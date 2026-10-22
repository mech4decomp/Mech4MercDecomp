/*
 * FUN_10033980 (30 B) - __thiscall dtor. Calls FUN_100339a0, frees via
 * FUN_10001d60 if (param_1 & 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100339a0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10033980(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100339a0
        test    byte ptr [esp + 8], 1
        jz      L_skip
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
