/* auto-transcribed gap function 0x1001F0C0 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10021cd0;
__declspec(naked) void FUN_1001f0c0(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x1c
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0xb4
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x150
            jmp FUN_10001190
            mov eax, offset g_10021cd0
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
