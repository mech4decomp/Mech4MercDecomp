/*
 * MW4Stats.dll - FUN_10003720 (0x10003720, 30 B, __thiscall)
 * Destructor: calls sub-object dtor FUN_10003300, then if (flags&1)
 * operator_delete(this). RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10003720 (30 B) -- thiscall DllMain-style ctor: calls base ctor
 * block 0x10003300, then if (flags & 1) operator_delete(this); returns this.
 * RET 4.
 */
extern void __cdecl FUN_10003300(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void FUN_10003720(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003300
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_1001ee22
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
