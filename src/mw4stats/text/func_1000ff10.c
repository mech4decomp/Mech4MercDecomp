/*
 * FUN_1000ff10 (30 B) - __thiscall. Scalar-deleting destructor: calls the
 * real destructor FUN_1000ff30, then frees the object if the flag bit is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1000ff30(void);
extern void FUN_1000a110(void);

__declspec(naked) void FUN_1000ff10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1000ff30
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_1000a110
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
