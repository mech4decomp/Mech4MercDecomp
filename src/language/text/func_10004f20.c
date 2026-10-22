/* auto-transcribed gap function 0x10004F20 (58 B); review against reference; stepping stone */
extern int g_100050a8;
__declspec(naked) void FUN_10004f20(void)
{
    __asm {
            mov eax, dword ptr [esp + 8]
            mov ecx, dword ptr [esp + 0x10]
            or ecx, eax
            mov ecx, dword ptr [esp + 0xc]
            jne lbl_10004f39
            mov eax, dword ptr [esp + 4]
            mul ecx
            ret 0x10
        lbl_10004f39:
            push ebx
            mul ecx
            mov ebx, eax
            mov eax, dword ptr [esp + 8]
            mul dword ptr [esp + 0x14]
            add ebx, eax
            mov eax, dword ptr [esp + 8]
            mul ecx
            add edx, ebx
            pop ebx
            ret 0x10
            jmp dword ptr [g_100050a8]
    }
}
