/* func_00609d80 - animation-blend subsystem */
extern void __cdecl FUN_00609da0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_00609d80(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_00609da0
        test byte ptr [esp+0x8], 0x1
        jz L_609d98
        push esi
        call FUN_004084e0
        add esp, 0x4
L_609d98:
        mov eax, esi
        pop esi
        ret 0x4
    }
}
