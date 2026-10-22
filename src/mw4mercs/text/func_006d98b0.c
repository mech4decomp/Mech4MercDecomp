/*
 * FUN_006d98b0 (980 B) — Texture decode routine (sibling of FUN_006dafd0).
 *
 * __cdecl, 5 params. Reads a source object (param_1) describing two sample
 * grids, performs per-pixel color interpolation with shift-based scaling, and
 * writes 32-bit pixels to param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006d98b0(void)
{
    __asm {
        sub     esp, 0x64
        mov     edx, dword ptr [esp + 0x68]
        push    ebx
        mov     ebx, dword ptr [edx + 0x2c]
        push    ebp
        mov     ebp, dword ptr [edx + 0x30]
        push    esi
        mov     esi, dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi + 0x24]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x88]
        mov     ecx, eax
        sar     edi, cl
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [edx + 0x24]
        mov     dword ptr [esp + 0x88], ecx
        mov     ecx, eax
        mov     dword ptr [esp + 0x58], edi
        mov     edi, dword ptr [edx + 0x28]
        sar     edi, cl
        sar     ebx, cl
        mov     dword ptr [esp + 0x78], edi
        mov     edi, dword ptr [edx + 0x34]
        sar     edi, cl
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x14], edi
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
        mov     dword ptr [esp + 0x70], edi
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
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [esp + 0x20]
        dec     eax
        not     eax
        mov     dword ptr [esp + 0x5c], eax
        mov     eax, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x60], eax
        mov     eax, dword ptr [eax + 0x10]
        dec     edx
        add     eax, 0x2
        not     edx
        add     ecx, 0x2
        mov     dword ptr [esp + 0x68], edx
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x6c], esi
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x40]
        mov     esi, dword ptr [esp + 0x88]
        sub     ecx, ebx
        xor     edx, edx
        mov     dl, byte ptr [esi]
        mov     dword ptr [esp + 0x10], ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + esi]
        imul    edx, dword ptr [esp + 0x10]
        imul    ecx, ebx
        add     ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + esi + 0x1]
        mov     eax, edx
        xor     edx, edx
        imul    eax, ebx
        mov     dl, byte ptr [esi + 0x1]
        mov     ebx, dword ptr [esp + 0x20]
        imul    edx, dword ptr [esp + 0x10]
        add     eax, edx
        mov     edx, dword ptr [esp + 0x78]
        sub     ebx, edx
        imul    ebx, ecx
        mov     esi, eax
        imul    esi, edx
        sub     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebp]
        xor     edx, edx
        add     ebx, esi
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esp + 0x38]
        sub     eax, edi
        mov     dword ptr [esp + 0x38], eax
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x34]
        imul    esi, eax
        mov     dl, byte ptr [ecx + ebp]
        imul    edx, edi
        add     esi, edx
        xor     edx, edx
        mov     dl, byte ptr [ecx + ebp + 0x1]
        mov     ecx, edx
        xor     edx, edx
        imul    ecx, edi
        mov     dl, byte ptr [ebp + 0x1]
        mov     edi, dword ptr [esp + 0x3c]
        imul    edx, eax
        mov     eax, dword ptr [esp + 0x14]
        add     ecx, edx
        sub     edi, eax
        mov     edx, ecx
        imul    edi, esi
        imul    edx, eax
        mov     eax, dword ptr [esp + 0x84]
        sub     ecx, esi
        add     edi, edx
        mov     edx, dword ptr [esp + 0x80]
        mov     dword ptr [esp + 0x40], ecx
        xor     ecx, ecx
        sub     eax, edx
        mov     edx, dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x80], ecx
        mov     dword ptr [esp + 0x28], edx
L_6d9a75:
        mov     ecx, dword ptr [esp + 0x44]
        mov     esi, edi
        sar     esi, cl
        mov     ecx, dword ptr [esp + 0x48]
        mov     eax, ebx
        sar     eax, cl
        add     edi, dword ptr [esp + 0x40]
        add     esi, eax
        add     ebx, dword ptr [esp + 0x30]
        test    esi, esi
        jz      L_6d9b4f
        test    esi, 0xffffff00
        jz      L_6d9aa4
        mov     esi, 0xff
L_6d9aa4:
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [esp + 0x80]
        mov     edx, dword ptr [esp + 0x18]
        sub     edx, eax
        xor     eax, eax
        mov     ax, word ptr [edx]
        /* __emit: no-base SIB form lea edx,[esi*8+0] (8D 14 F5 00 00 00 00) not encodable natively */
        __emit 0x8D
        __emit 0x14
        __emit 0xF5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x84], edx
        mov     dword ptr [esp + 0x4c], ecx
        shr     ecx, 0x8
        mov     edx, 0xff
        sub     edx, esi
        mov     esi, eax
        mov     dword ptr [esp + 0x7c], edx
        shr     esi, 0x5
        mov     edx, ecx
        and     esi, 0x1f
        imul    esi, dword ptr [esp + 0x84]
        and     edx, 0xff
        imul    edx, dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x50], eax
        shr     eax, 0x2
        and     eax, 0xffffff00
        imul    eax, dword ptr [esp + 0x84]
        add     esi, edx
        mov     edx, dword ptr [esp + 0x7c]
        and     ecx, 0xff00
        imul    ecx, edx
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x50]
        and     eax, 0xff0000
        and     esi, 0xff00
        or      esi, eax
        mov     eax, dword ptr [esp + 0x4c]
        and     eax, 0xff
        imul    eax, edx
        mov     edx, dword ptr [esp + 0x28]
        and     ecx, 0x1f
        imul    ecx, dword ptr [esp + 0x84]
        add     eax, ecx
        shr     eax, 0x8
        or      esi, eax
        mov     dword ptr [edx], esi
L_6d9b4f:
        mov     ecx, dword ptr [esp + 0x80]
        mov     eax, dword ptr [esp + 0x24]
        add     ecx, 0x2
        inc     eax
        mov     dword ptr [esp + 0x80], ecx
        mov     ecx, dword ptr [esp + 0x54]
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], edx
        jge     L_6d9c7c
        mov     eax, dword ptr [esp + 0x1c]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jg      L_6d9ba0
        mov     eax, dword ptr [esp + 0x58]
        mov     esi, dword ptr [esp + 0x18]
        mov     ecx, eax
        neg     ecx
        lea     ecx, [esi + ecx*2]
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], eax
L_6d9ba0:
        mov     eax, dword ptr [esp + 0x78]
        mov     ecx, dword ptr [esp + 0x5c]
        inc     eax
        test    ecx, eax
        mov     dword ptr [esp + 0x78], eax
        jz      L_6d9c0f
        mov     eax, dword ptr [esp + 0x60]
        mov     ebx, dword ptr [eax + 0x20]
        mov     esi, dword ptr [esp + 0x88]
        mov     eax, dword ptr [esp + 0x64]
        add     esi, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + esi]
        mov     dword ptr [esp + 0x78], 0x0
        mov     dword ptr [esp + 0x88], esi
        imul    ebx, dword ptr [esp + 0x10]
        imul    ecx, dword ptr [esp + 0x2c]
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + esi + 0x1]
        mov     eax, ebx
        imul    eax, dword ptr [esp + 0x2c]
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 0x1]
        imul    ebx, dword ptr [esp + 0x10]
        add     eax, ebx
        mov     ebx, ecx
        imul    ebx, dword ptr [esp + 0x20]
        sub     eax, ecx
        mov     dword ptr [esp + 0x30], eax
L_6d9c0f:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x68]
        inc     eax
        test    ecx, eax
        mov     dword ptr [esp + 0x14], eax
        jz      L_6d9a75
        mov     ecx, dword ptr [esp + 0x6c]
        mov     eax, dword ptr [ecx + 0x20]
        mov     edi, dword ptr [esp + 0x70]
        xor     ecx, ecx
        add     ebp, eax
        mov     eax, dword ptr [esp + 0x34]
        mov     cl, byte ptr [eax + ebp]
        mov     dword ptr [esp + 0x14], 0x0
        mov     esi, ecx
        xor     ecx, ecx
        imul    esi, edi
        mov     cl, byte ptr [ebp]
        imul    ecx, dword ptr [esp + 0x38]
        add     esi, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebp + 0x1]
        mov     eax, ecx
        xor     ecx, ecx
        imul    eax, edi
        mov     cl, byte ptr [ebp + 0x1]
        mov     edi, esi
        imul    edi, dword ptr [esp + 0x3c]
        imul    ecx, dword ptr [esp + 0x38]
        add     eax, ecx
        sub     eax, esi
        mov     dword ptr [esp + 0x40], eax
        jmp     L_6d9a75
L_6d9c7c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x64
        ret
    }
}
