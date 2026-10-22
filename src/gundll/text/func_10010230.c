/*
 * FUN_10010230 (30 B) - __thiscall, RET 0x4. Dtor: calls base dtor
 * FUN_100102c0, then if (param_1 & 1) calls FUN_10001d60, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100102c0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_10010230(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100102c0
        test    byte ptr [esp + 8], 1
        jz      L_48
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_48:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
