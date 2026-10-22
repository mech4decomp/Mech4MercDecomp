/* auto-transcribed gap function 0x1001F7B0 (32 B); review against reference; stepping stone */
extern void __cdecl FUN_10008650(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022390;
__declspec(naked) void FUN_1001f7b0(void)
{
    __asm {
            lea ecx, [ebp - 0x18]
            jmp FUN_10008650
            lea ecx, [ebp - 0x24]
            jmp FUN_10008650
            mov eax, offset g_10022390
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
