/* auto-transcribed gap function 0x1001F4A0 (32 B); review against reference; stepping stone */
extern void __cdecl FUN_1001edfe(void);
extern void __cdecl FUN_1001ee22(void);
extern int g_100220a8;
__declspec(naked) void FUN_1001f4a0(void)
{
    __asm {
            mov eax, dword ptr [ebp + 4]
            push eax
            call FUN_1001ee22
            pop ecx
            ret
            mov eax, offset g_100220a8
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
