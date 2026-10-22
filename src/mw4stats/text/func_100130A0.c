/*
 * FUN_100130A0 (30 B, __thiscall, ECX = this, 1 stack param) - Scalar
 * deleting destructor: calls FUN_100130c0, then operator delete if
 * param & 1. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100130c0(void);
extern void __cdecl FUN_1001ee22(void);   /* operator delete */

__declspec(naked) void FUN_100130A0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100130c0
        test    byte ptr [esp + 0x8], 1
        jz      L_130b8
        push    esi
        call    FUN_1001ee22
        add     esp, 4
    L_130b8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
