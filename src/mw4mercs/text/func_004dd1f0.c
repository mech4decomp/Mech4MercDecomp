extern void __cdecl FUN_00415180(int);

__declspec(naked) void func_004dd1f0(void)
{
    __asm {
        mov     eax, [esp+4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     [esi+8], eax
        mov     [esi+0xC], eax
        mov     eax, [esp+0xC]
        mov     [esi+0x10], eax
        mov     [esi+0x14], eax
        mov     dword ptr [esi], 0x00773808
        mov     eax, esi
        pop     esi
        ret     8
    }
}
