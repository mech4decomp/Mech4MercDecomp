/* auto-transcribed gap function 0x1001F7D0 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_10008650(void);
extern void __cdecl FUN_100093a0(void);
extern void __cdecl FUN_1000a0d0(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_100223c0;
__declspec(naked) void FUN_1001f7d0(void)
{
    __asm {
            mov eax, dword ptr [ebp - 0x18]
            push eax
            mov ecx, dword ptr [ebp - 0x14]
            push ecx
            call FUN_1000a0d0
            add esp, 8
            ret
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x10
            jmp FUN_10008650
            mov ecx, dword ptr [ebp - 0x10]
            add ecx, 0x1c
            jmp FUN_100093a0
            mov eax, offset g_100223c0
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
