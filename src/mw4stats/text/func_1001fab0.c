/* auto-transcribed gap function 0x1001FAB0 (32 B); review against reference; stepping stone */
extern void __cdecl FUN_1000a110(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100226f8;
__declspec(naked) void FUN_1001fab0(void)
{
    __asm {
            mov eax, dword ptr [ebp + 4]
            push eax
            call FUN_1000a110
            pop ecx
            ret
            mov eax, offset g_100226f8
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
