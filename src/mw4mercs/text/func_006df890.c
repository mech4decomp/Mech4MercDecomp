/*
 * FUN_006df890 (663 B) — Image scaling / interpolation inner loop (__cdecl, RET 0).
 *
 * Pure stack-based computation; no absolute memory refs, no calls.
 * Structurally identical to FUN_006df5f0 (sibling variant).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006df890(void)
{
    __asm {
        sub     esp, 0x1c
        mov     edx, dword ptr [esp + 0x28]
        push    ebx
        mov     ebx, dword ptr [esp + 0x30]
        push    ebp
        mov     ebp, dword ptr [esp + 0x28]
        push    esi
        mov     esi, dword ptr [esp + 0x44]
        mov     eax, esi
        and     eax, 0xffffff
        mov     dword ptr [esp + 0x24], eax
        sub     edx, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [edi + 0x14]
        mov     dword ptr [esp + 0x10], ecx
        mov     eax, edx
        sar     eax, cl
        sub     ebx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [edi + 0x18]
        mov     ebp, ebx
        sar     ebp, cl
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esp + 0x10]
        sar     esi, 0x18
        mov     dword ptr [esp + 0x38], ebp
        mov     ebp, 0x1
        shl     ebp, cl
        lea     ecx, [ebp + -0x1]
        and     ecx, edx
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [edi + 0x30]
        mov     dword ptr [esp + 0x3c], ebp
        lea     ebp, [edx + -0x1]
        and     ebp, ebx
        test    cl, 0x8
        jz      L_91c
        mov     ebx, dword ptr [edi + 0x28]
        mov     ebx, dword ptr [ebx + 0x14]
        sub     ebx, dword ptr [esp + 0x38]
        sub     edx, ebp
        sub     ebx, 0x2
        dec     edx
        mov     ebp, edx
        jmp     L_920
L_91c:
        mov     ebx, dword ptr [esp + 0x38]
L_920:
        test    cl, 0x4
        jz      L_93f
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x3c]
        sub     edx, eax
        sub     edx, 0x2
        mov     eax, edx
        sub     ecx, dword ptr [esp + 0x30]
        dec     ecx
        mov     dword ptr [esp + 0x30], ecx
L_93f:
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
        lea     eax, [ebx + eax*0x1 + 0x1]
        mov     ebx, dword ptr [esp + 0x30]
        mov     ecx, esi
        sar     ebx, cl
        sar     ebp, cl
        lea     ecx, [esi + esi*0x1]
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x30], ebx
        mov     ebx, dword ptr [esp + 0x48]
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x10]
        add     ebx, ecx
        sub     ecx, esi
        mov     dword ptr [esp + 0x24], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, dword ptr [esp + 0x48]
        sub     ecx, esi
        mov     esi, 0x1
        shl     esi, cl
        mov     cl, byte ptr [eax]
        and     cl, dl
        mov     dword ptr [esp + 0x1c], ebx
        dec     ebx
        neg     cl
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x48], 0x0
        sbb     ecx, ecx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x10], ecx
        mov     cl, byte ptr [eax + edi*0x1]
        and     cl, dl
        neg     cl
        sbb     ecx, ecx
        and     ecx, 0xff
        sar     edx, 0x1
        jnz     L_9e3
        mov     dword ptr [esp + 0x48], 0x1
        mov     edx, 0x80
L_9e3:
        imul    ecx, ebp
        sub     esi, ebp
        mov     dword ptr [esp + 0x18], esi
        imul    esi, dword ptr [esp + 0x10]
        add     esi, ecx
        mov     ecx, dword ptr [esp + 0x48]
        add     eax, ecx
        mov     bl, byte ptr [eax + edi*0x1]
        mov     al, byte ptr [eax]
        and     bl, dl
        neg     bl
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x14], 0x0
        sbb     ebx, ebx
        and     al, dl
        and     ebx, 0xff
        imul    ebx, ebp
        neg     al
        sbb     eax, eax
        and     eax, 0xff
        imul    eax, dword ptr [esp + 0x18]
        add     ebx, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ecx
        mov     dword ptr [esp + 0x38], ebx
        imul    ebx, ecx
        imul    eax, esi
        mov     ecx, dword ptr [esp + 0x38]
        sub     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x44]
        add     eax, ebx
        sub     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x38], ecx
L_a5b:
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebx, eax
        sar     ebx, cl
        sub     eax, dword ptr [esp + 0x10]
        cmp     ebx, 0x80
        jle     L_a79
        mov     ecx, dword ptr [esp + 0x28]
        mov     ebx, dword ptr [esp + 0x38]
        mov     dword ptr [ebx], ecx
L_a79:
        mov     ebx, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x14]
        add     ebx, 0x4
        inc     ecx
        mov     dword ptr [esp + 0x38], ebx
        cmp     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x14], ecx
        jge     L_b1f
        dec     dword ptr [esp + 0x30]
        jns     L_a5b
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        mov     ebx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x30], ebx
        jz      L_ab1
        dec     dword ptr [esp + 0x3c]
L_ab1:
        sar     edx, 0x1
        mov     ecx, 0x0
        mov     dword ptr [esp + 0x48], ecx
        jnz     L_acc
        mov     ecx, 0x1
        mov     dword ptr [esp + 0x48], ecx
        mov     edx, 0x80
L_acc:
        mov     eax, dword ptr [esp + 0x3c]
        sub     eax, ecx
        mov     cl, byte ptr [eax]
        mov     al, byte ptr [eax + edi*0x1]
        and     cl, dl
        neg     cl
        sbb     ecx, ecx
        and     al, dl
        and     ecx, 0xff
        neg     al
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x18]
        sbb     eax, eax
        imul    esi, dword ptr [esp + 0x10]
        and     eax, 0xff
        imul    eax, ebp
        add     esi, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, esi
        imul    ebx, dword ptr [esp + 0x20]
        add     eax, ebx
        sub     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_a5b
L_b1f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
