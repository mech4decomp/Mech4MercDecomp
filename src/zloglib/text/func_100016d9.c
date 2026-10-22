/* auto-transcribed gap function 0x100016D9 (46 B); review against reference; stepping stone */
extern void __cdecl FUN_10001be9(void);
extern void __cdecl FUN_10002931(void);
extern int g_10027098;
__declspec(naked) void FUN_100016d9(void)
{
    __asm {
            mov eax, dword ptr [g_10027098]
            test eax, eax
            je lbl_100016ed
            mov eax, dword ptr [eax + 4]
            test eax, eax
            je lbl_100016ed
            call eax
            jmp lbl_100016f2
        lbl_100016ed:
            mov eax, 0x100040ec
        lbl_100016f2:
            push eax
            push 0x100040dc
            call FUN_10002931
            push eax
            call FUN_10001be9
            add esp, 0xc
            ret
    }
}
