/*
 * FUN_10025050 (30 B) - __thiscall. Ctor/dtor pair: calls base ctor
 * FUN_10025240, then if (param_1 & 1) calls destructor FUN_10001d60.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10025240(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10025050(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10025240
        test    byte ptr [esp + 8], 1
        jz      L_68
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_68:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
