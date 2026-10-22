/* auto-transcribed gap function 0x1001FC90 (48 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022930;
__declspec(naked) void FUN_1001fc90(void)
{
    __asm {
            lea ecx, [ebp - 0x4a4]
            jmp FUN_10001190
            lea ecx, [ebp - 0x5d4]
            jmp FUN_10001190
            lea ecx, [ebp - 0x53c]
            jmp FUN_10001190
            mov eax, offset g_10022930
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
