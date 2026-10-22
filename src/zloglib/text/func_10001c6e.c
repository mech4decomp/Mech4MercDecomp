/* auto-transcribed gap function 0x10001C6E (123 B); review against reference; stepping stone */
extern int g_10003050;
extern int g_10003054;
extern int g_10027098;
__declspec(naked) void FUN_10001c6e(void)
{
    __asm {
            mov eax, dword ptr [esp + 8]
            push 8
            push 1
            mov dword ptr [eax], 0x10001cd2
            mov dword ptr [eax + 4], 0x10001cd8
            mov dword ptr [eax + 8], 0x100018a6
            mov dword ptr [eax + 0xc], 0x10001c28
            mov dword ptr [eax + 0x10], 0x10001707
            mov dword ptr [eax + 0x14], 0x100016d9
            mov dword ptr [eax + 0x18], 0x10001796
            mov dword ptr [eax + 0x20], 0x100017c8
            call dword ptr [g_10003050]
            pop ecx
            mov dword ptr [g_10027098], eax
            pop ecx
            mov ecx, dword ptr [esp + 4]
            mov edx, dword ptr [ecx]
            mov dword ptr [eax], edx
            mov eax, dword ptr [ecx + 4]
            mov ecx, dword ptr [g_10027098]
            push 1
            mov dword ptr [ecx + 4], eax
            pop eax
            ret
            mov eax, 0x1000428c
            ret
            push dword ptr [g_10027098]
            call dword ptr [g_10003054]
            pop ecx
            push 1
            pop eax
            ret
    }
}
