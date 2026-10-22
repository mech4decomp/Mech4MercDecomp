/* auto-transcribed gap function 0x1001F8B0 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100224a0;
__declspec(naked) void FUN_1001f8b0(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x28
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0xc0
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x158
            jmp FUN_10001190
            mov eax, offset g_100224a0
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
            int 3
    }
}
