/* auto-transcribed gap function 0x1001F710 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_10003f80(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100222c0;
extern int g_100222f0;
__declspec(naked) void FUN_1001f710(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 4
            jmp FUN_10003f80
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x30
            jmp FUN_10001190
            mov eax, offset g_100222c0
            jmp FUN_1001edfe
            lea ecx, [ebp - 0xa4]
            jmp FUN_10001190
            mov eax, offset g_100222f0
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
