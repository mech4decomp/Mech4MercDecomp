/*
 * FUN_0074B380 (extent 0x74B380-0x74B3EF, 111 B) - .text data block.
 * __stdcall, ret 0x18.
 */
#pragma warning(disable : 4035 4793)

extern int g_008b7a2c;
extern int g_008b7b18;

__declspec(naked) void __stdcall FUN_0074B380(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        lea    edx, [eax + ecx*2]
        mov    eax, dword ptr [esp + 0xc]
        lea    ecx, [eax + edx*4]
        mov    eax, dword ptr [ecx*4 + g_008b7a2c]
        test   eax, eax
        jne    L_end
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        lea    edx, [edx + eax*2]
        mov    eax, dword ptr [esp + 0x18]
        lea    eax, [eax + edx*4]
        mov    edx, dword ptr [eax*4 + g_008b7a2c]
        test   edx, edx
        je     L_end
        mov    edx, eax
        shl    edx, 5
        sub    edx, eax
        mov    eax, ecx
        push   esi
        push   edi
        shl    eax, 5
        sub    eax, ecx
        mov    dword ptr [ecx*4 + g_008b7a2c], 1
        lea    esi, [edx*4 + g_008b7b18]
        lea    edi, [eax*4 + g_008b7b18]
        mov    ecx, 8
        rep movsd
        pop    edi
        pop    esi
    L_end:
        ret    0x18
    }
}
