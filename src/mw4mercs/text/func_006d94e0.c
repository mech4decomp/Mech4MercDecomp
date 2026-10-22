/*
 * FUN_006d94e0 (968 B) — Texture decode routine (sibling of FUN_006dafd0).
 *
 * __cdecl, 5 params. Reads a source object (param_1) describing two sample
 * grids, performs per-pixel color interpolation with shift-based scaling, and
 * writes 32-bit pixels to param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006d94e0(void)
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
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [edx + 0x24]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, eax
        sar     ebx, cl
        mov     dword ptr [esp + 0x58], edi
        mov     edi, dword ptr [edx + 0x28]
        sar     edi, cl
        mov     dword ptr [esp + 0x74], ebx
        lea     ebx, [eax + eax]
        mov     dword ptr [esp + 0x10], edi
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
        mov     dword ptr [esp + 0x28], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, dword ptr [esi + 0x1c]
        sub     ecx, eax
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x84], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, dword ptr [esi + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esp + 0x28]
        dec     eax
        not     eax
        mov     dword ptr [esp + 0x5c], eax
        mov     eax, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x60], eax
        mov     eax, dword ptr [eax + 0x10]
        dec     ebx
        add     eax, 0x2
        not     ebx
        add     ecx, 0x2
        mov     dword ptr [esp + 0x68], ebx
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x6c], esi
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x84]
        mov     esi, dword ptr [esp + 0x14]
        sub     ecx, edi
        mov     dword ptr [esp + 0x18], ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + esi]
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        mov     dword ptr [esp + 0x1c], 0x0
        imul    ecx, edi
        imul    ebx, dword ptr [esp + 0x18]
        add     ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + esi + 0x1]
        mov     eax, ebx
        imul    eax, edi
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 0x1]
        mov     esi, dword ptr [esp + 0x10]
        imul    ebx, dword ptr [esp + 0x18]
        add     eax, ebx
        mov     ebx, dword ptr [esp + 0x28]
        mov     edi, eax
        sub     eax, ecx
        imul    edi, esi
        sub     ebx, esi
        imul    ebx, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebp]
        add     ebx, edi
        mov     edi, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x34], eax
        sub     edi, edx
        xor     eax, eax
        mov     dword ptr [esp + 0x2c], edi
        mov     esi, ecx
        imul    esi, edi
        mov     edi, dword ptr [esp + 0x38]
        mov     al, byte ptr [edi + ebp]
        xor     ecx, ecx
        mov     cl, byte ptr [edi + ebp + 0x1]
        mov     edi, dword ptr [esp + 0x3c]
        imul    eax, edx
        add     esi, eax
        imul    ecx, edx
        xor     eax, eax
        mov     al, byte ptr [ebp + 0x1]
        imul    eax, dword ptr [esp + 0x2c]
        add     ecx, eax
        sub     edi, dword ptr [esp + 0x74]
        mov     eax, ecx
        imul    edi, esi
        imul    eax, dword ptr [esp + 0x74]
        sub     ecx, esi
        add     edi, eax
        mov     eax, dword ptr [esp + 0x80]
        mov     dword ptr [esp + 0x40], ecx
        sub     eax, dword ptr [esp + 0x7c]
        mov     ecx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x84], ecx
L_6d969e:
        mov     ecx, dword ptr [esp + 0x44]
        mov     esi, edi
        sar     esi, cl
        mov     ecx, dword ptr [esp + 0x48]
        mov     eax, ebx
        sar     eax, cl
        add     edi, dword ptr [esp + 0x40]
        add     esi, eax
        add     ebx, dword ptr [esp + 0x34]
        test    esi, esi
        jz      L_6d9784
        test    esi, 0xffffff00
        jz      L_6d96cd
        mov     esi, 0xff
L_6d96cd:
        mov     ecx, dword ptr [esp + 0x84]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x7c], edx
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     cx, word ptr [eax + edx*2]
        /* __emit: no-base SIB form lea eax,[esi*8+0] (8D 04 F5 00 00 00 00) not encodable natively */
        __emit 0x8D
        __emit 0x04
        __emit 0xF5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x80], eax
        mov     eax, dword ptr [esp + 0x7c]
        shr     eax, 0x8
        mov     dword ptr [esp + 0x4c], eax
        and     eax, 0xff
        mov     edx, 0xff
        sub     edx, esi
        imul    eax, edx
        mov     esi, ecx
        shr     esi, 0x5
        and     esi, 0x1f
        imul    esi, dword ptr [esp + 0x80]
        add     esi, eax
        mov     eax, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x78], edx
        and     eax, 0xff00
        imul    eax, dword ptr [esp + 0x78]
        mov     edx, ecx
        shr     edx, 0x2
        and     edx, 0xffffff00
        imul    edx, dword ptr [esp + 0x80]
        add     edx, eax
        mov     eax, dword ptr [esp + 0x7c]
        and     eax, 0xff
        imul    eax, dword ptr [esp + 0x78]
        and     ecx, 0x1f
        imul    ecx, dword ptr [esp + 0x80]
        and     edx, 0xff0000
        add     eax, ecx
        and     esi, 0xff00
        or      esi, edx
        mov     edx, dword ptr [esp + 0x50]
        shr     eax, 0x8
        or      esi, eax
        mov     eax, dword ptr [esp + 0x84]
        mov     dword ptr [eax], esi
L_6d9784:
        mov     eax, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x84]
        mov     ecx, dword ptr [esp + 0x54]
        inc     eax
        add     esi, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x84], esi
        jge     L_6d98a0
        mov     eax, dword ptr [esp + 0x24]
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jg      L_6d97ce
        mov     eax, dword ptr [esp + 0x58]
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, eax
        neg     ecx
        lea     ecx, [esi + ecx*2]
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x24], eax
L_6d97ce:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x5c]
        inc     eax
        test    ecx, eax
        mov     dword ptr [esp + 0x10], eax
        jz      L_6d9839
        mov     ecx, dword ptr [esp + 0x60]
        mov     esi, dword ptr [ecx + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x64]
        xor     ebx, ebx
        add     eax, esi
        mov     bl, byte ptr [ecx + eax]
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], eax
        mov     esi, ebx
        imul    esi, dword ptr [esp + 0x30]
        xor     ebx, ebx
        mov     bl, byte ptr [eax]
        imul    ebx, dword ptr [esp + 0x18]
        add     esi, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + eax + 0x1]
        mov     ecx, ebx
        imul    ecx, dword ptr [esp + 0x30]
        xor     ebx, ebx
        mov     bl, byte ptr [eax + 0x1]
        imul    ebx, dword ptr [esp + 0x18]
        add     ecx, ebx
        mov     ebx, esi
        imul    ebx, dword ptr [esp + 0x28]
        sub     ecx, esi
        mov     dword ptr [esp + 0x34], ecx
L_6d9839:
        mov     eax, dword ptr [esp + 0x74]
        mov     ecx, dword ptr [esp + 0x68]
        inc     eax
        test    ecx, eax
        mov     dword ptr [esp + 0x74], eax
        jz      L_6d969e
        mov     eax, dword ptr [esp + 0x6c]
        mov     ecx, dword ptr [eax + 0x20]
        mov     esi, dword ptr [esp + 0x38]
        add     ebp, ecx
        xor     eax, eax
        mov     al, byte ptr [ebp]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + ebp]
        mov     dword ptr [esp + 0x74], 0x0
        imul    eax, dword ptr [esp + 0x2c]
        imul    ecx, edx
        add     ecx, eax
        xor     eax, eax
        mov     al, byte ptr [esi + ebp + 0x1]
        mov     edi, ecx
        imul    edi, dword ptr [esp + 0x3c]
        mov     esi, eax
        xor     eax, eax
        imul    esi, edx
        mov     al, byte ptr [ebp + 0x1]
        imul    eax, dword ptr [esp + 0x2c]
        add     esi, eax
        sub     esi, ecx
        mov     dword ptr [esp + 0x40], esi
        jmp     L_6d969e
L_6d98a0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret
    }
}
