/* auto-transcribed gap function 0x1001FCC0 (48 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022968;
__declspec(naked) void FUN_1001fcc0(void)
{
    __asm {
            lea ecx, [ebp - 0x1a4]
            jmp FUN_10001190
            lea ecx, [ebp - 0x23c]
            jmp FUN_10001190
            lea ecx, [ebp - 0x2d4]
            jmp FUN_10001190
            mov eax, offset g_10022968
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
