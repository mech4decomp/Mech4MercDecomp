/*
 * FUN_10026300 (30 B) - __thiscall. Ctor/dtor pair: calls base ctor
 * FUN_10026500, then if (param_1 & 1) calls destructor FUN_10001d60.
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10026500(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10026300(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10026500
        test    byte ptr [esp + 8], 1
        jz      L_318
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_318:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
