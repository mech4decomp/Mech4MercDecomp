/*
 * FUN_1000db80 (30 B) - __thiscall. Dtor: calls FUN_1000dcc0(this); if
 * (param_1 & 1) calls FUN_10001d60(this); returns this. RET 0x4.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000dcc0(void);   /* rel32 call, this in ECX */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void FUN_1000db80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1000dcc0
        test    byte ptr [esp+8], 0x1
        jz      skip
        push    esi
        call    FUN_10001d60
        add     esp, 4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
