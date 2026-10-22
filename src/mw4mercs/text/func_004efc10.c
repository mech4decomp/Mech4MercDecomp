/* func_004efc10 - MLR/Adept state engine subsystem */
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004bc660(void);
extern void __cdecl FUN_006f49a0(void);
extern int g_007daac0;

__declspec(naked) int func_004efc10(void)
{
    __asm {
        mov eax, dword ptr [g_007daac0]
        push esi
        push eax
        call FUN_006f4950
        push 0x15c
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L1
        mov ecx, eax
        call FUN_004bc660
        mov esi, eax
        call FUN_006f49a0
        mov eax, esi
        pop esi
        ret
L1:
        xor esi, esi
        call FUN_006f49a0
        mov eax, esi
        pop esi
        ret
    }
}
