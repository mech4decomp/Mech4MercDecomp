/* auto-transcribed gap function 0x1001FA50 (96 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_100067d0(void);
extern void __cdecl FUN_1000a110(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022670;
extern int g_100226a0;
extern int g_100226d0;
__declspec(naked) void FUN_1001fa50(void)
{
    __asm {
            lea ecx, [ebp - 0xac]
            jmp FUN_100067d0
            lea ecx, [ebp - 0xa4]
            jmp FUN_10001190
            mov eax, offset g_10022670
            jmp FUN_1001edfe
            lea ecx, [ebp - 0xb4]
            jmp FUN_100067d0
            lea ecx, [ebp - 0xa4]
            jmp FUN_10001190
            mov eax, offset g_100226a0
            jmp FUN_1001edfe
            mov eax, dword ptr [ebp + 0xc]
            push eax
            call FUN_1000a110
            pop ecx
            ret
            mov eax, offset g_100226d0
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
