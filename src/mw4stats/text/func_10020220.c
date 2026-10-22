/* auto-transcribed gap function 0x10020220 (32 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022fb8;
__declspec(naked) void FUN_10020220(void)
{
    __asm {
            lea ecx, [ebp - 0xa4]
            jmp FUN_10001190
            lea ecx, [ebp - 0x13c]
            jmp FUN_10001190
            mov eax, offset g_10022fb8
            jmp FUN_1001edfe
    }
}
