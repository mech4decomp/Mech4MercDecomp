/* auto-transcribed gap function 0x1001FC10 (80 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_100108d0(void);
extern void __cdecl FUN_1001b8d0(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100228b0;
__declspec(naked) void FUN_1001fc10(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x28]
            jmp FUN_1001b8d0
            mov ecx, dword ptr [ebp - 0x28]
            add ecx, 0x18
            jmp FUN_100108d0
            mov ecx, dword ptr [ebp - 0x28]
            add ecx, 0x84
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x28]
            add ecx, 0x14c
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x28]
            add ecx, 0x1e4
            jmp FUN_10001190
            mov eax, offset g_100228b0
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
    }
}
