/* auto-transcribed gap function 0x1001FFE0 (48 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_100067d0(void);
extern void __cdecl FUN_10013040(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022d08;
__declspec(naked) void FUN_1001ffe0(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x10]
            jmp FUN_10013040
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x20
            jmp FUN_100067d0
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x3c
            jmp FUN_10001190
            mov eax, offset g_10022d08
            jmp FUN_1001edfe
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
