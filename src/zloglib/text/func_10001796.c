/* auto-transcribed gap function 0x10001796 (50 B); review against reference; stepping stone */
extern void __cdecl FUN_10001be9(void);
extern void __cdecl FUN_10002931(void);
extern int g_10027098;
__declspec(naked) void FUN_10001796(void)
{
    __asm {
            mov eax, dword ptr [g_10027098]
            test eax, eax
            je lbl_100017aa
            mov eax, dword ptr [eax + 4]
            test eax, eax
            je lbl_100017aa
            call eax
            jmp lbl_100017af
        lbl_100017aa:
            mov eax, 0x100040ec
        lbl_100017af:
            push dword ptr [esp + 4]
            push eax
            push 0x10004118
            call FUN_10002931
            push eax
            call FUN_10001be9
            add esp, 0x10
            ret
    }
}
