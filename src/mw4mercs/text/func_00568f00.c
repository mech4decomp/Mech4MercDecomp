// 0x00568F00: wrapper calling FUN_00568EA0 with specific args (includes float 2000.0f)
// __cdecl with 1 param

extern int __cdecl FUN_00568ea0(int a0, int a1, int a2, int a3, int a4, int a5, int a6);

__declspec(naked) int __cdecl func_00568f00(int a0)
{
    
__asm {
mov eax, dword ptr [esp + 4]
        push 0
        push 0x44fa0000
        push 0
        push 0x3ed
        push 0x3f
        push 2
        push eax
        call FUN_00568ea0
        add esp, 0x1c
        ret
    }


}
