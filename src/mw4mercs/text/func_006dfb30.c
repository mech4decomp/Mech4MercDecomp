/*
 * FUN_006DFB30 (916 B) — Texture fill routine.
 *
 * 5 stack params; fills a destination buffer with a color value using
 * rep stosd, with per-row interpolation. Pure computation, no calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006DFB30(void)
{
    __asm {
        sub     esp, 0x40
        mov     edx, dword ptr [esp + 0x44]
        push    ebx
        mov     ebx, dword ptr [edx + 0x24]
        push    ebp
        mov     ebp, dword ptr [edx + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x64]
        mov     eax, edi
        sar     edi, 0x18
        mov     ecx, edi
        and     eax, 0xffffff
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [edx + 0x28]
        mov     edx, dword ptr [edx + 0x2c]
        sar     eax, cl
        sar     edx, cl
        mov     ecx, dword ptr [ebp + 0x14]
        sub     ecx, edi
        mov     esi, 0x1
        shl     esi, cl
        mov     ecx, dword ptr [ebp + 0x18]
        sub     ecx, edi
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [ebp + 0x28]
        mov     ebp, dword ptr [ecx + 0x20]
        mov     dword ptr [esp + 0x14], esi
        dec     esi
        mov     dword ptr [esp + 0x64], edi
        not     esi
        mov     dword ptr [esp + 0x4c], esi
        mov     esi, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ebx]
        mov     edi, ecx
        and     edi, 0x1f
        shl     edi, 0x3
        mov     dword ptr [esp + 0x34], edi
        mov     edi, ecx
        sar     ecx, 0x7
        sar     edi, 0x2
        and     ecx, 0xf8
        and     edi, 0xf8
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x30], ebp
        add     esi, 0x2
        imul    esi, ebp
        add     ebp, ebx
        mov     dword ptr [esp + 0x2c], edi
        mov     edi, dword ptr [ebp]
        mov     ecx, edi
        and     ecx, 0x1f
        shl     ecx, 0x3
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, edi
        sar     ecx, 0x2
        sar     edi, 0x7
        mov     dword ptr [esp + 0x54], ebx
        mov     ebx, dword ptr [esi + ebx]
        and     ecx, 0xf8
        and     edi, 0xf8
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x48], ebp
        mov     dword ptr [esp + 0x28], edi
        mov     edi, ebx
        mov     ebp, ebx
        sar     ebx, 0x7
        add     ecx, esi
        mov     esi, dword ptr [esp + 0x54]
        and     edi, 0x1f
        sar     ebp, 0x2
        and     ebx, 0xf8
        shl     edi, 0x3
        and     ebp, 0xf8
        add     ecx, esi
        mov     dword ptr [esp + 0x38], ebx
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [esp + 0x44], ecx
        mov     dword ptr [esp + 0x1c], eax
        mov     ecx, ebx
        mov     esi, ebx
        imul    edi, edx
        imul    ebp, edx
        sar     ebx, 0x7
        sar     esi, 0x2
        and     ebx, 0xf8
        and     esi, 0xf8
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x54], esi
        mov     esi, dword ptr [esp + 0x64]
        sub     esi, edx
        mov     ebx, esi
        imul    ebx, dword ptr [esp + 0x34]
        add     ebx, edi
        mov     edi, esi
        imul    edi, dword ptr [esp + 0x2c]
        add     edi, ebp
        mov     dword ptr [esp + 0x10], edi
        and     ecx, 0x1f
        shl     ecx, 0x3
        mov     dword ptr [esp + 0x64], ebx
        imul    ecx, edx
        mov     ebx, dword ptr [esp + 0x38]
        imul    ebx, edx
        mov     edi, esi
        imul    edi, dword ptr [esp + 0x18]
        add     edi, ebx
        mov     ebx, esi
        imul    ebx, dword ptr [esp + 0x20]
        add     ebx, ecx
        mov     ecx, dword ptr [esp + 0x54]
        imul    ecx, edx
        mov     dword ptr [esp + 0x18], edi
        mov     edi, dword ptr [esp + 0x3c]
        mov     ebp, esi
        imul    edi, edx
        imul    ebp, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     ecx, esi
        imul    ecx, dword ptr [esp + 0x28]
        add     ecx, edi
        mov     edi, dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x54], ecx
        mov     ecx, ebx
        sub     ecx, edi
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, ebp
        sub     ecx, edi
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x54]
        sub     ecx, edi
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x14]
        sub     ecx, eax
        mov     dword ptr [esp + 0x2c], ecx
        mov     edi, ecx
        imul    edi, dword ptr [esp + 0x64]
        mov     ecx, ebx
        imul    ecx, eax
        mov     dword ptr [esp + 0x64], ecx
        mov     ecx, dword ptr [esp + 0x24]
        add     ecx, edi
        mov     edi, dword ptr [esp + 0x64]
        add     edi, ecx
        mov     dword ptr [esp + 0x34], edi
        mov     edi, dword ptr [esp + 0x2c]
        imul    edi, dword ptr [esp + 0x10]
        mov     ecx, ebp
        imul    ecx, eax
        mov     dword ptr [esp + 0x64], ecx
        mov     ecx, dword ptr [esp + 0x20]
        add     ecx, edi
        mov     edi, dword ptr [esp + 0x64]
        add     edi, ecx
        mov     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x64], edi
        mov     edi, dword ptr [esp + 0x2c]
        imul    edi, dword ptr [esp + 0x18]
        imul    ecx, eax
        mov     eax, dword ptr [esp + 0x28]
        add     eax, edi
        mov     edi, dword ptr [esp + 0x58]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x60]
        sub     ecx, dword ptr [esp + 0x5c]
        mov     dword ptr [edi], eax
        cmp     ecx, 0x1
        jle     L_dfebc
        add     edi, 0x4
        mov     dword ptr [esp + 0x40], edi
        mov     edi, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x60], edi
        mov     edi, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x58], edi
        mov     edi, dword ptr [esp + 0x40]
        dec     ecx
        mov     dword ptr [esp + 0x5c], ecx
        rep     stosd
L_dfd8a:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x4c]
        inc     eax
        test    ecx, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_dfe85
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x58]
        add     eax, ecx
        mov     edi, dword ptr [esp + 0x60]
        add     edi, ecx
        mov     dword ptr [esp + 0x58], eax
        mov     eax, dword ptr [eax]
        mov     ecx, eax
        and     ecx, 0x1f
        shl     ecx, 0x3
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, eax
        sar     ecx, 0x2
        and     ecx, 0xf8
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [edi]
        sar     eax, 0x7
        and     eax, 0xf8
        mov     dword ptr [esp + 0x28], eax
        mov     eax, ecx
        and     eax, 0x1f
        shl     eax, 0x3
        mov     dword ptr [esp + 0x64], ebx
        imul    eax, edx
        mov     ebx, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x18], ebx
        mov     ebx, esi
        imul    ebx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x60], edi
        mov     edi, ecx
        add     ebx, eax
        sar     edi, 0x2
        and     edi, 0xf8
        imul    edi, edx
        mov     eax, esi
        imul    eax, dword ptr [esp + 0x24]
        sar     ecx, 0x7
        add     eax, edi
        mov     edi, dword ptr [esp + 0x64]
        and     ecx, 0xf8
        imul    ecx, edx
        mov     dword ptr [esp + 0x10], ebp
        mov     ebp, eax
        mov     eax, esi
        imul    eax, dword ptr [esp + 0x28]
        add     eax, ecx
        mov     dword ptr [esp + 0x54], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, ebx
        imul    eax, edi
        sub     ecx, edi
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x14]
        imul    ecx, edi
        mov     dword ptr [esp + 0x64], ecx
        mov     ecx, ebp
        sub     ecx, edi
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x14]
        imul    ecx, edi
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x54]
        sub     ecx, edi
        mov     dword ptr [esp + 0x1c], 0x0
        mov     dword ptr [esp + 0x28], ecx
        jmp     L_dfe8d
L_dfe85:
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x28]
L_dfe8d:
        add     eax, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [esp + 0x20]
        add     edi, eax
        mov     eax, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x64], edi
        mov     edi, dword ptr [esp + 0x18]
        add     edi, ecx
        dec     eax
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x5c], eax
        jnz     L_dfd8a
L_dfebc:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
    }
}
