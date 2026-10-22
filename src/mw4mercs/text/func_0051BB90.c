/*
 * FUN_0051BB90 (extent 0x51BB90-0x51BBF9, 105 B) - .text data block.
 * __thiscall-style (this in ecx), ret 0xc.
 */
#pragma warning(disable : 4035 4793)

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void __stdcall FUN_0051BB90(void)
{
    __asm {
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        lea    ecx, [edx + 0x44]
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        xor    edx, 0x85739531
        push   esi
        je     L_end
        mov    edx, dword ptr [ecx]
        xor    edx, 0x85739531
        mov    esi, dword ptr [edx + 0x34]
        test   esi, esi
        je     L_end
        mov    edx, dword ptr [ecx]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x34]
        mov    esi, dword ptr [edx + 0x48]
        test   esi, esi
        je     L_end
        mov    eax, dword ptr [ecx]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x34]
        mov    eax, dword ptr [ecx + 0x48]
        mov    ecx, dword ptr [eax + 0x50]
        cmp    ecx, 0xa
        jge    L_ge
        mov    eax, dword ptr [eax + ecx*4 + 0xb4]
        pop    esi
        ret    0xc
    L_ge:
        mov    eax, dword ptr [eax + 0xb4]
    L_end:
        pop    esi
        ret    0xc
    }
}
