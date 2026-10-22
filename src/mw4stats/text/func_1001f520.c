/* auto-transcribed gap function 0x1001F520 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_100067d0(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022130;
extern int g_10022160;
__declspec(naked) void FUN_1001f520(void)
{
    __asm {
            lea ecx, [ebp - 0xa4]
            jmp FUN_10001190
            lea ecx, [ebp - 0x13c]
            jmp FUN_10001190
            mov eax, offset g_10022130
            jmp FUN_1001edfe
            lea ecx, [ebp - 0x14]
            jmp FUN_100067d0
            mov eax, offset g_10022160
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
            int 3
            int 3
            int 3
    }
}
