/*
 * FUN_006DC010 (919 B) — Texture decode routine (bit-plane interpolation).
 *
 * 7 stack params; pure integer/bit manipulation, no external calls.
 * Similar to FUN_006DBC90 with different bit-mask handling.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006DC010(void)
{
    __asm {
        sub     esp, 0x34
        mov     edx, dword ptr [esp + 0x38]
        push    ebx
        mov     ebx, dword ptr [esp + 0x48]
        push    ebp
        mov     ebp, dword ptr [esp + 0x48]
        push    esi
        mov     esi, dword ptr [esp + 0x5c]
        push    edi
        mov     edi, dword ptr [edx + 0x4]
        mov     eax, dword ptr [edi + 0x24]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, esi
        sar     eax, cl
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [edi + 0x14]
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x14], eax
        sub     ebp, dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x20], ecx
        mov     eax, ebp
        sar     eax, cl
        sub     ebx, dword ptr [edx + 0xc]
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, ebx
        sar     edx, cl
        mov     dword ptr [esp + 0x60], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x50], edx
        mov     edx, 0x1
        shl     edx, cl
        lea     ecx, [edx - 0x1]
        and     ecx, ebp
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esp + 0x60]
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [edi + 0x30]
        lea     ebp, [edx - 0x1]
        and     ebp, ebx
        test    cl, 0x8
        jz      L_dc0aa
        mov     ebx, dword ptr [edi + 0x28]
        mov     ebx, dword ptr [ebx + 0x14]
        sub     ebx, dword ptr [esp + 0x50]
        sub     edx, ebp
        sub     ebx, 0x2
        dec     edx
        mov     ebp, edx
        jmp     L_dc0ae
L_dc0aa:
        mov     ebx, dword ptr [esp + 0x50]
L_dc0ae:
        test    cl, 0x4
        jz      L_dc0cd
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x54]
        sub     edx, eax
        sub     edx, 0x2
        mov     eax, edx
        sub     ecx, dword ptr [esp + 0x48]
        dec     ecx
        mov     dword ptr [esp + 0x48], ecx
L_dc0cd:
        mov     ecx, eax
        and     ecx, 0x7
        mov     edx, 0x80
        sar     edx, cl
        mov     ecx, dword ptr [edi + 0x28]
        mov     edi, dword ptr [ecx + 0x10]
        sar     edi, 0x3
        add     edi, 0x2
        inc     ebx
        imul    ebx, edi
        add     ebx, dword ptr [ecx + 0x30]
        sar     eax, 0x3
        lea     eax, [ebx + eax + 0x1]
        mov     ebx, dword ptr [esp + 0x48]
        mov     ecx, esi
        sar     ebx, cl
        sar     ebp, cl
        lea     ecx, [esi + esi]
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x48], ebx
        mov     ebx, dword ptr [esp + 0x60]
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        add     ebx, ecx
        sub     ecx, esi
        mov     dword ptr [esp + 0x28], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, dword ptr [esp + 0x60]
        sub     ecx, esi
        mov     esi, 0x1
        mov     dword ptr [esp + 0x20], ebx
        mov     bl, byte ptr [eax]
        shl     esi, cl
        mov     cl, byte ptr [eax + edi]
        and     bl, dl
        neg     bl
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x34], ebp
        mov     dword ptr [esp + 0x60], 0x0
        sbb     ebx, ebx
        and     cl, dl
        and     ebx, 0xff
        neg     cl
        sbb     ecx, ecx
        and     ecx, 0xff
        sar     edx, 0x1
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x54], edx
        jnz     L_dc17c
        mov     edx, 0x80
        mov     dword ptr [esp + 0x60], 0x1
        mov     dword ptr [esp + 0x54], edx
L_dc17c:
        mov     ecx, esi
        sub     ecx, ebp
        mov     esi, ecx
        imul    esi, ebx
        mov     ebx, dword ptr [esp + 0x50]
        imul    ebx, ebp
        add     esi, ebx
        mov     ebx, dword ptr [esp + 0x60]
        add     eax, ebx
        mov     bl, byte ptr [eax + edi]
        mov     al, byte ptr [eax]
        and     bl, dl
        neg     bl
        mov     dword ptr [esp + 0x40], ecx
        sbb     ebx, ebx
        and     al, dl
        and     ebx, 0xff
        imul    ebx, ebp
        neg     al
        sbb     eax, eax
        and     eax, 0xff
        imul    eax, ecx
        mov     ecx, dword ptr [esp + 0x48]
        add     ebx, eax
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, ecx
        mov     dword ptr [esp + 0x50], ebx
        imul    ebx, ecx
        imul    eax, esi
        mov     ecx, dword ptr [esp + 0x50]
        sub     ecx, esi
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x5c]
        add     eax, ebx
        xor     ebx, ebx
        sub     ecx, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x58], ebx
        mov     dword ptr [esp + 0x50], ecx
L_dc1fa:
        mov     ecx, dword ptr [esp + 0x28]
        mov     ebx, eax
        sar     ebx, cl
        sub     eax, dword ptr [esp + 0x24]
        test    ebx, ebx
        jz      L_dc2b5
        mov     ebp, dword ptr [esp + 0x58]
        mov     edi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [edx]
        sub     edi, ebp
        xor     ecx, ecx
        mov     cx, word ptr [edi]
        __emit 0x8D  /* __emit: no-base SIB form lea edi,[ebx*8+0] (8D 3C DD 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x3C
        __emit 0xDD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x5c], edi
        mov     edi, edx
        shr     edi, 0x8
        mov     ebp, 0xff
        sub     ebp, ebx
        mov     ebx, ecx
        shr     ebx, 0x5
        mov     dword ptr [esp + 0x2c], edi
        and     edi, 0xff
        imul    edi, ebp
        and     ebx, 0x1f
        imul    ebx, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x4c], ebp
        add     ebx, edi
        mov     edi, dword ptr [esp + 0x2c]
        mov     ebp, ecx
        shr     ebp, 0x2
        and     ebp, 0xffffff00
        imul    ebp, dword ptr [esp + 0x5c]
        and     edi, 0xff00
        imul    edi, dword ptr [esp + 0x4c]
        and     edx, 0xff
        imul    edx, dword ptr [esp + 0x4c]
        and     ecx, 0x1f
        imul    ecx, dword ptr [esp + 0x5c]
        add     ebp, edi
        mov     edi, dword ptr [esp + 0x30]
        add     edx, ecx
        mov     ecx, dword ptr [esp + 0x50]
        and     ebp, 0xff0000
        and     ebx, 0xff00
        or      ebx, ebp
        mov     ebp, dword ptr [esp + 0x34]
        shr     edx, 0x8
        or      ebx, edx
        mov     edx, dword ptr [esp + 0x54]
        mov     dword ptr [ecx], ebx
L_dc2b5:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x58]
        inc     ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x50]
        add     ebx, 0x2
        add     ecx, 0x4
        mov     dword ptr [esp + 0x58], ebx
        mov     ebx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, ebx
        jge     L_dc39f
        mov     ecx, dword ptr [esp + 0x18]
        dec     ecx
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jg      L_dc304
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x3c]
        lea     ebx, [ebx + ecx*2]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ecx
L_dc304:
        dec     dword ptr [esp + 0x48]
        jns     L_dc1fa
        mov     eax, dword ptr [esp + 0x20]
        lea     ebx, [eax - 0x1]
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        mov     dword ptr [esp + 0x4c], ebx
        mov     dword ptr [esp + 0x48], ebx
        jz      L_dc329
        dec     dword ptr [esp + 0x1c]
L_dc329:
        sar     edx, 0x1
        mov     ecx, 0x0
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x60], ecx
        jnz     L_dc34c
        mov     ecx, 0x1
        mov     edx, 0x80
        mov     dword ptr [esp + 0x60], ecx
        mov     dword ptr [esp + 0x54], edx
L_dc34c:
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ecx
        mov     cl, byte ptr [eax]
        mov     al, byte ptr [eax + edi]
        and     cl, dl
        neg     cl
        sbb     ecx, ecx
        and     al, dl
        and     ecx, 0xff
        neg     al
        mov     dword ptr [esp + 0x5c], ecx
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x40]
        sbb     eax, eax
        imul    esi, dword ptr [esp + 0x5c]
        and     eax, 0xff
        imul    eax, ebp
        add     esi, eax
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, esi
        imul    ebx, dword ptr [esp + 0x4c]
        add     eax, ebx
        sub     ecx, esi
        mov     dword ptr [esp + 0x24], ecx
        jmp     L_dc1fa
L_dc39f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
    }
}
