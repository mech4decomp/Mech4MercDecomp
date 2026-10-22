/* auto-transcribed gap function 0x1001F910 (32 B); review against reference; stepping stone */
extern void __cdecl FUN_1000a110(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022500;
__declspec(naked) void FUN_1001f910(void)
{
    __asm {
            mov eax, dword ptr [ebp + 4]
            push eax
            call FUN_1000a110
            pop ecx
            ret
            mov eax, offset g_10022500
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
