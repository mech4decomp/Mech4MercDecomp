/*
 * FUN_006D82F0 (603 B) — Image/color-space processing loop (bilinear-ish
 * interpolation over a palette/color table). Variant of FUN_006D87C0 /
 * FUN_006D8A00.
 *
 * __cdecl, 5 params (param_1, param_2, param_3, param_4, param_5), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006d82f0(void)
{
    __asm {
        sub     esp, 0x38
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edx + 0x24]
        push    ebx
        mov     ebx, dword ptr [edx + 4]
        mov     ecx, dword ptr [ebx + 0x24]
        push    ebp
        mov     ebp, dword ptr [ebx + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x58]
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
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x4c], edi
        mov     edi, dword ptr [edx + 0x2c]
        mov     edx, dword ptr [ebx + 0x18]
        sar     edi, cl
        lea     ecx, [esi + esi]
        sub     ebp, ecx
        mov     ecx, dword ptr [ebx + 0x14]
        sub     ecx, esi
        add     ebp, edx
        mov     ebx, dword ptr [ebx + 0x28]
        mov     dword ptr [esp + 0x2c], ebp
        mov     ebp, 1
        shl     ebp, cl
        mov     ecx, edx
        sub     ecx, esi
        mov     esi, dword ptr [ebx + 0x10]
        mov     edx, 1
        shl     edx, cl
        lea     ecx, [ebp - 1]
        not     ecx
        mov     dword ptr [esp + 0x38], ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 1]
        sub     edx, edi
        add     esi, 2
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x3c], ebx
        xor     ebx, ebx
        mov     bl, byte ptr [esi + eax + 1]
        mov     dword ptr [esp + 0x5c], ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax]
        mov     dword ptr [esp + 0x40], esi
        mov     dword ptr [esp + 0x44], ebp
        mov     dword ptr [esp + 0x30], edi
        imul    ebx, edi
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [esi + eax]
        mov     esi, ebp
        mov     ebp, dword ptr [esp + 0x54]
        imul    edx, edi
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x24]
        imul    edx, dword ptr [esp + 0x5c]
        add     edx, ebx
        sub     esi, dword ptr [esp + 0x4c]
        imul    esi, ecx
        mov     ebx, edx
        imul    ebx, dword ptr [esp + 0x4c]
        add     esi, ebx
        mov     ebx, edx
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x58]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x5c], ecx
L_6d83eb:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ebp, esi
        sar     ebp, cl
        add     esi, ebx
        test    ebp, ebp
        jz      L_6d84a3
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     ax, word ptr [edi + ebx*2]
        lea     edi, [ebp*8 + 0]
        mov     dword ptr [esp + 0x58], edi
        mov     edi, ecx
        shr     edi, 8
        mov     ebx, 0xff
        sub     ebx, ebp
        mov     ebp, eax
        shr     ebp, 5
        mov     dword ptr [esp + 0x50], edi
        and     edi, 0xff
        imul    edi, ebx
        and     ebp, 0x1f
        imul    ebp, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x54], ebx
        add     ebp, edi
        mov     edi, dword ptr [esp + 0x50]
        mov     ebx, eax
        shr     ebx, 2
        and     ebx, 0xffffff00
        imul    ebx, dword ptr [esp + 0x58]
        and     edi, 0xff00
        imul    edi, dword ptr [esp + 0x54]
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x54]
        and     eax, 0x1f
        imul    eax, dword ptr [esp + 0x58]
        add     ebx, edi
        mov     edi, dword ptr [esp + 0x30]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x20]
        and     ebx, 0xff0000
        and     ebp, 0xff00
        or      ebp, ebx
        mov     ebx, dword ptr [esp + 0x28]
        shr     ecx, 8
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        mov     dword ptr [ecx], ebp
L_6d84a3:
        mov     ebp, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, 4
        inc     ecx
        mov     dword ptr [esp + 0x5c], ebp
        cmp     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x10], ecx
        jge     L_6d8543
        mov     ecx, dword ptr [esp + 0x18]
        dec     ecx
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jg      L_6d84e8
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x14]
        neg     ecx
        lea     ecx, [ebp + ecx*2]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x18], ecx
L_6d84e8:
        mov     ecx, dword ptr [esp + 0x4c]
        mov     ebp, dword ptr [esp + 0x38]
        inc     ecx
        /* __emit: MSVC6 swaps test ecx,ebp to test ebp,ecx (85 CD); ref needs 85 E9 */
        __emit 0x85
        __emit 0xE9
        mov     dword ptr [esp + 0x4c], ecx
        jz      L_6d83eb
        mov     ecx, dword ptr [esp + 0x3c]
        add     eax, dword ptr [ecx + 0x20]
        mov     ebx, dword ptr [esp + 0x40]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 1]
        mov     ebp, edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x4c], 0
        mov     dword ptr [esp + 0x20], eax
        mov     esi, ecx
        xor     ecx, ecx
        imul    edx, esi
        mov     cl, byte ptr [ebx + eax + 1]
        mov     esi, ebp
        imul    esi, dword ptr [esp + 0x44]
        imul    ecx, edi
        add     edx, ecx
        mov     ebx, edx
        sub     ebx, ebp
        mov     dword ptr [esp + 0x28], ebx
        jmp     L_6d83eb
L_6d8543:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret
    }
}
