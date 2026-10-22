// Auto-generated: call vtable[2], then call FUN_00416e50 on ecx+0x18 and ecx
// FUN_00501620, 25 bytes

void FUN_00416e50(void);

__declspec(naked) void func_00501620(void)
{
    __asm {
        push esi
        mov esi, ecx        // esi = this
        mov eax, [esi]      // eax = this->vtable
        call dword ptr [eax+0x08]  // call vtable[2]
        lea ecx, [esi+0x18]
        call FUN_00416e50
        mov ecx, esi
        call FUN_00416e50
        pop esi
        ret
    }
}
