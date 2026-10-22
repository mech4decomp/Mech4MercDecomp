/*
 * FUN_006DB560 (907 B) — Texture decode routine (bit-plane interpolation).
 *
 * 7 stack params; pure integer/bit manipulation, no external calls.
 * Similar to FUN_006DBC90 but with different bit-mask handling.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006DB560(void)
{
    __asm {
        sub     esp, 0x34
        mov     edx, dword ptr [esp + 0x38]
        push    ebx
        mov     ebx, dword ptr [esp + 0x44]
        push    ebp
        mov     ebp, dword ptr [esp + 0x4c]
        push    esi
        mov     esi, dword ptr [esp + 0x5c]
        push    edi
        mov     edi, dword ptr [edx + 0x4]
        mov     eax, dword ptr [edi + 0x24]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, esi
        sar     eax, cl
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [edi + 0x14]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x10], eax
        sub     ebx, dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x1c], ecx
        mov     eax, ebx
        sar     eax, cl
        sub     ebp, dword ptr [edx + 0xc]
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, ebp
        sar     edx, cl
        mov     dword ptr [esp + 0x60], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x50], edx
        mov     edx, 0x1
        shl     edx, cl
        lea     ecx, [edx - 0x1]
        and     ecx, ebx
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esp + 0x60]
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [edi + 0x30]
        lea     ebx, [edx - 0x1]
        and     ebx, ebp
        test    cl, 0x8
        jz      L_db5fa
        mov     ebp, dword ptr [edi + 0x28]
        mov     ebp, dword ptr [ebp + 0x14]
        sub     ebp, dword ptr [esp + 0x50]
        sub     edx, ebx
        sub     ebp, 0x2
        dec     edx
        mov     ebx, edx
        jmp     L_db5fe
L_db5fa:
        mov     ebp, dword ptr [esp + 0x50]
L_db5fe:
        test    cl, 0x4
        jz      L_db61d
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x54]
        sub     edx, eax
        sub     edx, 0x2
        mov     eax, edx
        sub     ecx, dword ptr [esp + 0x48]
        dec     ecx
        mov     dword ptr [esp + 0x48], ecx
L_db61d:
        mov     ecx, eax
        and     ecx, 0x7
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [edi + 0x28]
        mov     edi, dword ptr [ecx + 0x10]
        sar     edi, 0x3
        add     edi, 0x2
        inc     ebp
        imul    ebp, edi
        add     ebp, dword ptr [ecx + 0x30]
        sar     eax, 0x3
        lea     eax, [eax + ebp + 0x1]
        mov     ebp, dword ptr [esp + 0x48]
        mov     ecx, esi
        sar     ebp, cl
        sar     ebx, cl
        lea     ecx, [esi + esi]
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x48], ebp
        mov     ebp, dword ptr [esp + 0x60]
        sub     ebp, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        add     ebp, ecx
        sub     ecx, esi
        mov     dword ptr [esp + 0x28], ebp
        mov     ebp, 0x1
        shl     ebp, cl
        mov     ecx, dword ptr [esp + 0x60]
        sub     ecx, esi
        mov     esi, 0x1
        shl     esi, cl
        lea     ecx, [ebp - 0x1]
        not     ecx
        mov     dword ptr [esp + 0x34], ecx
        mov     cl, byte ptr [eax]
        and     cl, dl
        neg     cl
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x40], ebp
        sbb     ecx, ecx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x60], ecx
        mov     cl, byte ptr [eax + edi]
        and     cl, dl
        neg     cl
        sbb     ecx, ecx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x54], ecx
        xor     ecx, ecx
        shl     edx, 0x1
        cmp     edx, 0x80
        mov     dword ptr [esp + 0x50], ecx
        jle     L_db6d3
        mov     ecx, 0x1
        mov     dword ptr [esp + 0x50], ecx
        mov     edx, ecx
L_db6d3:
        add     eax, ecx
        mov     cl, byte ptr [eax]
        mov     al, byte ptr [eax + edi]
        and     cl, dl
        neg     cl
        sbb     ecx, ecx
        and     al, dl
        and     ecx, 0xff
        neg     al
        mov     dword ptr [esp + 0x24], ecx
        sbb     eax, eax
        and     eax, 0xff
        sub     esi, ebx
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x54]
        imul    eax, ebx
        mov     ecx, esi
        imul    ecx, dword ptr [esp + 0x60]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x1c]
        imul    eax, ebx
        mov     ebx, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x38], esi
        imul    esi, dword ptr [esp + 0x24]
        add     esi, eax
        mov     eax, ebp
        mov     ebp, dword ptr [esp + 0x58]
        sub     eax, ebx
        imul    eax, ecx
        mov     ebx, esi
        imul    ebx, dword ptr [esp + 0x48]
        add     eax, ebx
        mov     ebx, esi
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x54], 0x0
        mov     dword ptr [esp + 0x60], ecx
L_db75b:
        mov     ecx, dword ptr [esp + 0x28]
        mov     ebp, eax
        sar     ebp, cl
        add     eax, ebx
        mov     dword ptr [esp + 0x4c], eax
        test    ebp, ebp
        jz      L_db813
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x54]
        xor     eax, eax
        mov     ax, word ptr [esi + edi*2]
        __emit 0x8D  /* __emit: no-base SIB form lea ebx,[ebp*8+0] (8D 1C ED 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x1C
        __emit 0xED
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x58], ebx
        mov     edi, 0xff
        sub     edi, ebp
        mov     esi, ecx
        shr     esi, 0x8
        mov     ebp, eax
        shr     ebp, 0x5
        and     ebp, 0x1f
        imul    ebp, ebx
        mov     ebx, esi
        and     ebx, 0xff
        imul    ebx, edi
        add     ebp, ebx
        mov     ebx, eax
        shr     ebx, 0x2
        mov     dword ptr [esp + 0x5c], edi
        mov     edi, dword ptr [esp + 0x58]
        and     ebx, 0xffffff00
        imul    ebx, edi
        and     esi, 0xff00
        imul    esi, dword ptr [esp + 0x5c]
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x5c]
        and     eax, 0x1f
        imul    eax, edi
        mov     edi, dword ptr [esp + 0x2c]
        add     ebx, esi
        mov     esi, dword ptr [esp + 0x1c]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x4c]
        and     ebx, 0xff0000
        and     ebp, 0xff00
        or      ebp, ebx
        mov     ebx, dword ptr [esp + 0x24]
        shr     ecx, 0x8
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [ecx], ebp
L_db813:
        mov     ebp, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [esp + 0x54]
        add     ebp, 0x4
        inc     ecx
        mov     dword ptr [esp + 0x60], ebp
        cmp     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x54], ecx
        jge     L_db8e3
        mov     ecx, dword ptr [esp + 0x14]
        dec     ecx
        test    ecx, ecx
        mov     dword ptr [esp + 0x14], ecx
        jg      L_db858
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x10]
        neg     ecx
        lea     ecx, [ebp + ecx*2]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], ecx
L_db858:
        mov     ecx, dword ptr [esp + 0x48]
        mov     ebp, dword ptr [esp + 0x34]
        inc     ecx
        test    ebp, ecx
        mov     dword ptr [esp + 0x48], ecx
        jz      L_db75b
        mov     ecx, dword ptr [esp + 0x50]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [esp + 0x48], eax
        jz      L_db87f
        inc     dword ptr [esp + 0x18]
L_db87f:
        shl     edx, 0x1
        cmp     edx, 0x80
        mov     dword ptr [esp + 0x50], eax
        jle     L_db898
        mov     eax, 0x1
        mov     dword ptr [esp + 0x50], eax
        mov     edx, eax
L_db898:
        mov     ecx, dword ptr [esp + 0x18]
        mov     bl, byte ptr [eax + ecx]
        add     eax, ecx
        mov     al, byte ptr [eax + edi]
        and     bl, dl
        neg     bl
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x38]
        sbb     ebx, ebx
        and     al, dl
        and     ebx, 0xff
        neg     al
        sbb     eax, eax
        imul    esi, ebx
        and     eax, 0xff
        imul    eax, dword ptr [esp + 0x3c]
        add     esi, eax
        mov     eax, ecx
        imul    eax, dword ptr [esp + 0x40]
        mov     ebx, esi
        sub     ebx, ecx
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x24], ebx
        jmp     L_db75b
L_db8e3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
    }
}
