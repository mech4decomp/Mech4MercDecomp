// Auto-generated: setter for byte field at ecx+0x29, with optional free
// FUN_0050b060, 24 bytes

void FUN_0050b8e0(void);

__declspec(naked) void func_0050b060(void)
{
    __asm {
        mov al, [esp+4]
        mov [ecx+0x29], al
        mov eax, [esp+8]
        test eax, eax
        jz skip_free
        push eax
        call FUN_0050b8e0
skip_free:
        ret 8
    }
}
