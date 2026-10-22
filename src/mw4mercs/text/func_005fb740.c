/* FUN_005fb740 - __thiscall: if (this->field_3b0) FUN_00559be0(0xd) */
extern void __cdecl FUN_00559be0(int);

__declspec(naked) void func_005fb740(void)
{
    __asm {
        mov ecx, dword ptr [ecx + 0x3b0]
        test ecx, ecx
        jz L_5fb751
        push 0xd
        call FUN_00559be0
L_5fb751:
        ret
    }
}
