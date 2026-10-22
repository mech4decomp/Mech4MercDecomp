// Auto-generated: call vtable[5] with 0x50 arg, then call FUN_00501eb0
// FUN_00507b10, 25 bytes

void FUN_00501eb0(void);

__declspec(naked) void func_00507b10(void)
{
    __asm {
        push esi
        mov esi, [esp+8]    // esi = this
        mov ecx, [esi]      // ecx = this->vtable
        mov eax, [ecx]      // eax = vtable[0]
        push 0x50
        call dword ptr [eax+0x14]  // call vtable[5]
        push esi
        call FUN_00501eb0
        add esp, 4
        pop esi
        ret
    }
}
