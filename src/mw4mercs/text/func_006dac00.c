/*
 * FUN_006dac00 (967 B) — Texture decode routine (sibling of FUN_006dafd0).
 *
 * __cdecl, 5 params. Reads a source object (param_1) describing two sample
 * grids, performs per-pixel color interpolation with shift-based scaling, and
 * writes 32-bit pixels to param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006dac00(void)
{
    __asm {
        sub     esp, 0x5c
        mov     edx, dword ptr [esp + 0x60]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi + 0x24]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x80]
        mov     ecx, eax
        sar     edi, cl
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x58], edi
        mov     edi, dword ptr [edx + 0x28]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ebp, dword ptr [edx + 0x24]
        mov     ebx, dword ptr [edx + 0x30]
        mov     ecx, eax
        sar     edi, cl
        mov     dword ptr [esp + 0x80], edi
        mov     edi, dword ptr [edx + 0x2c]
        sar     edi, cl
        mov     dword ptr [esp + 0x10], edi
        mov     edi, dword ptr [edx + 0x34]
        sar     edi, cl
        mov     edx, dword ptr [edx + 0x38]
        sar     edx, cl
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x14], edi
        lea     edi, [eax + eax]
        sub     ecx, edi
        add     ecx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esi + 0x1c]
        lea     edi, [eax + eax]
        sub     ecx, edi
        add     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, eax
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x18]
        sub     ecx, eax
        mov     dword ptr [esp + 0x68], edx
        mov     dword ptr [esp + 0x28], edi
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x1c]
        sub     ecx, eax
        mov     dword ptr [esp + 0x70], edi
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        xor     ecx, ecx
        mov     cl, byte ptr [ebp]
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esi + 0x2c]
        mov     edi, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x5c], eax
        mov     eax, dword ptr [esi + 0x10]
        add     eax, 0x2
        mov     dword ptr [esp + 0x64], esi
        mov     esi, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x70]
        sub     eax, esi
        add     edi, 0x2
        mov     esi, ecx
        mov     dword ptr [esp + 0x60], edi
        imul    esi, eax
        mov     dword ptr [esp + 0x24], eax
        xor     eax, eax
        mov     al, byte ptr [edi + ebp]
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0x1]
        mov     dword ptr [esp + 0x18], 0x0
        imul    eax, dword ptr [esp + 0x10]
        imul    ecx, dword ptr [esp + 0x24]
        add     esi, eax
        xor     eax, eax
        mov     al, byte ptr [edi + ebp + 0x1]
        mov     edi, dword ptr [esp + 0x28]
        imul    eax, dword ptr [esp + 0x10]
        add     eax, ecx
        sub     edi, dword ptr [esp + 0x80]
        mov     ecx, eax
        imul    edi, esi
        imul    ecx, dword ptr [esp + 0x80]
        sub     eax, esi
        mov     esi, dword ptr [esp + 0x40]
        add     edi, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x3c], eax
        xor     eax, eax
        mov     al, byte ptr [ecx + ebx]
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        sub     esi, edx
        mov     dword ptr [esp + 0x30], esi
        imul    eax, edx
        imul    ecx, esi
        mov     esi, dword ptr [esp + 0x2c]
        add     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi + ebx + 0x1]
        mov     esi, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x70], eax
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [ebx + 0x1]
        imul    edx, dword ptr [esp + 0x30]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x14]
        sub     esi, edx
        imul    esi, eax
        mov     eax, ecx
        imul    eax, edx
        sub     ecx, dword ptr [esp + 0x70]
        add     esi, eax
        mov     eax, dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x40], ecx
        sub     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [esp + 0x74]
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x7c], ecx
L_6dadaf:
        mov     ecx, dword ptr [esp + 0x44]
        mov     eax, esi
        sar     eax, cl
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, edi
        sar     edx, cl
        sub     edi, dword ptr [esp + 0x3c]
        add     eax, edx
        sub     esi, dword ptr [esp + 0x40]
        test    eax, eax
        mov     dword ptr [esp + 0x70], eax
        jz      L_6daea3
        test    eax, 0xffffff00
        jz      L_6dade4
        mov     dword ptr [esp + 0x70], 0xff
L_6dade4:
        mov     eax, dword ptr [esp + 0x7c]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x74], ecx
        mov     ecx, dword ptr [esp + 0x18]
        xor     eax, eax
        mov     ax, word ptr [edx + ecx*2]
        mov     edx, dword ptr [esp + 0x70]
        /* __emit: no-base SIB form lea ecx,[edx*8+0] (8D 0C D5 00 00 00 00) not encodable natively */
        __emit 0x8D
        __emit 0x0C
        __emit 0xD5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x78], ecx
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, 0xff
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x74]
        mov     dword ptr [esp + 0x38], eax
        shr     eax, 0x5
        shr     ecx, 0x8
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x4c], ecx
        and     ecx, 0xff
        imul    ecx, edx
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x38]
        and     eax, 0xff00
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [esp + 0x4c]
        shr     ecx, 0x2
        and     eax, 0xff00
        imul    eax, edx
        and     ecx, 0xffffff00
        imul    ecx, dword ptr [esp + 0x78]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x74]
        and     eax, 0xff
        mov     dword ptr [esp + 0x70], edx
        imul    eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x70], eax
        mov     eax, dword ptr [esp + 0x38]
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x78]
        and     ecx, 0xff0000
        or      edx, ecx
        mov     ecx, dword ptr [esp + 0x70]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x7c]
        shr     ecx, 0x8
        or      edx, ecx
        mov     dword ptr [eax], edx
L_6daea3:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x7c]
        mov     ecx, dword ptr [esp + 0x54]
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x7c], edx
        jge     L_6dafbf
        mov     eax, dword ptr [esp + 0x20]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jg      L_6daee3
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x58]
        lea     edx, [ecx + eax*2]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
L_6daee3:
        dec     dword ptr [esp + 0x80]
        jns     L_6daf50
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edi, dword ptr [esp + 0x10]
        dec     eax
        mov     dword ptr [esp + 0x70], eax
        xor     edx, edx
        mov     dword ptr [esp + 0x80], eax
        sub     ebp, dword ptr [ecx + 0x20]
        mov     dl, byte ptr [ebp]
        mov     eax, dword ptr [esp + 0x60]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebp]
        imul    edx, dword ptr [esp + 0x24]
        imul    ecx, edi
        add     ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + ebp + 0x1]
        mov     eax, edx
        xor     edx, edx
        imul    eax, edi
        mov     dl, byte ptr [ebp + 0x1]
        mov     edi, dword ptr [esp + 0x28]
        imul    edx, dword ptr [esp + 0x24]
        add     eax, edx
        sub     edi, dword ptr [esp + 0x70]
        mov     edx, eax
        imul    edi, ecx
        imul    edx, dword ptr [esp + 0x70]
        add     edi, edx
        sub     eax, ecx
        mov     dword ptr [esp + 0x3c], eax
L_6daf50:
        dec     dword ptr [esp + 0x14]
        jns     L_6dadaf
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x64]
        mov     esi, dword ptr [esp + 0x68]
        dec     eax
        mov     dword ptr [esp + 0x70], eax
        xor     edx, edx
        mov     dword ptr [esp + 0x14], eax
        sub     ebx, dword ptr [ecx + 0x20]
        mov     dl, byte ptr [ebx]
        mov     eax, dword ptr [esp + 0x2c]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebx]
        imul    edx, dword ptr [esp + 0x30]
        imul    ecx, esi
        add     ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + ebx + 0x1]
        mov     eax, edx
        xor     edx, edx
        imul    eax, esi
        mov     dl, byte ptr [ebx + 0x1]
        mov     esi, dword ptr [esp + 0x34]
        imul    edx, dword ptr [esp + 0x30]
        add     eax, edx
        sub     esi, dword ptr [esp + 0x70]
        mov     edx, eax
        imul    esi, ecx
        imul    edx, dword ptr [esp + 0x70]
        add     esi, edx
        sub     eax, ecx
        mov     dword ptr [esp + 0x40], eax
        jmp     L_6dadaf
L_6dafbf:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x5c
        ret
    }
}
