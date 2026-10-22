/*
 * FUN_006827E0 (39 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern float g_0076c5b0;

__declspec(naked) void FUN_006827E0(void)
{
    __asm {
        push   esi
        mov    esi, dword ptr [ecx + 4]
        mov    ecx, dword ptr [esi + 0x170]
        mov    eax, dword ptr [ecx]
        call   dword ptr [eax + 0x60]
        cmp    dword ptr [esi + 0x570], eax
        je     L_6827ff
        fld    dword ptr [esi + 0x56c]
        pop    esi
        ret
L_6827ff:
        fld    dword ptr [g_0076c5b0]
        pop    esi
        ret
    }
}
