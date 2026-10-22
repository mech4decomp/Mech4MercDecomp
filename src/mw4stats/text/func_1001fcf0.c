/* auto-transcribed gap function 0x1001FCF0 (80 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100229a0;
extern int g_100229d0;
__declspec(naked) void FUN_1001fcf0(void)
{
    __asm {
            lea ecx, [ebp - 0x13c]
            jmp FUN_10001190
            lea ecx, [ebp - 0xa4]
            jmp FUN_10001190
            mov eax, offset g_100229a0
            jmp FUN_1001edfe
            lea ecx, [ebp - 0xc24]
            jmp FUN_10001190
            lea ecx, [ebp - 0xb8c]
            jmp FUN_10001190
            lea ecx, [ebp - 0xaf4]
            jmp FUN_10001190
            mov eax, offset g_100229d0
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
