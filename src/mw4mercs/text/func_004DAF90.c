/*
 * FUN_004DAF90 (19 bytes) - .text data block 0x4DAF15.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_004DAF90(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0xc4]
        test   eax, eax
        je     L_ret
        mov    edx, dword ptr [eax]
        push   ecx
        mov    ecx, eax
        call   dword ptr [edx + 0x30]
L_ret:
        ret
    }
}
