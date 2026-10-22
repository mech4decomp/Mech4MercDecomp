// 0x00562F10: assert wrapper - calls assert function, int3 if returns non-zero
// __cdecl with 1 param

extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) void __cdecl func_00562f10(int a0)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0xc]
        push eax
        call FUN_006fab90
        add esp, 4
        test eax, eax
        je skip_int3
        int 3
skip_int3:
        pop ebp
        ret
    }
}
