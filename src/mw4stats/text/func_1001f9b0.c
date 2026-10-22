/* auto-transcribed gap function 0x1001F9B0 (48 B); review against reference; stepping stone */
extern void __cdecl FUN_10001190(void);
extern void __cdecl FUN_1000a110(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100225c8;
__declspec(naked) void FUN_1001f9b0(void)
{
    __asm {
            mov eax, dword ptr [ebp - 0x138]
            push eax
            call FUN_1000a110
            pop ecx
            ret
            lea ecx, [ebp - 0x124]
            jmp FUN_10001190
            mov eax, offset g_100225c8
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
    }
}
