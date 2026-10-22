/* auto-transcribed gap function 0x1001FBB0 (32 B); review against reference; stepping stone */
extern void __cdecl FUN_1000a110(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022838;
__declspec(naked) void FUN_1001fbb0(void)
{
    __asm {
            mov eax, dword ptr [ebp + 0xc]
            push eax
            call FUN_1000a110
            pop ecx
            ret
            mov eax, offset g_10022838
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
