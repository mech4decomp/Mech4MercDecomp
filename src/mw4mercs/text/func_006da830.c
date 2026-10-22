/*
 * FUN_006da830 (968 B) — Texture decode routine (sibling of FUN_006dafd0).
 *
 * __cdecl, 5 params. Reads a source object (param_1) describing two sample
 * grids, performs per-pixel color interpolation with shift-based scaling, and
 * writes 32-bit pixels to param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006da830(void)
{
    __asm {
        sub     esp, 0x60
        mov     edx, dword ptr [esp + 0x64]
        push    ebx
        mov     ebx, dword ptr [edx + 0x34]
        push    ebp
        mov     ebp, dword ptr [edx + 0x30]
        push    esi
        mov     esi, dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi + 0x24]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x84]
        mov     ecx, eax
        sar     edi, cl
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [edx + 0x24]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, eax
        sar     ebx, cl
        mov     dword ptr [esp + 0x58], edi
        mov     edi, dword ptr [edx + 0x28]
        sar     edi, cl
        mov     dword ptr [esp + 0x84], ebx
        lea     ebx, [eax + eax]
        mov     dword ptr [esp + 0x74], edi
        mov     edi, dword ptr [edx + 0x2c]
        mov     edx, dword ptr [edx + 0x38]
        sar     edi, cl
        sar     edx, cl
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, ebx
        add     ecx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esi + 0x1c]
        lea     ebx, [eax + eax]
        sub     ecx, ebx
        add     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, eax
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, dword ptr [esi + 0x18]
        sub     ecx, eax
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x20], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, dword ptr [esi + 0x1c]
        sub     ecx, eax
        mov     dword ptr [esp + 0x6c], edx
        mov     dword ptr [esp + 0x40], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, dword ptr [esi + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        mov     dword ptr [esp + 0x24], ebx
        mov     ebx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [esp + 0x20]
        dec     eax
        not     eax
        mov     dword ptr [esp + 0x5c], eax
        mov     eax, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x60], eax
        mov     eax, dword ptr [eax + 0x10]
        add     eax, 0x2
        add     ecx, 0x2
        sub     ebx, edi
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x68], esi
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x1c], ebx
        mov     esi, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        imul    ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + esi]
        imul    ebx, edi
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + esi + 0x1]
        mov     eax, ebx
        xor     ebx, ebx
        imul    eax, edi
        mov     bl, byte ptr [esi + 0x1]
        mov     esi, dword ptr [esp + 0x74]
        mov     edi, dword ptr [esp + 0x20]
        sub     edi, esi
        imul    edi, ecx
        imul    ebx, dword ptr [esp + 0x1c]
        add     eax, ebx
        mov     ebx, eax
        imul    ebx, esi
        mov     esi, dword ptr [esp + 0x3c]
        sub     eax, ecx
        xor     ecx, ecx
        add     edi, ebx
        sub     esi, edx
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [esp + 0x38]
        mov     cl, byte ptr [eax + ebp]
        xor     ebx, ebx
        mov     bl, byte ptr [ebp]
        mov     dword ptr [esp + 0x3c], esi
        imul    ecx, edx
        imul    ebx, esi
        add     ebx, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebp + 0x1]
        mov     eax, dword ptr [esp + 0x84]
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [ebp + 0x1]
        imul    edx, esi
        mov     esi, dword ptr [esp + 0x24]
        add     ecx, edx
        sub     esi, eax
        mov     edx, ecx
        imul    esi, ebx
        imul    edx, eax
        mov     eax, dword ptr [esp + 0x80]
        sub     ecx, ebx
        add     esi, edx
        mov     edx, dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x40], ecx
        xor     ecx, ecx
        sub     eax, edx
        mov     edx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x7c], ecx
        mov     dword ptr [esp + 0x2c], edx
L_6da9e2:
        mov     ecx, dword ptr [esp + 0x44]
        mov     ebx, esi
        sar     ebx, cl
        mov     ecx, dword ptr [esp + 0x48]
        mov     eax, edi
        sar     eax, cl
        sub     esi, dword ptr [esp + 0x40]
        add     ebx, eax
        add     edi, dword ptr [esp + 0x34]
        test    ebx, ebx
        jz      L_6daab9
        test    ebx, 0xffffff00
        jz      L_6daa11
        mov     ebx, 0xff
L_6daa11:
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [esp + 0x7c]
        mov     edx, dword ptr [esp + 0x10]
        sub     edx, eax
        xor     eax, eax
        mov     ax, word ptr [edx]
        /* __emit: no-base SIB form lea edx,[ebx*8+0] (8D 14 DD 00 00 00 00) not encodable natively */
        __emit 0x8D
        __emit 0x14
        __emit 0xDD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x80], edx
        mov     dword ptr [esp + 0x4c], ecx
        shr     ecx, 0x8
        mov     edx, 0xff
        sub     edx, ebx
        mov     ebx, eax
        mov     dword ptr [esp + 0x78], edx
        shr     ebx, 0x5
        mov     edx, ecx
        and     ebx, 0x1f
        imul    ebx, dword ptr [esp + 0x80]
        and     edx, 0xff
        imul    edx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x50], eax
        shr     eax, 0x2
        and     eax, 0xffffff00
        imul    eax, dword ptr [esp + 0x80]
        add     ebx, edx
        mov     edx, dword ptr [esp + 0x78]
        and     ecx, 0xff00
        imul    ecx, edx
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x50]
        and     eax, 0xff0000
        and     ebx, 0xff00
        or      ebx, eax
        mov     eax, dword ptr [esp + 0x4c]
        and     eax, 0xff
        imul    eax, edx
        mov     edx, dword ptr [esp + 0x2c]
        and     ecx, 0x1f
        imul    ecx, dword ptr [esp + 0x80]
        add     eax, ecx
        shr     eax, 0x8
        or      ebx, eax
        mov     dword ptr [edx], ebx
L_6daab9:
        mov     ecx, dword ptr [esp + 0x7c]
        mov     eax, dword ptr [esp + 0x28]
        add     ecx, 0x2
        inc     eax
        mov     dword ptr [esp + 0x7c], ecx
        mov     ecx, dword ptr [esp + 0x54]
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], edx
        jge     L_6dabf0
        mov     eax, dword ptr [esp + 0x14]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jg      L_6dab04
        mov     eax, dword ptr [esp + 0x58]
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, eax
        neg     ecx
        lea     ecx, [ebx + ecx*2]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
L_6dab04:
        mov     eax, dword ptr [esp + 0x74]
        mov     ecx, dword ptr [esp + 0x5c]
        inc     eax
        test    ecx, eax
        mov     dword ptr [esp + 0x74], eax
        jz      L_6dab6d
        mov     eax, dword ptr [esp + 0x60]
        mov     ebx, dword ptr [eax + 0x20]
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x64]
        add     edi, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [edi]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + edi]
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x74], 0x0
        imul    ebx, dword ptr [esp + 0x1c]
        imul    ecx, dword ptr [esp + 0x30]
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + edi + 0x1]
        mov     eax, ebx
        imul    eax, dword ptr [esp + 0x30]
        xor     ebx, ebx
        mov     bl, byte ptr [edi + 0x1]
        mov     edi, ecx
        imul    edi, dword ptr [esp + 0x20]
        imul    ebx, dword ptr [esp + 0x1c]
        add     eax, ebx
        sub     eax, ecx
        mov     dword ptr [esp + 0x34], eax
L_6dab6d:
        dec     dword ptr [esp + 0x84]
        jns     L_6da9e2
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x6c]
        lea     eax, [ecx - 0x1]
        mov     dword ptr [esp + 0x80], eax
        mov     dword ptr [esp + 0x84], eax
        mov     eax, dword ptr [esp + 0x68]
        mov     ebx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x38]
        sub     ebp, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ebp]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebp]
        imul    ebx, dword ptr [esp + 0x3c]
        imul    ecx, esi
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + ebp + 0x1]
        mov     eax, ebx
        xor     ebx, ebx
        imul    eax, esi
        mov     bl, byte ptr [ebp + 0x1]
        mov     esi, dword ptr [esp + 0x24]
        imul    ebx, dword ptr [esp + 0x3c]
        add     eax, ebx
        sub     esi, dword ptr [esp + 0x80]
        mov     ebx, eax
        imul    esi, ecx
        imul    ebx, dword ptr [esp + 0x80]
        add     esi, ebx
        sub     eax, ecx
        mov     dword ptr [esp + 0x40], eax
        jmp     L_6da9e2
L_6dabf0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret
    }
}
