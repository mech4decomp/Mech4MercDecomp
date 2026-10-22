/*
 * FUN_004DAFB0 (41 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00707E70(void);

__declspec(naked) void FUN_004DAFB0(void)
{
    __asm {
        push   esi
        push   0
        mov    esi, ecx
        call   FUN_00707E70
        fstp   qword ptr [esi + 0xe4]
        mov    ecx, dword ptr [esi + 0xc4]
        test   ecx, ecx
        mov    byte ptr [esi + 0x144], 0
        je     L_4dafd7
        mov    eax, dword ptr [ecx]
        push   esi
        call   dword ptr [eax + 0x30]
L_4dafd7:
        pop    esi
        ret
    }
}
