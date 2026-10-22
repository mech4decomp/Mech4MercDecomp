// Auto-generated: check global state, return bool
// FUN_0051e8a0, 28 bytes

__declspec(naked) int func_0051e8a0(void)
{
    extern int DAT_007ddd24;
    extern int DAT_007ddd28;
    __asm {
        mov     ecx, dword ptr [DAT_007ddd24]
        mov     eax, 1
        cmp     ecx, eax
        jz      l_ret
        cmp     dword ptr [DAT_007ddd28], eax
        jz      l_ret
        xor     eax, eax
    l_ret:
        ret     0x0C
    }
}
