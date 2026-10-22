/*
 * FUN_10014500 (30 B) - __thiscall, RET 0x4.
 * Scalar-deleting destructor: calls FUN_10014590 (this), and if
 * param_1 & 1, frees via FUN_10001d60. Returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_10014590(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_10014500(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10014590
        test    byte ptr [esp + 0x8], 0x1
        jz      L_518
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_518:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
