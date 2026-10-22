/* auto-transcribed gap function 0x10020170 (80 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001d940(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022ef0;
__declspec(naked) void FUN_10020170(void)
{
    __asm {
            lea ecx, [ebp - 0x8e4]
            jmp FUN_10001190
            lea ecx, [ebp - 0x908]
            jmp FUN_1001d940
            lea ecx, [ebp - 0x91c]
            jmp FUN_1001d940
            lea ecx, [ebp - 0x84c]
            jmp FUN_10001190
            lea ecx, [ebp - 0x78c]
            jmp FUN_10001190
            lea ecx, [ebp - 0x6f4]
            jmp FUN_10001190
            mov eax, offset g_10022ef0
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
    }
}
