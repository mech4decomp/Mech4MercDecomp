/*
 * FUN_006DB8F0 (928 B) — Texture decode routine (bit-plane interpolation).
 *
 * 7 stack params; pure integer/bit manipulation, no external calls.
 * Similar to FUN_006DB560 with different bit-mask handling.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006DB8F0(void)
{
    __asm {
        sub     esp, 0x38
        mov     edx, dword ptr [esp + 0x3c]
        push    ebx
        mov     ebx, dword ptr [esp + 0x48]
        push    ebp
        mov     ebp, dword ptr [esp + 0x50]
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        push    edi
        mov     edi, dword ptr [edx + 0x4]
        mov     eax, dword ptr [edi + 0x24]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, esi
        sar     eax, cl
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [edi + 0x14]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x14], eax
        sub     ebx, dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x10], ecx
        mov     eax, ebx
        sar     eax, cl
        sub     ebp, dword ptr [edx + 0xc]
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, ebp
        sar     edx, cl
        mov     dword ptr [esp + 0x64], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x54], edx
        mov     edx, 0x1
        shl     edx, cl
        lea     ecx, [edx - 0x1]
        and     ecx, ebx
        mov     dword ptr [esp + 0x58], edx
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [esp + 0x64]
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [edi + 0x30]
        lea     ebx, [edx - 0x1]
        and     ebx, ebp
        test    cl, 0x8
        jz      L_db98a
        mov     ebp, dword ptr [edi + 0x28]
        mov     ebp, dword ptr [ebp + 0x14]
        sub     ebp, dword ptr [esp + 0x54]
        sub     edx, ebx
        sub     ebp, 0x2
        dec     edx
        mov     ebx, edx
        jmp     L_db98e
L_db98a:
        mov     ebp, dword ptr [esp + 0x54]
L_db98e:
        test    cl, 0x4
        jz      L_db9ad
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x58]
        sub     edx, eax
        sub     edx, 0x2
        mov     eax, edx
        sub     ecx, dword ptr [esp + 0x4c]
        dec     ecx
        mov     dword ptr [esp + 0x4c], ecx
L_db9ad:
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
        mov     ebp, dword ptr [esp + 0x4c]
        mov     ecx, esi
        sar     ebp, cl
        sar     ebx, cl
        lea     ecx, [esi + esi]
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x4c], ebp
        mov     ebp, dword ptr [esp + 0x64]
        sub     ebp, ecx
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, ecx
        sub     ecx, esi
        mov     dword ptr [esp + 0x2c], ebp
        mov     ebp, 0x1
        shl     ebp, cl
        mov     ecx, dword ptr [esp + 0x64]
        sub     ecx, esi
        mov     esi, 0x1
        shl     esi, cl
        lea     ecx, [ebp - 0x1]
        not     ecx
        mov     dword ptr [esp + 0x38], ecx
        mov     cl, byte ptr [eax]
        and     cl, dl
        neg     cl
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x40], ebx
        mov     dword ptr [esp + 0x44], ebp
        sbb     ecx, ecx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x64], ecx
        mov     cl, byte ptr [eax + edi]
        and     cl, dl
        neg     cl
        sbb     ecx, ecx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x58], ecx
        xor     ecx, ecx
        shl     edx, 0x1
        cmp     edx, 0x80
        mov     dword ptr [esp + 0x54], ecx
        jle     L_dba63
        mov     ecx, 0x1
        mov     dword ptr [esp + 0x54], ecx
        mov     edx, ecx
L_dba63:
        add     eax, ecx
        mov     cl, byte ptr [eax]
        mov     al, byte ptr [eax + edi]
        and     cl, dl
        neg     cl
        sbb     ecx, ecx
        and     al, dl
        and     ecx, 0xff
        neg     al
        mov     dword ptr [esp + 0x28], ecx
        sbb     eax, eax
        and     eax, 0xff
        mov     dword ptr [esp + 0x24], eax
        mov     eax, esi
        mov     esi, dword ptr [esp + 0x58]
        sub     eax, ebx
        imul    esi, ebx
        mov     ecx, eax
        imul    ecx, dword ptr [esp + 0x64]
        add     ecx, esi
        mov     esi, dword ptr [esp + 0x24]
        imul    esi, ebx
        mov     ebx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x3c], eax
        imul    eax, dword ptr [esp + 0x28]
        add     eax, esi
        mov     esi, ebp
        sub     esi, ebx
        imul    esi, ecx
        mov     ebx, eax
        imul    ebx, dword ptr [esp + 0x4c]
        add     esi, ebx
        mov     ebx, eax
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x60]
        xor     ebp, ebp
        sub     ecx, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x60], ebp
        mov     dword ptr [esp + 0x64], ecx
L_dbaed:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ebp, esi
        sar     ebp, cl
        add     esi, ebx
        test    ebp, ebp
        jz      L_dbba6
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [eax]
        mov     ebx, dword ptr [esp + 0x60]
        mov     edi, dword ptr [esp + 0x14]
        sub     edi, ebx
        xor     eax, eax
        mov     ax, word ptr [edi]
        __emit 0x8D  /* __emit: no-base SIB form lea edi,[ebp*8+0] (8D 3C ED 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x3C
        __emit 0xED
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x58], edi
        mov     edi, ecx
        shr     edi, 0x8
        mov     ebx, 0xff
        sub     ebx, ebp
        mov     ebp, eax
        shr     ebp, 0x5
        mov     dword ptr [esp + 0x50], edi
        and     edi, 0xff
        imul    edi, ebx
        and     ebp, 0x1f
        imul    ebp, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x5c], ebx
        add     ebp, edi
        mov     edi, dword ptr [esp + 0x50]
        mov     ebx, eax
        shr     ebx, 0x2
        and     ebx, 0xffffff00
        imul    ebx, dword ptr [esp + 0x58]
        and     edi, 0xff00
        imul    edi, dword ptr [esp + 0x5c]
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x5c]
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x58]
        add     ebx, edi
        mov     edi, dword ptr [esp + 0x30]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x24]
        and     ebx, 0xff0000
        and     ebp, 0xff00
        or      ebp, ebx
        mov     ebx, dword ptr [esp + 0x28]
        shr     ecx, 0x8
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [ecx], ebp
L_dbba6:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esp + 0x60]
        inc     ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x64]
        add     ebp, 0x2
        add     ecx, 0x4
        mov     dword ptr [esp + 0x60], ebp
        mov     ebp, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x64], ecx
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, ebp
        jge     L_dbc88
        mov     ecx, dword ptr [esp + 0x18]
        dec     ecx
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jg      L_dbbfc
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x14]
        neg     ecx
        lea     ecx, [ebp + ecx*2]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x18], ecx
L_dbbfc:
        mov     ecx, dword ptr [esp + 0x4c]
        mov     ebp, dword ptr [esp + 0x38]
        inc     ecx
        test    ebp, ecx
        mov     dword ptr [esp + 0x4c], ecx
        jz      L_dbaed
        mov     ecx, dword ptr [esp + 0x54]
        xor     esi, esi
        cmp     ecx, esi
        mov     dword ptr [esp + 0x4c], esi
        jz      L_dbc23
        inc     dword ptr [esp + 0x1c]
L_dbc23:
        shl     edx, 0x1
        cmp     edx, 0x80
        mov     dword ptr [esp + 0x54], esi
        jle     L_dbc3c
        mov     esi, 0x1
        mov     dword ptr [esp + 0x54], esi
        mov     edx, esi
L_dbc3c:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     bl, byte ptr [esi + ecx]
        add     esi, ecx
        mov     cl, byte ptr [esi + edi]
        and     bl, dl
        neg     bl
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x3c]
        mov     esi, ebp
        sbb     ebx, ebx
        and     cl, dl
        and     ebx, 0xff
        neg     cl
        sbb     ecx, ecx
        imul    esi, dword ptr [esp + 0x44]
        imul    eax, ebx
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x40]
        add     eax, ecx
        mov     ebx, eax
        sub     ebx, ebp
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], ebx
        jmp     L_dbaed
L_dbc88:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret
    }
}
