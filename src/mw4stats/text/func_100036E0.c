/*
 * MW4Stats.dll - FUN_100036E0 (0x100036E0, 30 B, __thiscall)
 * Destructor: calls sub-object dtor FUN_10002ae0, then if (flags&1)
 * operator_delete(this). RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100036e0 (30 B) -- thiscall DllMain-style ctor: calls the base ctor
 * 100032E0(this), then if (flags & 1) operator_delete(this); returns this.
 * RET 4 (1 byte stack arg; this in ECX).
 */
extern void __cdecl FUN_10002ae0(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void FUN_100036E0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10002ae0
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
