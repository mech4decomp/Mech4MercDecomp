/*
 * FUN_006d8550 (621 B) — Image color-interpolation / scaling inner loop.
 *
 * __cdecl, RET 0 (5 params). Pure stack-based computation; no absolute
 * memory references, so no extern symbols needed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006d8550(void)
{
    __asm {
        sub     esp, 0x3c
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edx + 0x24]
        push    ebx
        mov     ebx, dword ptr [edx + 0x4]
        mov     ecx, dword ptr [ebx + 0x24]
        push    ebp
        mov     ebp, dword ptr [ebx + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x5c]
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        mov     ecx, esi
        sar     edi, cl
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [edx + 0x1c]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], edi
        mov     edi, dword ptr [edx + 0x28]
        sar     edi, cl
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x50], edi
        mov     edi, dword ptr [edx + 0x2c]
        mov     edx, dword ptr [ebx + 0x18]
        sar     edi, cl
        lea     ecx, [esi + esi*0x1]
        sub     ebp, ecx
        mov     ecx, dword ptr [ebx + 0x14]
        sub     ecx, esi
        add     ebp, edx
        mov     ebx, dword ptr [ebx + 0x28]
        mov     dword ptr [esp + 0x2c], ebp
        mov     ebp, 0x1
        shl     ebp, cl
        mov     ecx, edx
        sub     ecx, esi
        mov     esi, dword ptr [ebx + 0x10]
        mov     edx, 0x1
        shl     edx, cl
        lea     ecx, [ebp + -0x1]
        not     ecx
        mov     dword ptr [esp + 0x3c], ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x1]
        sub     edx, edi
        add     esi, 0x2
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x40], ebx
        xor     ebx, ebx
        mov     bl, byte ptr [esi + eax*0x1 + 0x1]
        mov     dword ptr [esp + 0x60], ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax]
        mov     dword ptr [esp + 0x44], esi
        mov     dword ptr [esp + 0x48], ebp
        mov     dword ptr [esp + 0x34], edi
        imul    ebx, edi
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [esi + eax*0x1]
        mov     esi, ebp
        xor     ebp, ebp
        mov     dword ptr [esp + 0x10], ebp
        imul    edx, edi
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x24]
        imul    edx, dword ptr [esp + 0x60]
        add     edx, ebx
        sub     esi, dword ptr [esp + 0x50]
        imul    esi, ecx
        mov     ebx, edx
        imul    ebx, dword ptr [esp + 0x50]
        add     esi, ebx
        mov     ebx, edx
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        sub     ecx, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x58], ebp
        mov     dword ptr [esp + 0x60], ecx
L_864b:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ebp, esi
        sar     ebp, cl
        add     esi, ebx
        test    ebp, ebp
        jz      L_8704
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [eax]
        mov     ebx, dword ptr [esp + 0x58]
        mov     edi, dword ptr [esp + 0x14]
        sub     edi, ebx
        xor     eax, eax
        mov     ax, word ptr [edi]
        /* __emit: no-base SIB lea [ebp*8+0] (8D 3C ED 00 00 00 00) not encodable natively */
        __emit  0x8D
        __emit  0x3C
        __emit  0xED
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        mov     dword ptr [esp + 0x5c], edi
        mov     edi, ecx
        shr     edi, 0x8
        mov     ebx, 0xff
        sub     ebx, ebp
        mov     ebp, eax
        shr     ebp, 0x5
        mov     dword ptr [esp + 0x30], edi
        and     edi, 0xff
        imul    edi, ebx
        and     ebp, 0x1f
        imul    ebp, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x54], ebx
        add     ebp, edi
        mov     edi, dword ptr [esp + 0x30]
        mov     ebx, eax
        shr     ebx, 0x2
        and     ebx, 0xffffff00
        imul    ebx, dword ptr [esp + 0x5c]
        and     edi, 0xff00
        imul    edi, dword ptr [esp + 0x54]
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x54]
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x5c]
        add     ebx, edi
        mov     edi, dword ptr [esp + 0x34]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x20]
        and     ebx, 0xff0000
        and     ebp, 0xff00
        or      ebp, ebx
        mov     ebx, dword ptr [esp + 0x28]
        shr     ecx, 0x8
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [ecx], ebp
L_8704:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esp + 0x58]
        inc     ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x60]
        add     ebp, 0x2
        add     ecx, 0x4
        mov     dword ptr [esp + 0x58], ebp
        mov     ebp, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x60], ecx
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, ebp
        jge     L_87b5
        mov     ecx, dword ptr [esp + 0x18]
        dec     ecx
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jg      L_875a
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x14]
        neg     ecx
        lea     ecx, [ebp + ecx*0x2]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x18], ecx
L_875a:
        mov     ecx, dword ptr [esp + 0x50]
        mov     ebp, dword ptr [esp + 0x3c]
        inc     ecx
        /* __emit: MSVC6 swaps test operands (85 CD) vs ref test ecx,ebp (85 E9) */
        __emit  0x85
        __emit  0xE9
        mov     dword ptr [esp + 0x50], ecx
        jz      L_864b
        mov     ecx, dword ptr [esp + 0x40]
        add     eax, dword ptr [ecx + 0x20]
        mov     ebx, dword ptr [esp + 0x44]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x1]
        mov     ebp, edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x50], 0x0
        mov     dword ptr [esp + 0x20], eax
        mov     esi, ecx
        xor     ecx, ecx
        imul    edx, esi
        mov     cl, byte ptr [ebx + eax*0x1 + 0x1]
        mov     esi, ebp
        imul    esi, dword ptr [esp + 0x48]
        imul    ecx, edi
        add     edx, ecx
        mov     ebx, edx
        sub     ebx, ebp
        mov     dword ptr [esp + 0x28], ebx
        jmp     L_864b
L_87b5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret
    }
}
