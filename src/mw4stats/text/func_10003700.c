/* FUN_10003700 - __thiscall, 30 bytes
 * Destructor: base dtor FUN_100032e0, then conditional operator delete.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10003700 (30 B) -- thiscall DllMain-style ctor: calls the base ctor
 * 100032E0(this), then if (flags & 1) operator_delete(this); returns this.
 * RET 4 (1 byte stack arg; this in ECX).
 */

extern void __cdecl FUN_100032e0(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void FUN_10003700(void)
{
    __asm {
        push esi
        mov  esi, ecx
        call FUN_100032e0
        test byte ptr [esp + 0x8], 0x1
        jz   skip
        push esi
        call FUN_1001ee22
        add  esp, 0x4
skip:
        mov  eax, esi
        pop  esi
        ret  0x4
    }
}
