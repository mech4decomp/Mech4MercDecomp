/* auto-transcribed gap function 0x1001F660 (144 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_10001440(void);
extern void __cdecl FUN_10001450(void);
extern void __cdecl FUN_100014a0(void);
extern void __cdecl FUN_10003190(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022230;
__declspec(naked) void FUN_1001f660(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x10]
            jmp FUN_10001440
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0xa8
            jmp FUN_10003190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0xc4
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x15c
            jmp FUN_10001450
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x224
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x304
            jmp FUN_100014a0
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x338
            jmp FUN_10001190
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x3d8
            jmp FUN_100014a0
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x40c
            jmp FUN_10001190
            mov eax, offset g_10022230
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
    }
}
