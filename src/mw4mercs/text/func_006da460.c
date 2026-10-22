/*
 * FUN_006da460 (963 B) — Texture decode routine (sibling of FUN_006dafd0).
 *
 * __cdecl, 5 params. Reads a source object (param_1) describing two sample
 * grids, performs per-pixel color interpolation with shift-based scaling, and
 * writes 32-bit pixels to param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006da460(void)
{
    __asm {
        sub     esp, 0x60
        mov     edx, dword ptr [esp + 0x64]
        push    ebx
        mov     ebx, dword ptr [edx + 0x2c]
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
        mov     dword ptr [esp + 0x58], edi
        mov     edi, dword ptr [edx + 0x28]
        sar     edi, cl
        sar     ebx, cl
        mov     dword ptr [esp + 0x74], edi
        mov     edi, dword ptr [edx + 0x34]
        sar     edi, cl
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x84], edi
        mov     edi, dword ptr [edx + 0x38]
        sar     edi, cl
        mov     ecx, dword ptr [esi + 0x14]
        lea     edx, [eax + eax]
        sub     ecx, edx
        add     ecx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esi + 0x1c]
        lea     edx, [eax + eax]
        sub     ecx, edx
        add     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, eax
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [esi + 0x18]
        sub     ecx, eax
        mov     dword ptr [esp + 0x6c], edi
        mov     dword ptr [esp + 0x20], edx
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [esi + 0x1c]
        sub     ecx, eax
        mov     dword ptr [esp + 0x40], edx
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [esi + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        mov     dword ptr [esp + 0x3c], edx
        dec     edx
        not     edx
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x64], edx
        mov     edx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x5c], eax
        mov     eax, dword ptr [eax + 0x10]
        add     ecx, 0x2
        add     eax, 0x2
        sub     edx, ebx
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x60], eax
        mov     dword ptr [esp + 0x68], esi
        mov     dword ptr [esp + 0x1c], edx
        xor     ecx, ecx
        mov     esi, dword ptr [esp + 0x18]
        mov     cl, byte ptr [esi]
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + esi]
        imul    edx, ebx
        add     ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + esi + 0x1]
        mov     eax, edx
        xor     edx, edx
        imul    eax, ebx
        mov     dl, byte ptr [esi + 0x1]
        mov     esi, dword ptr [esp + 0x20]
        imul    edx, dword ptr [esp + 0x1c]
        add     eax, edx
        mov     edx, dword ptr [esp + 0x74]
        sub     esi, edx
        mov     ebx, eax
        imul    esi, ecx
        imul    ebx, edx
        sub     eax, ecx
        mov     ecx, dword ptr [esp + 0x34]
        xor     edx, edx
        mov     dl, byte ptr [ecx + ebp]
        add     esi, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ebp]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esp + 0x38]
        sub     eax, edi
        imul    edx, edi
        imul    ebx, eax
        add     ebx, edx
        xor     edx, edx
        mov     dl, byte ptr [ecx + ebp + 0x1]
        mov     dword ptr [esp + 0x38], eax
        mov     ecx, edx
        xor     edx, edx
        imul    ecx, edi
        mov     dl, byte ptr [ebp + 0x1]
        mov     edi, dword ptr [esp + 0x3c]
        imul    edx, eax
        mov     eax, dword ptr [esp + 0x84]
        add     ecx, edx
        sub     edi, eax
        mov     edx, ecx
        imul    edi, ebx
        imul    edx, eax
        mov     eax, dword ptr [esp + 0x80]
        sub     ecx, ebx
        add     edi, edx
        mov     edx, dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x40], ecx
        xor     ecx, ecx
        sub     eax, edx
        mov     edx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x7c], ecx
        mov     dword ptr [esp + 0x28], edx
L_6da610:
        mov     ecx, dword ptr [esp + 0x44]
        mov     ebx, edi
        sar     ebx, cl
        mov     ecx, dword ptr [esp + 0x48]
        mov     eax, esi
        sar     eax, cl
        add     edi, dword ptr [esp + 0x40]
        add     ebx, eax
        sub     esi, dword ptr [esp + 0x30]
        test    ebx, ebx
        jz      L_6da6e7
        test    ebx, 0xffffff00
        jz      L_6da63f
        mov     ebx, 0xff
L_6da63f:
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
        mov     edx, dword ptr [esp + 0x28]
        and     ecx, 0x1f
        imul    ecx, dword ptr [esp + 0x80]
        add     eax, ecx
        shr     eax, 0x8
        or      ebx, eax
        mov     dword ptr [edx], ebx
L_6da6e7:
        mov     ecx, dword ptr [esp + 0x7c]
        mov     eax, dword ptr [esp + 0x24]
        add     ecx, 0x2
        inc     eax
        mov     dword ptr [esp + 0x7c], ecx
        mov     ecx, dword ptr [esp + 0x54]
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], edx
        jge     L_6da81b
        mov     eax, dword ptr [esp + 0x14]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jg      L_6da72e
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x58]
        lea     ecx, [ecx + eax*2]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
L_6da72e:
        dec     dword ptr [esp + 0x74]
        jns     L_6da7a7
        mov     ecx, dword ptr [esp + 0x5c]
        mov     ebx, dword ptr [ecx + 0x20]
        mov     eax, dword ptr [esp + 0x20]
        mov     esi, dword ptr [esp + 0x18]
        sub     esi, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        dec     eax
        mov     dword ptr [esp + 0x80], eax
        mov     dword ptr [esp + 0x74], eax
        mov     eax, dword ptr [esp + 0x60]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + esi]
        imul    ebx, dword ptr [esp + 0x1c]
        imul    ecx, dword ptr [esp + 0x2c]
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + esi + 0x1]
        mov     dword ptr [esp + 0x18], esi
        mov     eax, ebx
        imul    eax, dword ptr [esp + 0x2c]
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 0x1]
        mov     esi, dword ptr [esp + 0x20]
        imul    ebx, dword ptr [esp + 0x1c]
        add     eax, ebx
        sub     esi, dword ptr [esp + 0x80]
        mov     ebx, eax
        imul    esi, ecx
        imul    ebx, dword ptr [esp + 0x80]
        add     esi, ebx
        sub     eax, ecx
        mov     dword ptr [esp + 0x30], eax
L_6da7a7:
        mov     eax, dword ptr [esp + 0x84]
        mov     ecx, dword ptr [esp + 0x64]
        inc     eax
        test    ecx, eax
        mov     dword ptr [esp + 0x84], eax
        jz      L_6da610
        mov     eax, dword ptr [esp + 0x68]
        mov     ebx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x34]
        mov     edi, dword ptr [esp + 0x6c]
        add     ebp, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ebp]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebp]
        mov     dword ptr [esp + 0x84], 0x0
        imul    ebx, dword ptr [esp + 0x38]
        imul    ecx, edi
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + ebp + 0x1]
        mov     eax, ebx
        xor     ebx, ebx
        imul    eax, edi
        mov     bl, byte ptr [ebp + 0x1]
        mov     edi, ecx
        imul    edi, dword ptr [esp + 0x3c]
        imul    ebx, dword ptr [esp + 0x38]
        add     eax, ebx
        sub     eax, ecx
        mov     dword ptr [esp + 0x40], eax
        jmp     L_6da610
L_6da81b:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret
    }
}
