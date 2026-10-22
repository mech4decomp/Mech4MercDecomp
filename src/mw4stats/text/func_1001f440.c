/* auto-transcribed gap function 0x1001F440 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_10003d80(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022028;
extern int g_10022058;
__declspec(naked) void FUN_1001f440(void)
{
    __asm {
            lea ecx, [ebp - 0xa8]
            jmp FUN_10003d80
            lea ecx, [ebp - 0x140]
            jmp FUN_10001190
            mov eax, offset g_10022028
            jmp FUN_1001edfe
            lea ecx, [ebp - 0xa4]
            jmp FUN_10001190
            mov eax, offset g_10022058
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
