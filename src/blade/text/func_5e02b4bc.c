/* auto-transcribed gap function 0x5E02B4BC (55 B); review against reference; stepping stone */
extern int g_5e77a868;
__declspec(naked) void FUN_5e02b4bc(void)
{
    __asm {
            mov ecx, dword ptr [esp + 4]
            mov eax, dword ptr [g_5e77a868]
            mov dword ptr [g_5e77a868], ecx
            ret
            push ebp
            mov ebp, esp
            add esp, -0xc
            wait
            fnstcw word ptr [ebp - 2]
            wait
            mov ax, word ptr [ebp - 2]
            or ah, 0xc
            mov word ptr [ebp - 4], ax
            fldcw word ptr [ebp - 4]
            fistp qword ptr [ebp - 0xc]
            fldcw word ptr [ebp - 2]
            mov eax, dword ptr [ebp - 0xc]
            mov edx, dword ptr [ebp - 8]
            leave
            ret
    }
}
