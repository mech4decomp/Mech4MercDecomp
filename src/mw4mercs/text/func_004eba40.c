extern void __cdecl FUN_004ec1e0(void);

__declspec(naked) void func_004eba40(void)
{
    __asm {
        mov     eax, [esp+0xC]
        mov     edx, [esp+4]
        push    esi
        push    0x223
        mov     esi, ecx
        mov     ecx, [esp+0x10]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004ec1e0
        mov     dword ptr [esi], 0x007746E8
        mov     eax, esi
        pop     esi
        ret     0xC
    }
}
