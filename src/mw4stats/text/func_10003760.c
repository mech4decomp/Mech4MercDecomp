/*
 * MW4Stats.dll - FUN_10003760 (0x10003760, 30 B, __thiscall)
 * Destructor: calls FUN_10003560(this); if (param_1 & 1) operator_delete(this).
 * RET 0x4. Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10003760 (30 B) -- thiscall DllMain-style ctor: calls the base ctor
 * 10003560(this), then if (flags & 1) operator_delete(this); returns this.
 * RET 4 (1 byte stack arg; this in ECX).
 */
extern void __cdecl FUN_10003560(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void FUN_10003760(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_10003560
        test byte ptr [esp+0x8], 0x1
        jz short L_78
        push esi
        call FUN_1001ee22
        add esp, 0x4
L_78:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
