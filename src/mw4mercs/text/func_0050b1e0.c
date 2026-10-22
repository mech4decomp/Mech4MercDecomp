// Auto-generated: setter for dword field at ecx+0x34, with optional free
// FUN_0050b1e0, 24 bytes

void FUN_0050b8e0(void);

__declspec(naked) void func_0050b1e0(void)
{
    __asm {
        mov eax, [esp+4]
        mov [ecx+0x34], eax
        mov eax, [esp+8]
        test eax, eax
        jz skip_free
        push eax
        call FUN_0050b8e0
skip_free:
        ret 8
    }
}
