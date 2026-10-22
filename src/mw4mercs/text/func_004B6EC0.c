/*
 * FUN_004B6EC0 (38 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b3490;

__declspec(naked) void FUN_004B6EC0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x18]
        mov    edx, eax
        shr    edx, 2
        and    eax, 0xc0
        and    edx, 1
        sub    al, 0x80
        shl    edx, 1
        neg    al
        sbb    eax, eax
        inc    eax
        or     edx, eax
        mov    eax, dword ptr [edx*4 + g_007b3490]
        mov    dword ptr [ecx + 0x1c], eax
        ret
    }
}
