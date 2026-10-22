// FUN_006F3210 (9 bytes)
// mov eax, [ecx+0x10]; add ecx, 0x10; jmp [eax+0x08]
// __thiscall virtual dispatch thunk:
//   this += 0x10; goto this->vtable[2];
__declspec(naked) void func_006f3210(void)
{
    __asm {
        mov eax, [ecx+0x10]
        add ecx, 0x10
        jmp dword ptr [eax+0x08]
    }
}
