/* auto-transcribed gap function 0x1001F060 (48 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10021c60;
__declspec(naked) void FUN_1001f060(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x10]
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x98
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x130
            jmp FUN_10001190
            mov eax, offset g_10021c60
            jmp FUN_1001edfe
            int 3
            int 3
    }
}
