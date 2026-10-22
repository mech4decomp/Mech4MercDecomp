/*
 * FUN_10018cf0 (30 B) - __thiscall. Ctor/dtor pair: calls base ctor
 * FUN_10018df0, then if (param_1 & 1) frees via FUN_10001d60.
 *
 * __thiscall (bare).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10018df0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10018cf0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10018df0
        test    byte ptr [esp + 8], 1
        jz      skip_free
        push    esi
        call    FUN_10001d60
        add     esp, 4
skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
