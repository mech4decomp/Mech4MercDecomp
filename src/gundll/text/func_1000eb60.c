/*
 * FUN_1000eb60 (30 B) - __thiscall, RET 0x4.
 * Scalar-deleting destructor: calls FUN_1000edd0 (this), and if
 * param_1 & 1, frees via FUN_10001d60. Returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_1000edd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_1000eb60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1000edd0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_b78
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_b78:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
