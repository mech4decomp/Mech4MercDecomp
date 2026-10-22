/*
 * FUN_006D8A00 (602 B) — Image/color-space processing loop (bilinear-ish
 * interpolation over a palette/color table). Variant of FUN_006D87C0.
 *
 * __cdecl, 5 params (param_1, param_2, param_3, param_4, param_5), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006d8a00(void)
{
    __asm {
        sub     esp, 0x38
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x4c]
        push    ebx
        mov     ebx, dword ptr [eax + 0x28]
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        mov     ecx, dword ptr [ebp + 0x24]
        push    esi
        mov     esi, dword ptr [eax + 0x24]
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        mov     ecx, edx
        sar     edi, cl
        mov     ecx, dword ptr [eax + 0x20]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, edx
        sar     ebx, cl
        mov     dword ptr [esp + 0x40], edi
        mov     edi, dword ptr [eax + 0x2c]
        mov     eax, dword ptr [ebp + 0x14]
        sar     edi, cl
        lea     ecx, [edx + edx]
        sub     eax, ecx
        add     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x14]
        sub     ecx, edx
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, 1
        shl     eax, cl
        mov     ecx, dword ptr [ebp + 0x18]
        mov     ebp, dword ptr [ebp + 0x28]
        sub     ecx, edx
        mov     dword ptr [esp + 0x1c], eax
        xor     eax, eax
        mov     al, byte ptr [esi]
        mov     dword ptr [esp + 0x44], ebp
        mov     ebp, dword ptr [ebp + 0x10]
        mov     edx, 1
        shl     edx, cl
        xor     ecx, ecx
        mov     cl, byte ptr [esi + ebp + 2]
        add     ebp, 2
        sub     edx, edi
        mov     dword ptr [esp + 0x24], edx
        imul    edx, eax
        imul    ecx, edi
        add     edx, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 1]
        xor     eax, eax
        mov     al, byte ptr [esi + ebp + 1]
        mov     dword ptr [esp + 0x5c], ebx
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esp + 0x38], ebp
        imul    ecx, dword ptr [esp + 0x24]
        imul    eax, edi
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, edx
        imul    ebx, dword ptr [esp + 0x5c]
        sub     ecx, edx
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x58]
        add     eax, ebx
        xor     ebx, ebx
        sub     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x4c], ecx
L_6d8ae8:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ebx, eax
        sar     ebx, cl
        sub     eax, dword ptr [esp + 0x28]
        test    ebx, ebx
        jz      L_6d8ba3
        mov     ecx, dword ptr [esp + 0x4c]
        mov     esi, dword ptr [ecx]
        mov     ebp, dword ptr [esp + 0x54]
        mov     edi, dword ptr [esp + 0x14]
        sub     edi, ebp
        xor     ecx, ecx
        mov     cx, word ptr [edi]
        lea     edi, [ebx*8 + 0]
        mov     dword ptr [esp + 0x58], edi
        mov     edi, esi
        shr     edi, 8
        mov     ebp, 0xff
        sub     ebp, ebx
        mov     ebx, ecx
        shr     ebx, 5
        mov     dword ptr [esp + 0x30], edi
        and     edi, 0xff
        imul    edi, ebp
        and     ebx, 0x1f
        imul    ebx, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x50], ebp
        add     ebx, edi
        mov     edi, dword ptr [esp + 0x30]
        mov     ebp, ecx
        shr     ebp, 2
        and     ebp, 0xffffff00
        imul    ebp, dword ptr [esp + 0x58]
        and     edi, 0xff00
        imul    edi, dword ptr [esp + 0x50]
        and     esi, 0xff
        imul    esi, dword ptr [esp + 0x50]
        and     ecx, 0x1f
        imul    ecx, dword ptr [esp + 0x58]
        add     ebp, edi
        mov     edi, dword ptr [esp + 0x34]
        add     esi, ecx
        mov     ecx, dword ptr [esp + 0x4c]
        and     ebp, 0xff0000
        and     ebx, 0xff00
        or      ebx, ebp
        mov     ebp, dword ptr [esp + 0x38]
        shr     esi, 8
        or      ebx, esi
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [ecx], ebx
L_6d8ba3:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x54]
        inc     ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        add     ebx, 2
        add     ecx, 4
        mov     dword ptr [esp + 0x54], ebx
        mov     ebx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, ebx
        jge     L_6d8c52
        mov     ecx, dword ptr [esp + 0x18]
        dec     ecx
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jg      L_6d8bf2
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x40]
        lea     ebx, [ebx + ecx*2]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ecx
L_6d8bf2:
        dec     dword ptr [esp + 0x5c]
        jns     L_6d8ae8
        mov     eax, dword ptr [esp + 0x1c]
        lea     ecx, [eax - 1]
        mov     eax, dword ptr [esp + 0x44]
        mov     ebx, dword ptr [eax + 0x20]
        xor     eax, eax
        sub     esi, ebx
        mov     al, byte ptr [esi]
        mov     ebx, edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x50], ebx
        imul    ebx, ecx
        mov     dword ptr [esp + 0x58], eax
        imul    edx, dword ptr [esp + 0x58]
        xor     eax, eax
        mov     al, byte ptr [esi + ebp]
        mov     dword ptr [esp + 0x5c], ecx
        mov     dword ptr [esp + 0x20], esi
        imul    eax, edi
        add     edx, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ecx
        mov     ecx, dword ptr [esp + 0x50]
        imul    eax, edx
        add     eax, ebx
        sub     ecx, edx
        mov     dword ptr [esp + 0x28], ecx
        jmp     L_6d8ae8
L_6d8c52:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret
    }
}
