/* auto-transcribed gap function 0x1001FD90 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_100108d0(void);
extern void __cdecl FUN_1001b8d0(void);
extern void __cdecl FUN_1001edfe(void);
extern void __cdecl FUN_1001fdb0(void);
extern void __cdecl FUN_1001fdb7(void);
extern int g_10022a50;
__declspec(naked) void FUN_1001fd90(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x10]
            jmp FUN_1001b8d0
            cmp dword ptr [ebp - 0x10], 0
            je FUN_1001fdb0
            mov eax, dword ptr [ebp - 0x10]
            add eax, 0x18
            mov dword ptr [ebp - 0x14], eax
            jmp FUN_1001fdb7
            mov dword ptr [ebp - 0x14], 0
            mov ecx, dword ptr [ebp - 0x14]
            jmp FUN_100108d0
            mov eax, offset g_10022a50
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
