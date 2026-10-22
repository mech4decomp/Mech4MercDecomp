/*
 * FUN_006d8c60 (1070 B) — Pure integer/bitfield arithmetic routine.
 * No external calls, no absolute data refs, no vtable. In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006d8c60(void)
{
    __asm {
        sub     esp, 0x44
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x58]
        mov     ecx, edx
        push    ebx
        mov     ebx, dword ptr [eax + 0x28]
        sar     ebx, cl
        push    ebp
        mov     ebp, dword ptr [eax + 0x24]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x2c]
        sar     eax, cl
        mov     ecx, dword ptr [esi + 0x14]
        push    edi
        lea     edi, [edx + edx*0x1]
        sub     ecx, edi
        add     ecx, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x58], ecx
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, edx
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, dword ptr [esi + 0x18]
        sub     ecx, edx
        mov     edx, 0x1
        shl     edx, cl
        lea     ecx, [edi + -0x1]
        not     ecx
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [esi + 0x28]
        mov     esi, dword ptr [ecx + 0x20]
        mov     dword ptr [esp + 0x40], edx
        mov     dword ptr [esp + 0x38], edi
        mov     edi, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ebp]
        mov     edx, ecx
        and     edx, 0x1f
        shl     edx, 0x3
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, ecx
        sar     ecx, 0x7
        sar     edx, 0x2
        and     ecx, 0xf8
        and     edx, 0xf8
        mov     dword ptr [esp + 0x24], esi
        add     edi, 0x2
        imul    edi, esi
        add     esi, ebp
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x34], edx
        mov     edx, dword ptr [esi]
        mov     ecx, edx
        and     ecx, 0x1f
        shl     ecx, 0x3
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, edx
        sar     ecx, 0x2
        sar     edx, 0x7
        mov     dword ptr [esp + 0x4c], esi
        mov     esi, dword ptr [edi + ebp*0x1]
        and     ecx, 0xf8
        and     edx, 0xf8
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x68], edx
        mov     edx, esi
        sar     esi, 0x7
        and     esi, 0xf8
        mov     dword ptr [esp + 0x20], esi
        mov     esi, dword ptr [esp + 0x24]
        and     ecx, 0x1f
        sar     edx, 0x2
        add     esi, edi
        mov     edi, dword ptr [ebp + esi*0x1]
        shl     ecx, 0x3
        and     edx, 0xf8
        add     ebp, esi
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x48], ebp
        mov     esi, edi
        imul    ecx, eax
        imul    edx, eax
        mov     ebp, edi
        sar     ebp, 0x2
        and     ebp, 0xf8
        mov     dword ptr [esp + 0x44], ebp
        sar     edi, 0x7
        and     edi, 0xf8
        mov     dword ptr [esp + 0x30], edi
        mov     edi, dword ptr [esp + 0x40]
        sub     edi, eax
        mov     ebp, edi
        imul    ebp, dword ptr [esp + 0x3c]
        add     ebp, ecx
        mov     ecx, edi
        imul    ecx, dword ptr [esp + 0x34]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], ecx
        imul    edx, eax
        mov     ecx, edi
        imul    ecx, dword ptr [esp + 0x2c]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x20], ecx
        imul    edx, eax
        mov     dword ptr [esp + 0x10], ebp
        mov     ecx, edi
        imul    ecx, dword ptr [esp + 0x18]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x30]
        mov     ebp, edi
        imul    edx, eax
        imul    ebp, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], ecx
        and     esi, 0x1f
        mov     ecx, edi
        imul    ecx, dword ptr [esp + 0x68]
        add     ecx, edx
        shl     esi, 0x3
        imul    esi, eax
        add     ebp, esi
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x38]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x2c], ebp
        imul    ebp, ebx
        mov     edx, ecx
        imul    edx, dword ptr [esp + 0x10]
        add     edx, ebp
        mov     ebp, dword ptr [esp + 0x1c]
        imul    ebp, ebx
        mov     esi, ecx
        imul    ecx, dword ptr [esp + 0x20]
        imul    esi, dword ptr [esp + 0x14]
        add     esi, ebp
        mov     ebp, dword ptr [esp + 0x18]
        imul    ebp, ebx
        mov     ebx, dword ptr [esp + 0x2c]
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x68], ecx
        sub     ebx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, ebp
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x58]
        mov     ebp, edx
        sar     ebp, cl
        mov     dword ptr [esp + 0x3c], ebx
        mov     dword ptr [esp + 0x14], ebp
        mov     ebp, esi
        sar     ebp, cl
        mov     dword ptr [esp + 0x34], ebp
        mov     ebp, dword ptr [esp + 0x68]
        sar     ebp, cl
        mov     ecx, dword ptr [esp + 0x30]
        add     edx, ebx
        mov     ebx, dword ptr [esp + 0x68]
        add     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        add     ebx, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [esp + 0x68], ebx
        mov     ebx, ecx
        shr     ebx, 0x8
        mov     dword ptr [esp + 0x10], ebx
        and     ebx, 0xff00
        and     ecx, 0xff
        imul    ebx, ebp
        imul    ecx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x60]
        and     ebx, 0xff00000
        shr     ecx, 0x8
        or      ecx, ebx
        mov     ebx, dword ptr [esp + 0x10]
        and     ebx, 0xff
        imul    ebx, dword ptr [esp + 0x34]
        and     ebx, 0xff00
        or      ecx, ebx
        mov     ebx, dword ptr [esp + 0x5c]
        mov     dword ptr [ebx], ecx
        mov     ecx, dword ptr [esp + 0x64]
        sub     ecx, ebp
        cmp     ecx, 0x1
        jle     L_006d9086
        add     ebx, 0x4
        mov     dword ptr [esp + 0x64], ebx
        mov     ebx, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x5c], ebx
        mov     ebx, dword ptr [esp + 0x4c]
        dec     ecx
        mov     dword ptr [esp + 0x60], ebx
        mov     ebx, dword ptr [esp + 0x68]
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [esp + 0x24]
        jmp     L_006d8f0c
L_006d8f04:
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esp + 0x68]
L_006d8f0c:
        mov     ebp, dword ptr [esp + 0x28]
        inc     ebp
        test    dword ptr [esp + 0x50], ebp
        mov     dword ptr [esp + 0x28], ebp
        jz      L_006d9002
        mov     edx, dword ptr [esp + 0x60]
        mov     ebx, dword ptr [esp + 0x5c]
        add     edx, ecx
        add     ebx, ecx
        mov     dword ptr [esp + 0x60], edx
        mov     edx, dword ptr [edx]
        mov     ecx, edx
        mov     ebp, edx
        sar     edx, 0x7
        and     edx, 0xf8
        mov     dword ptr [esp + 0x68], edx
        mov     edx, ebx
        mov     esi, dword ptr [edx]
        mov     edx, esi
        mov     dword ptr [esp + 0x5c], ebx
        mov     ebx, esi
        sar     esi, 0x7
        and     esi, 0xf8
        mov     dword ptr [esp + 0x30], esi
        mov     esi, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x10], esi
        mov     esi, dword ptr [esp + 0x1c]
        and     ecx, 0x1f
        shl     ecx, 0x3
        mov     dword ptr [esp + 0x14], esi
        mov     esi, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x20], esi
        sar     edx, 0x2
        sar     ebp, 0x2
        and     edx, 0xf8
        and     ebp, 0xf8
        imul    edx, eax
        mov     esi, edi
        imul    esi, ecx
        mov     ecx, edi
        imul    ecx, ebp
        add     ecx, edx
        mov     ebp, ecx
        mov     ecx, dword ptr [esp + 0x30]
        and     ebx, 0x1f
        imul    ecx, eax
        shl     ebx, 0x3
        imul    ebx, eax
        mov     edx, edi
        imul    edx, dword ptr [esp + 0x68]
        add     esi, ebx
        mov     ebx, dword ptr [esp + 0x38]
        add     edx, ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x2c], esi
        sub     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], ebp
        sub     ecx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, ebx
        imul    edx, dword ptr [esp + 0x10]
        mov     esi, ebx
        imul    ebx, ebp
        imul    esi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x20], ecx
L_006d9002:
        mov     ecx, dword ptr [esp + 0x58]
        mov     ebp, edx
        sar     ebp, cl
        mov     dword ptr [esp + 0x14], ebp
        mov     ebp, esi
        sar     ebp, cl
        mov     dword ptr [esp + 0x34], ebp
        mov     ebp, ebx
        sar     ebp, cl
        add     edx, dword ptr [esp + 0x3c]
        add     esi, dword ptr [esp + 0x30]
        add     ebx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x68], ebx
        mov     ebx, dword ptr [ecx]
        mov     ecx, ebx
        shr     ecx, 0x8
        mov     dword ptr [esp + 0x10], ecx
        and     ecx, 0xff00
        imul    ecx, ebp
        and     ebx, 0xff
        imul    ebx, dword ptr [esp + 0x14]
        and     ecx, 0xff00000
        shr     ebx, 0x8
        or      ebx, ecx
        mov     ecx, dword ptr [esp + 0x10]
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x34]
        and     ecx, 0xff00
        or      ebx, ecx
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [ecx], ebx
        add     ecx, 0x4
        mov     dword ptr [esp + 0x64], ecx
        dec     dword ptr [esp + 0x40]
        jnz     L_006d8f04
L_006d9086:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret
    }
}
