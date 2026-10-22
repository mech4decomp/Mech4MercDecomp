/*
 * FUN_10013d60 (30 B) - __thiscall, RET 0x4.
 * Scalar-deleting destructor: calls FUN_10013e60 (this), and if
 * param_1 & 1, frees via FUN_10001d60. Returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_10013e60(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_10013d60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10013e60
        test    byte ptr [esp + 0x8], 0x1
        jz      L_d78
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_d78:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
