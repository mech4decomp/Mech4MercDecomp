/*
 * FUN_006dc790 (249 B) — Color-blend / palette interpolation loop.
 *
 * Iterates over a byte buffer, blending each RGB pixel against a
 * palette entry using a per-pixel alpha from a lookup table.
 * __cdecl, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006dc790(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0xC]
        mov     ecx, dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax + 4]
        push    ebx
        mov     dword ptr [esp + 4], ecx
        mov     ecx, dword ptr [edx + 0x24]
        mov     ebx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [eax + 0x20]
        push    esi
        mov     esi, dword ptr [esp + 0x1C]
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        sar     ebx, cl
        sub     edi, esi
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x1C]
        xor     ecx, ecx
        test    edi, edi
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x24], edi
        jle     L_c882
        mov     esi, dword ptr [esp + 0x1C]
        push    ebp
L_c7df:
        mov     ebp, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     al, byte ptr [ecx + ebp*1]
        mov     ebp, eax
        test    ebp, ebp
        jle     L_c859
        xor     eax, eax
        mov     ax, word ptr [edx + ecx*2]
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        mov     edi, 0xFF
        sub     edi, ebp
        mov     edx, eax
        and     edx, 0x1F
        shl     edx, 3
        imul    ebx, edi
        imul    edx, ebp
        add     edx, ebx
        sar     edx, 8
        mov     byte ptr [esi], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 1]
        mov     edx, eax
        shr     edx, 2
        and     edx, 0xF8
        imul    edx, ebp
        imul    ebx, edi
        add     edx, ebx
        sar     edx, 8
        mov     ebx, dword ptr [esp + 0x14]
        mov     byte ptr [esi + 1], dl
        xor     edx, edx
        mov     dl, byte ptr [esi + 2]
        shr     eax, 7
        and     eax, 0xF8
        imul    eax, ebp
        imul    edx, edi
        mov     edi, dword ptr [esp + 0x28]
        add     eax, edx
        mov     edx, dword ptr [esp + 0x2C]
        sar     eax, 8
        mov     byte ptr [esi + 2], al
L_c859:
        mov     eax, dword ptr [esp + 0x1C]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x1C], eax
        jg      L_c875
        mov     eax, ebx
        neg     eax
        lea     edx, [edx + eax*2]
        mov     dword ptr [esp + 0x2C], edx
        mov     dword ptr [esp + 0x1C], ebx
L_c875:
        add     esi, 4
        inc     ecx
        cmp     ecx, edi
        jl      L_c7df
        pop     ebp
L_c882:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret
    }
}
