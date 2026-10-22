/* func_00609c90 - animation-blend subsystem */
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_00609c90(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_00416c60
        test byte ptr [esp+0x8], 0x1
        jz L_609ca8
        push esi
        call FUN_004084e0
        add esp, 0x4
L_609ca8:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
