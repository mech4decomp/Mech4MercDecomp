/*
 * FUN_006DBC90 (894 B) — Texture decode routine (bit-plane interpolation).
 *
 * 7 stack params; reads/writes a destination buffer via param_2/param_3.
 * Pure integer/bit manipulation, no external calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006DBC90(void)
{
    __asm {
        sub     esp, 0x30
        mov     edx, dword ptr [esp + 0x34]
        push    ebx
        mov     ebx, dword ptr [esp + 0x44]
        push    ebp
        mov     ebp, dword ptr [esp + 0x44]
        push    esi
        mov     esi, dword ptr [esp + 0x58]
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
        mov     dword ptr [esp + 0x24], ecx
        mov     eax, ebp
        sar     eax, cl
        sub     ebx, dword ptr [edx + 0xc]
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, ebx
        sar     edx, cl
        mov     dword ptr [esp + 0x5c], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x4c], edx
        mov     edx, 0x1
        shl     edx, cl
        lea     ecx, [edx - 0x1]
        and     ecx, ebp
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [edi + 0x30]
        lea     ebp, [edx - 0x1]
        and     ebp, ebx
        test    cl, 0x8
        jz      L_dbd2a
        mov     ebx, dword ptr [edi + 0x28]
        mov     ebx, dword ptr [ebx + 0x14]
        sub     ebx, dword ptr [esp + 0x4c]
        sub     edx, ebp
        sub     ebx, 0x2
        dec     edx
        mov     ebp, edx
        jmp     L_dbd2e
L_dbd2a:
        mov     ebx, dword ptr [esp + 0x4c]
L_dbd2e:
        test    cl, 0x4
        jz      L_dbd4d
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x50]
        sub     edx, eax
        sub     edx, 0x2
        mov     eax, edx
        sub     ecx, dword ptr [esp + 0x44]
        dec     ecx
        mov     dword ptr [esp + 0x44], ecx
L_dbd4d:
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
        mov     ebx, dword ptr [esp + 0x44]
        mov     ecx, esi
        sar     ebx, cl
        sar     ebp, cl
        lea     ecx, [esi + esi]
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x44], ebx
        mov     ebx, dword ptr [esp + 0x5c]
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x24]
        add     ebx, ecx
        sub     ecx, esi
        mov     dword ptr [esp + 0x2c], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, dword ptr [esp + 0x5c]
        sub     ecx, esi
        mov     esi, 0x1
        shl     esi, cl
        mov     cl, byte ptr [eax]
        and     cl, dl
        neg     cl
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x34], ebp
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x5c], 0x0
        sbb     ecx, ecx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x20], ecx
        mov     cl, byte ptr [eax + edi]
        and     cl, dl
        neg     cl
        sbb     ecx, ecx
        and     ecx, 0xff
        sar     edx, 0x1
        mov     dword ptr [esp + 0x50], edx
        jnz     L_dbdfc
        mov     edx, 0x80
        mov     dword ptr [esp + 0x5c], 0x1
        mov     dword ptr [esp + 0x50], edx
L_dbdfc:
        imul    ecx, ebp
        sub     esi, ebp
        mov     dword ptr [esp + 0x28], esi
        imul    esi, dword ptr [esp + 0x20]
        add     esi, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        add     eax, ecx
        mov     bl, byte ptr [eax + edi]
        mov     al, byte ptr [eax]
        and     bl, dl
        neg     bl
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x10], 0x0
        sbb     ebx, ebx
        and     al, dl
        and     ebx, 0xff
        imul    ebx, ebp
        neg     al
        sbb     eax, eax
        and     eax, 0xff
        imul    eax, dword ptr [esp + 0x28]
        add     ebx, eax
        mov     eax, dword ptr [esp + 0x24]
        sub     eax, ecx
        mov     dword ptr [esp + 0x4c], ebx
        imul    ebx, ecx
        imul    eax, esi
        mov     ecx, dword ptr [esp + 0x4c]
        sub     ecx, esi
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x58]
        add     eax, ebx
        sub     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x4c], ecx
L_dbe74:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ebx, eax
        sar     ebx, cl
        sub     eax, dword ptr [esp + 0x20]
        test    ebx, ebx
        jz      L_dbf2e
        mov     edi, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [edx]
        xor     ecx, ecx
        mov     cx, word ptr [edi + ebp*2]
        __emit 0x8D  /* __emit: no-base SIB form lea edi,[ebx*8+0] (8D 3C DD 00000000) — MSVC6 re-bases via different SIB */
        __emit 0x3C
        __emit 0xDD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov     dword ptr [esp + 0x58], edi
        mov     edi, edx
        shr     edi, 0x8
        mov     ebp, 0xff
        sub     ebp, ebx
        mov     ebx, ecx
        shr     ebx, 0x5
        mov     dword ptr [esp + 0x48], edi
        and     edi, 0xff
        imul    edi, ebp
        and     ebx, 0x1f
        imul    ebx, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x54], ebp
        add     ebx, edi
        mov     edi, dword ptr [esp + 0x48]
        mov     ebp, ecx
        shr     ebp, 0x2
        and     ebp, 0xffffff00
        imul    ebp, dword ptr [esp + 0x58]
        and     edi, 0xff00
        imul    edi, dword ptr [esp + 0x54]
        and     edx, 0xff
        imul    edx, dword ptr [esp + 0x54]
        and     ecx, 0x1f
        imul    ecx, dword ptr [esp + 0x58]
        add     ebp, edi
        mov     edi, dword ptr [esp + 0x30]
        add     edx, ecx
        mov     ecx, dword ptr [esp + 0x4c]
        and     ebp, 0xff0000
        and     ebx, 0xff00
        or      ebx, ebp
        mov     ebp, dword ptr [esp + 0x34]
        shr     edx, 0x8
        or      ebx, edx
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [ecx], ebx
L_dbf2e:
        mov     ebx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x10]
        add     ebx, 0x4
        inc     ecx
        mov     dword ptr [esp + 0x4c], ebx
        cmp     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x10], ecx
        jge     L_dc006
        mov     ecx, dword ptr [esp + 0x18]
        dec     ecx
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jg      L_dbf6c
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x3c]
        lea     ebx, [ebx + ecx*2]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ecx
L_dbf6c:
        dec     dword ptr [esp + 0x44]
        jns     L_dbe74
        mov     eax, dword ptr [esp + 0x24]
        lea     ebx, [eax - 0x1]
        mov     eax, dword ptr [esp + 0x5c]
        test    eax, eax
        mov     dword ptr [esp + 0x58], ebx
        mov     dword ptr [esp + 0x44], ebx
        jz      L_dbf91
        dec     dword ptr [esp + 0x1c]
L_dbf91:
        sar     edx, 0x1
        mov     eax, 0x0
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x5c], eax
        jnz     L_dbfb4
        mov     eax, 0x1
        mov     edx, 0x80
        mov     dword ptr [esp + 0x5c], eax
        mov     dword ptr [esp + 0x50], edx
L_dbfb4:
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, eax
        mov     al, byte ptr [ecx]
        and     al, dl
        neg     al
        sbb     eax, eax
        and     eax, 0xff
        mov     dword ptr [esp + 0x20], eax
        mov     al, byte ptr [ecx + edi]
        and     al, dl
        neg     al
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x28]
        sbb     eax, eax
        imul    esi, dword ptr [esp + 0x20]
        and     eax, 0xff
        imul    eax, ebp
        add     esi, eax
        mov     eax, dword ptr [esp + 0x24]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, esi
        imul    ebx, dword ptr [esp + 0x58]
        add     eax, ebx
        sub     ecx, esi
        mov     dword ptr [esp + 0x20], ecx
        jmp     L_dbe74
L_dc006:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret
    }
}
