/* auto-transcribed gap function 0x1001F3E0 (32 B); review against reference; stepping stone */
extern void __cdecl FUN_1001edfe(void);
extern void __cdecl FUN_1001ee22(void);
extern int g_10021fb0;
__declspec(naked) void FUN_1001f3e0(void)
{
    __asm {
            mov eax, dword ptr [ebp + 4]
            push eax
            call FUN_1001ee22
            pop ecx
            ret
            mov eax, offset g_10021fb0
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
