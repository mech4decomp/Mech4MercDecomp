/*
 * FUN_007598B0 (extent 0x7598B0-0x759924, 116 B) - .text data block.
 * __thiscall-style (this in ecx).
 */
#pragma warning(disable : 4035 4793)

extern void (__cdecl *g_008aacf0)(void);
extern void (__cdecl *g_008aacec)(void);

__declspec(naked) void FUN_007598B0(void)
{
    __asm {
        push   esi
        mov    esi, ecx
        push   edi
        mov    edi, dword ptr [esi + 8]
        test   edi, edi
        je     L_ee
        push   edi
        call   dword ptr [g_008aacf0]
        test   ax, ax
        mov    word ptr [esi + 0xc], ax
        je     L_de
        mov    eax, dword ptr [esi]
        lea    ecx, [esi + 0xe]
        push   ecx
        push   edi
        push   2
        mov    ecx, esi
        call   dword ptr [eax + 0xc]
        pop    edi
        xor    al, al
        pop    esi
        ret
    L_de:
        push   edi
        push   2
        call   dword ptr [g_008aacec]
        mov    dword ptr [esi + 8], 0
    L_ee:
        mov    edi, dword ptr [esi + 4]
        test   edi, edi
        je     L_1f
        push   edi
        push   1
        call   dword ptr [g_008aacec]
        cmp    word ptr [esi + 0xc], 0
        je     L_18
        mov    edx, dword ptr [esi]
        lea    eax, [esi + 0xe]
        push   eax
        push   edi
        push   1
        mov    ecx, esi
        call   dword ptr [edx + 0xc]
        pop    edi
        xor    al, al
        pop    esi
        ret
    L_18:
        mov    dword ptr [esi + 4], 0
    L_1f:
        pop    edi
        mov    al, 1
        pop    esi
        ret
    }
}
