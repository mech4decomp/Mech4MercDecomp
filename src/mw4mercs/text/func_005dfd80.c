/*
 * func_005dfd80 - Getter for field at offset 0x44c (__fastcall, ECX = this)
 * Returns *(int*)(this + 0x44c)
 */
__declspec(naked) void func_005dfd80(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x44c]
        ret
    }
}
