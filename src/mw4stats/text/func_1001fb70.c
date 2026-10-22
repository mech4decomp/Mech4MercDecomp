/* auto-transcribed gap function 0x1001FB70 (32 B); review against reference; stepping stone */
extern void __cdecl FUN_1001edfe(void);
extern void __cdecl FUN_1001ee22(void);
extern int g_100227e8;
__declspec(naked) void FUN_1001fb70(void)
{
    __asm {
            mov eax, dword ptr [ebp + 0xc]
            push eax
            call FUN_1001ee22
            pop ecx
            ret
            mov eax, offset g_100227e8
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
