/* FUN_1001b8b0 - __thiscall, 30 bytes
 * Destructor: base dtor FUN_1001b8d0, then conditional operator delete. */

extern void __cdecl FUN_1001b8d0(void);
extern void __cdecl FUN_1001ee22(void);   /* operator delete */

__declspec(naked) void FUN_1001b8b0(void)
{
    __asm {
        push esi
        mov  esi, ecx
        call FUN_1001b8d0
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
