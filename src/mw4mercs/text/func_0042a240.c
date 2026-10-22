/* FUN_0042a240 - MLR dtor (__thiscall, RET 0x4, flag param) */
extern void __cdecl FUN_0042a260(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_0042a240(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_0042a260
        test byte ptr [esp + 0x8], 0x1
        jz L_42a258
        push esi
        call FUN_004084e0
        add esp, 0x4
L_42a258:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
