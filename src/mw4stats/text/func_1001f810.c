/* auto-transcribed gap function 0x1001F810 (80 B); review against reference; stepping stone */
extern void __cdecl FUN_10008650(void);
extern void __cdecl FUN_100092b0(void);
extern void __cdecl FUN_100093a0(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100223f8;
__declspec(naked) void FUN_1001f810(void)
{
    __asm {
            mov ecx, dword ptr [ebp - 0x14]
            add ecx, 4
            jmp FUN_100092b0
            mov ecx, dword ptr [ebp - 0x14]
            add ecx, 0x50
            jmp FUN_10008650
            mov ecx, dword ptr [ebp - 0x14]
            add ecx, 0x10
            jmp FUN_10008650
            mov ecx, dword ptr [ebp - 0x14]
            add ecx, 0x1c
            jmp FUN_100093a0
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 8
            jmp FUN_10008650
            mov eax, offset g_100223f8
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
            int 3
    }
}
