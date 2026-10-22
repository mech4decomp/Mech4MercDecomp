/* auto-transcribed gap function 0x1001F9E0 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100225f8;
__declspec(naked) void FUN_1001f9e0(void)
{
    __asm {
            lea ecx, [ebp - 0x4bc]
            jmp FUN_10001190
            lea ecx, [ebp - 0x424]
            jmp FUN_10001190
            lea ecx, [ebp - 0x2f4]
            jmp FUN_10001190
            lea ecx, [ebp - 0x38c]
            jmp FUN_10001190
            mov eax, offset g_100225f8
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
    }
}
