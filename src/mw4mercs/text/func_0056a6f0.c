// 0x0056A6F0: wrapper calling FUN_00568EA0 with specific args
// __cdecl with 2 params

extern int __cdecl FUN_00568ea0(int a0, int a1, int a2, int a3, int a4, int a5, int a6);

__declspec(naked) int __cdecl func_0056a6f0(int a0, int a1)
{
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        push 0
        push eax
        push 0
        push 0x3eb
        push 0x3f
        push 2
        push ecx
        call FUN_00568ea0
        add esp, 0x1c
        ret
    }
}
