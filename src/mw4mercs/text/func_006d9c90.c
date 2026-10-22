/*
 * FUN_006d9c90 (983 B) — Texture decode routine (sibling of FUN_006dafd0).
 *
 * __cdecl, 5 params. Reads a source object (param_1) describing two sample
 * grids, performs per-pixel color interpolation with shift-based scaling, and
 * writes 32-bit pixels to param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006d9c90(void)
{
    __asm {
        sub     esp, 0x60
        mov     edx, dword ptr [esp + 0x64]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi + 0x24]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x84]
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
        mov     dword ptr [esp + 0x84], edi
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
        mov     dword ptr [esp + 0x6c], edx
        mov     dword ptr [esp + 0x24], edi
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x1c]
        sub     ecx, eax
        mov     dword ptr [esp + 0x74], edi
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        mov     dword ptr [esp + 0x3c], edi
        dec     edi
        not     edi
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x5c], eax
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x68], esi
        mov     esi, dword ptr [esp + 0x74]
        mov     dword ptr [esp + 0x64], edi
        mov     edi, dword ptr [esp + 0x10]
        add     ecx, 0x2
        add     eax, 0x2
        sub     esi, edi
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x60], eax
        mov     dword ptr [esp + 0x30], esi
        xor     ecx, ecx
        mov     cl, byte ptr [ebp]
        mov     dword ptr [esp + 0x18], 0x0
        mov     edi, ecx
        xor     ecx, ecx
        imul    edi, esi
        mov     cl, byte ptr [eax + ebp]
        imul    ecx, dword ptr [esp + 0x10]
        add     edi, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebp + 0x1]
        mov     eax, ecx
        imul    eax, dword ptr [esp + 0x10]
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0x1]
        imul    ecx, esi
        mov     esi, dword ptr [esp + 0x24]
        add     eax, ecx
        sub     esi, dword ptr [esp + 0x84]
        mov     ecx, eax
        imul    esi, edi
        imul    ecx, dword ptr [esp + 0x84]
        sub     eax, edi
        mov     edi, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x34], eax
        xor     eax, eax
        mov     al, byte ptr [ebx]
        sub     edi, edx
        add     esi, ecx
        xor     ecx, ecx
        mov     dword ptr [esp + 0x28], edi
        imul    eax, edi
        mov     edi, dword ptr [esp + 0x38]
        mov     cl, byte ptr [edi + ebx]
        imul    ecx, edx
        add     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [edi + ebx + 0x1]
        mov     edi, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x74], eax
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [ebx + 0x1]
        imul    edx, dword ptr [esp + 0x28]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x14]
        sub     edi, edx
        imul    edi, eax
        mov     eax, ecx
        imul    eax, edx
        sub     ecx, dword ptr [esp + 0x74]
        add     edi, eax
        mov     eax, dword ptr [esp + 0x80]
        mov     dword ptr [esp + 0x40], ecx
        sub     eax, dword ptr [esp + 0x7c]
        mov     ecx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x80], ecx
L_6d9e48:
        mov     ecx, dword ptr [esp + 0x44]
        mov     eax, edi
        sar     eax, cl
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, esi
        sar     edx, cl
        sub     esi, dword ptr [esp + 0x34]
        add     eax, edx
        add     edi, dword ptr [esp + 0x40]
        test    eax, eax
        mov     dword ptr [esp + 0x74], eax
        jz      L_6d9f42
        test    eax, 0xffffff00
        jz      L_6d9e7d
        mov     dword ptr [esp + 0x74], 0xff
L_6d9e7d:
        mov     eax, dword ptr [esp + 0x80]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x78], ecx
        mov     ecx, dword ptr [esp + 0x18]
        xor     eax, eax
        mov     ax, word ptr [edx + ecx*2]
        mov     edx, dword ptr [esp + 0x74]
        /* __emit: no-base SIB form lea ecx,[edx*8+0] (8D 0C D5 00 00 00 00) not encodable natively */
        __emit 0x8D
        __emit 0x0C
        __emit 0xD5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x7c], ecx
        mov     ecx, dword ptr [esp + 0x74]
        mov     edx, 0xff
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x2c], eax
        shr     eax, 0x5
        shr     ecx, 0x8
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x4c], ecx
        and     ecx, 0xff
        imul    ecx, edx
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        and     eax, 0xff00
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [esp + 0x4c]
        shr     ecx, 0x2
        and     eax, 0xff00
        imul    eax, edx
        and     ecx, 0xffffff00
        imul    ecx, dword ptr [esp + 0x7c]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x78]
        and     eax, 0xff
        mov     dword ptr [esp + 0x74], edx
        imul    eax, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x74], eax
        mov     eax, dword ptr [esp + 0x2c]
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x7c]
        and     ecx, 0xff0000
        or      edx, ecx
        mov     ecx, dword ptr [esp + 0x74]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x80]
        shr     ecx, 0x8
        or      edx, ecx
        mov     dword ptr [eax], edx
L_6d9f42:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x80]
        mov     ecx, dword ptr [esp + 0x54]
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x80], edx
        jge     L_6da05f
        mov     eax, dword ptr [esp + 0x20]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jg      L_6d9f88
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x58]
        lea     edx, [ecx + eax*2]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
L_6d9f88:
        dec     dword ptr [esp + 0x84]
        jns     L_6d9ff5
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x5c]
        mov     esi, dword ptr [esp + 0x10]
        dec     eax
        mov     dword ptr [esp + 0x74], eax
        xor     edx, edx
        mov     dword ptr [esp + 0x84], eax
        sub     ebp, dword ptr [ecx + 0x20]
        mov     dl, byte ptr [ebp]
        mov     eax, dword ptr [esp + 0x60]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebp]
        imul    edx, dword ptr [esp + 0x30]
        imul    ecx, esi
        add     ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + ebp + 0x1]
        mov     eax, edx
        xor     edx, edx
        imul    eax, esi
        mov     dl, byte ptr [ebp + 0x1]
        mov     esi, dword ptr [esp + 0x24]
        imul    edx, dword ptr [esp + 0x30]
        add     eax, edx
        sub     esi, dword ptr [esp + 0x74]
        mov     edx, eax
        imul    esi, ecx
        imul    edx, dword ptr [esp + 0x74]
        add     esi, edx
        sub     eax, ecx
        mov     dword ptr [esp + 0x34], eax
L_6d9ff5:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x64]
        inc     eax
        test    ecx, eax
        mov     dword ptr [esp + 0x14], eax
        jz      L_6d9e48
        mov     eax, dword ptr [esp + 0x68]
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x38]
        mov     edi, dword ptr [esp + 0x6c]
        add     ebx, ecx
        xor     edx, edx
        mov     dl, byte ptr [ebx]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebx]
        mov     dword ptr [esp + 0x14], 0x0
        imul    edx, dword ptr [esp + 0x28]
        imul    ecx, edi
        add     ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + ebx + 0x1]
        mov     eax, edx
        xor     edx, edx
        imul    eax, edi
        mov     dl, byte ptr [ebx + 0x1]
        mov     edi, ecx
        imul    edi, dword ptr [esp + 0x3c]
        imul    edx, dword ptr [esp + 0x28]
        add     eax, edx
        sub     eax, ecx
        mov     dword ptr [esp + 0x40], eax
        jmp     L_6d9e48
L_6da05f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret
    }
}
