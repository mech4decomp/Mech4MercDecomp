/* auto-transcribed gap function 0x1001FC60 (48 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100228f8;
__declspec(naked) void FUN_1001fc60(void)
{
    __asm {
            lea ecx, [ebp - 0x13c]
            jmp FUN_10001190
            lea ecx, [ebp - 0xa4]
            jmp FUN_10001190
            lea ecx, [ebp - 0x1d4]
            jmp FUN_10001190
            mov eax, offset g_100228f8
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
