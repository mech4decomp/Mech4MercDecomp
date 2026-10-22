/* auto-transcribed gap function 0x1001FA20 (48 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_100067d0(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022638;
__declspec(naked) void FUN_1001fa20(void)
{
    __asm {
            lea ecx, [ebp - 0x2c4]
            jmp FUN_100067d0
            lea ecx, [ebp - 0x224]
            jmp FUN_10001190
            lea ecx, [ebp - 0x2bc]
            jmp FUN_10001190
            mov eax, offset g_10022638
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
