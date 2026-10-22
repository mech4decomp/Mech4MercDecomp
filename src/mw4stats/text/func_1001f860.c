/* auto-transcribed gap function 0x1001F860 (48 B); review against reference; stepping stone */
extern void __cdecl FUN_10008650(void);
extern void __cdecl FUN_100093a0(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10022440;
__declspec(naked) void FUN_1001f860(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x14]
            add ecx, 0x10
            jmp FUN_10008650
            mov ecx, dword ptr [ebp - 0x14]
            add ecx, 0x1c
            jmp FUN_100093a0
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 8
            jmp FUN_10008650
            mov eax, offset g_10022440
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
