/* auto-transcribed gap function 0x1001FD40 (80 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_100108d0(void);
extern void __cdecl FUN_10011f60(void);
extern void __cdecl FUN_1001b8d0(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022a08;
__declspec(naked) void FUN_1001fd40(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x28]
            jmp FUN_1001b8d0
            mov ecx, dword ptr [ebp - 0x28]
            add ecx, 0x18
            jmp FUN_100108d0
            mov ecx, dword ptr [ebp - 0x28]
            add ecx, 0x6c
            jmp FUN_10011f60
            mov ecx, dword ptr [ebp - 0x28]
            add ecx, 0xd0
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x28]
            add ecx, 0x168
            jmp FUN_10001190
            mov eax, offset g_10022a08
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
    }
}
