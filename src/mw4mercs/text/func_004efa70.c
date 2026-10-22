/* func_004efa70 - MLR/Adept state engine subsystem */
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern int g_007dc83c;
extern int g_007dc81c;

__declspec(naked) int func_004efa70(void)
{
    __asm {
        push 0x20
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L1
        mov ecx, dword ptr [g_007dc83c]
        push 0x0
        push 0x0
        push ecx
        push 0x774ca0
        push 0x21d
        mov ecx, eax
        call FUN_004d5c10
        mov dword ptr [g_007dc81c], eax
        ret
L1:
        mov dword ptr [g_007dc81c], 0x0
        ret
    }
}
