/*
 * FUN_007426F0 (extent 0x7426F0-0x742764, 116 B) - .text data block.
 * __stdcall, ret 0xc.
 */
#pragma warning(disable : 4035 4793)

extern void (__cdecl *g_0076b2ac)(void);
extern void (__cdecl *g_0076b2d0)(void);

__declspec(naked) void __stdcall FUN_007426F0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push   ebx
        push   ebp
        push   esi
        mov    esi, dword ptr [eax]
        push   edi
        xor    edi, edi
        test   esi, esi
        je     L_5d
    L_0a:
        mov    ebx, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [g_0076b2ac]
        lea    ecx, [esi + 0x14]
        push   ecx
        push   ebx
        call   ebp
        add    esp, 8
        test   eax, eax
        jne    L_21
        mov    edx, dword ptr [esp + 0x1c]
        cmp    dword ptr [esi + 4], edx
        je     L_30
    L_21:
        mov    edi, esi
        mov    esi, dword ptr [esi]
        test   esi, esi
        /* __emit: backward jne rel8 to 0x74270A (MSVC6 miscomputes offset
           across the intervening reloc; ref 75 E1 vs MSVC6 75 D7) */
        __emit 0x75
        __emit 0xE1
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
    L_30:
        test   edi, edi
        je     L_49
        mov    eax, dword ptr [esi]
        push   esi
        mov    dword ptr [edi], eax
        call   dword ptr [g_0076b2d0]
        add    esp, 4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
    L_49:
        push   esi
        call   dword ptr [g_0076b2d0]
        mov    ecx, dword ptr [esp + 0x18]
        add    esp, 4
        mov    dword ptr [ecx], 0
    L_5d:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
    }
}
