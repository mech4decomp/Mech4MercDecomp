/*
 * FUN_006d9090 (1100 B) — Pure integer/bitfield arithmetic routine.
 * No external calls, no absolute data refs, no vtable. In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006d9090(void)
{
    __asm {
        sub     esp, 0x38
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, eax
        push    ebx
        mov     ebx, dword ptr [edx + 0x4]
        push    ebp
        mov     ebp, dword ptr [ebx + 0x18]
        push    esi
        mov     esi, dword ptr [edx + 0x28]
        sar     esi, cl
        push    edi
        mov     edi, dword ptr [edx + 0x24]
        mov     dword ptr [esp + 0x3c], edi
        mov     dword ptr [esp + 0x4c], esi
        mov     esi, dword ptr [edx + 0x2c]
        mov     edx, dword ptr [ebx + 0x14]
        sar     esi, cl
        lea     ecx, [eax + eax*0x1]
        sub     edx, ecx
        mov     ecx, dword ptr [ebx + 0x14]
        add     edx, ebp
        mov     ebx, dword ptr [ebx + 0x28]
        sub     ecx, eax
        mov     dword ptr [esp + 0x14], edx
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, ebp
        mov     ebp, dword ptr [ebx + 0x20]
        sub     ecx, eax
        mov     dword ptr [esp + 0x20], edx
        mov     eax, 0x1
        shl     eax, cl
        mov     ecx, dword ptr [ebx + 0x10]
        add     ecx, 0x2
        imul    ecx, ebp
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [edi]
        mov     ebx, eax
        mov     edx, eax
        sar     eax, 0x7
        sar     edx, 0x2
        and     eax, 0xf8
        and     edx, 0xf8
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [edi + ebp*0x1]
        mov     dword ptr [esp + 0x5c], edx
        mov     edx, eax
        and     edx, 0x1f
        shl     edx, 0x3
        mov     dword ptr [esp + 0x34], edx
        mov     edx, eax
        sar     eax, 0x7
        and     eax, 0xf8
        sar     edx, 0x2
        and     edx, 0xf8
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [ecx + edi*0x1]
        mov     dword ptr [esp + 0x38], ebp
        mov     ebp, eax
        mov     dword ptr [esp + 0x30], edx
        mov     edx, eax
        sar     eax, 0x7
        and     eax, 0xf8
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [esp + 0x38]
        add     eax, ecx
        mov     eax, dword ptr [eax + edi*0x1]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esp + 0x40]
        and     edx, 0x1f
        sub     ecx, esi
        and     ebx, 0x1f
        shl     ebx, 0x3
        shl     edx, 0x3
        mov     edi, ecx
        imul    edx, esi
        imul    edi, ebx
        sar     ebp, 0x2
        and     ebp, 0xf8
        mov     dword ptr [esp + 0x40], ecx
        add     edi, edx
        imul    ebp, esi
        mov     ebx, ecx
        imul    ebx, dword ptr [esp + 0x5c]
        add     ebx, ebp
        mov     ebp, dword ptr [esp + 0x28]
        mov     edx, ecx
        imul    ebp, esi
        imul    edx, dword ptr [esp + 0x24]
        add     edx, ebp
        mov     dword ptr [esp + 0x10], edx
        mov     edx, eax
        and     edx, 0x1f
        shl     edx, 0x3
        imul    edx, esi
        mov     dword ptr [esp + 0x5c], edx
        mov     ebp, dword ptr [esp + 0x5c]
        mov     edx, ecx
        imul    edx, dword ptr [esp + 0x34]
        add     ebp, edx
        mov     edx, eax
        sar     edx, 0x2
        and     edx, 0xf8
        imul    edx, esi
        sar     eax, 0x7
        mov     dword ptr [esp + 0x5c], edx
        mov     edx, ecx
        imul    ecx, dword ptr [esp + 0x2c]
        imul    edx, dword ptr [esp + 0x30]
        and     eax, 0xf8
        mov     dword ptr [esp + 0x34], ebp
        imul    eax, esi
        mov     ebp, dword ptr [esp + 0x5c]
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x34]
        imul    ecx, dword ptr [esp + 0x4c]
        add     ebp, edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x1c], ebp
        imul    ebp, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x18], eax
        sub     edx, dword ptr [esp + 0x4c]
        mov     eax, edx
        mov     dword ptr [esp + 0x5c], edx
        imul    eax, edi
        imul    edx, ebx
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        imul    ecx, dword ptr [esp + 0x10]
        add     edx, ebp
        mov     ebp, dword ptr [esp + 0x18]
        imul    ebp, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x5c], ecx
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x5c], ecx
        mov     ecx, dword ptr [esp + 0x34]
        sub     ecx, edi
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebp, eax
        sar     ebp, cl
        mov     dword ptr [esp + 0x1c], ebp
        mov     ebp, edx
        sar     ebp, cl
        mov     dword ptr [esp + 0x34], ebp
        mov     ebp, dword ptr [esp + 0x5c]
        sar     ebp, cl
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x30], ebp
        sub     eax, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x5c]
        sub     edx, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        sub     ebp, ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [esp + 0x5c], ebp
        mov     ebp, ecx
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x1c]
        shr     ecx, 0x8
        mov     dword ptr [esp + 0x1c], ecx
        shr     ebp, 0x8
        mov     ecx, ebp
        and     ecx, 0xff00
        imul    ecx, dword ptr [esp + 0x30]
        and     ecx, 0xff00000
        mov     dword ptr [esp + 0x18], ebp
        mov     ebp, dword ptr [esp + 0x1c]
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x18]
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x34]
        and     ecx, 0xff00
        mov     dword ptr [esp + 0x1c], ebp
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [ecx], ebp
        mov     ecx, dword ptr [esp + 0x58]
        sub     ecx, dword ptr [esp + 0x54]
        cmp     ecx, 0x1
        jle     L_006d94d4
        mov     ebp, dword ptr [esp + 0x50]
        add     ebp, 0x4
        dec     ecx
        mov     dword ptr [esp + 0x58], ebp
        mov     dword ptr [esp + 0x54], ecx
L_006d931d:
        dec     dword ptr [esp + 0x4c]
        jns     L_006d9434
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x3c]
        sub     ecx, dword ptr [esp + 0x38]
        lea     eax, [edx + -0x1]
        mov     dword ptr [esp + 0x50], eax
        mov     dword ptr [esp + 0x4c], eax
        mov     eax, dword ptr [ecx]
        mov     ebp, eax
        mov     edx, eax
        sar     eax, 0x7
        and     eax, 0xf8
        mov     dword ptr [esp + 0x3c], ecx
        sar     edx, 0x2
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [eax + ecx*0x1]
        and     edx, 0xf8
        mov     eax, ecx
        mov     dword ptr [esp + 0x5c], edx
        mov     edx, ecx
        sar     ecx, 0x7
        and     ecx, 0xf8
        mov     dword ptr [esp + 0x28], ecx
        and     edx, 0x1f
        sar     eax, 0x2
        and     ebp, 0x1f
        shl     edx, 0x3
        mov     ecx, edi
        imul    edx, esi
        mov     edi, dword ptr [esp + 0x10]
        and     eax, 0xf8
        shl     ebp, 0x3
        imul    eax, esi
        mov     dword ptr [esp + 0x1c], ebx
        mov     ebx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x18], edi
        mov     edi, ebx
        imul    ebx, dword ptr [esp + 0x5c]
        imul    edi, ebp
        add     edi, edx
        mov     edx, dword ptr [esp + 0x40]
        imul    edx, dword ptr [esp + 0x24]
        add     ebx, eax
        mov     eax, dword ptr [esp + 0x28]
        imul    eax, esi
        mov     ebp, ecx
        add     edx, eax
        imul    ebp, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x50]
        sub     ecx, edi
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        imul    ecx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [esp + 0x20]
        sub     edx, eax
        mov     dword ptr [esp + 0x5c], edx
        mov     eax, edx
        imul    edx, ebx
        add     edx, ecx
        imul    eax, edi
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x5c]
        imul    ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [esp + 0x20]
        add     eax, ebp
        mov     ebp, dword ptr [esp + 0x18]
        dec     ecx
        imul    ebp, ecx
        mov     ecx, dword ptr [esp + 0x50]
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x5c], ecx
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x2c], ecx
L_006d9434:
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebp, eax
        sar     ebp, cl
        mov     dword ptr [esp + 0x1c], ebp
        mov     ebp, edx
        sar     ebp, cl
        mov     dword ptr [esp + 0x34], ebp
        mov     ebp, dword ptr [esp + 0x5c]
        sar     ebp, cl
        sub     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x30], ebp
        sub     eax, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x5c]
        sub     ebp, ecx
        mov     ecx, dword ptr [esp + 0x58]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [esp + 0x5c], ebp
        mov     ebp, ecx
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x1c]
        shr     ecx, 0x8
        mov     dword ptr [esp + 0x50], ecx
        shr     ebp, 0x8
        mov     ecx, ebp
        and     ecx, 0xff00
        imul    ecx, dword ptr [esp + 0x30]
        and     ecx, 0xff00000
        mov     dword ptr [esp + 0x18], ebp
        mov     ebp, dword ptr [esp + 0x50]
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x18]
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x34]
        and     ecx, 0xff00
        mov     dword ptr [esp + 0x50], ebp
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x58]
        mov     dword ptr [ecx], ebp
        add     ecx, 0x4
        mov     dword ptr [esp + 0x58], ecx
        dec     dword ptr [esp + 0x54]
        jnz     L_006d931d
L_006d94d4:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret
    }
}
