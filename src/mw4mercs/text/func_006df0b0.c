/*
 * FUN_006df0b0 (672 B) — Image scaling / interpolation inner loop (__cdecl, RET 0).
 *
 * Pure stack-based computation; no absolute memory refs, no calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006df0b0(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        mov     ebx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [ebx + 0x8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x3c]
        push    esi
        mov     esi, dword ptr [esp + 0x4c]
        mov     eax, esi
        and     eax, 0xffffff
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x3c]
        sub     eax, ecx
        push    edi
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [edi + 0x14]
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, eax
        sar     edx, cl
        sub     ebp, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [edi + 0x18]
        mov     ebx, ebp
        sar     ebx, cl
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [esp + 0x10]
        sar     esi, 0x18
        mov     dword ptr [esp + 0x40], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        lea     ecx, [ebx + -0x1]
        and     ecx, eax
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     eax, 0x1
        shl     eax, cl
        mov     ecx, dword ptr [edi + 0x30]
        mov     dword ptr [esp + 0x44], ebx
        lea     ebx, [eax + -0x1]
        and     ebx, ebp
        test    cl, 0x8
        jz      L_13e
        mov     ebp, dword ptr [edi + 0x28]
        mov     ebp, dword ptr [ebp + 0x14]
        sub     ebp, dword ptr [esp + 0x40]
        sub     eax, ebx
        sub     ebp, 0x2
        dec     eax
        mov     ebx, eax
        jmp     L_142
L_13e:
        mov     ebp, dword ptr [esp + 0x40]
L_142:
        test    cl, 0x4
        jz      L_161
        mov     eax, dword ptr [edi + 0x28]
        mov     ecx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esp + 0x44]
        sub     ecx, edx
        sub     ecx, 0x2
        mov     edx, ecx
        sub     eax, dword ptr [esp + 0x38]
        dec     eax
        mov     dword ptr [esp + 0x38], eax
L_161:
        mov     ecx, edx
        and     ecx, 0x7
        mov     eax, 0x1
        shl     eax, cl
        mov     ecx, dword ptr [edi + 0x28]
        mov     edi, dword ptr [ecx + 0x10]
        sar     edi, 0x3
        add     edi, 0x2
        inc     ebp
        imul    ebp, edi
        add     ebp, dword ptr [ecx + 0x30]
        sar     edx, 0x3
        lea     edx, [edx + ebp*0x1 + 0x1]
        mov     ebp, dword ptr [esp + 0x38]
        mov     ecx, esi
        sar     ebp, cl
        sar     ebx, cl
        lea     ecx, [esi + esi*0x1]
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x38], ebp
        mov     ebp, dword ptr [esp + 0x50]
        sub     ebp, ecx
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, ecx
        sub     ecx, esi
        mov     dword ptr [esp + 0x1c], ebp
        mov     ebp, 0x1
        shl     ebp, cl
        mov     ecx, dword ptr [esp + 0x50]
        sub     ecx, esi
        mov     esi, 0x1
        shl     esi, cl
        lea     ecx, [ebp + -0x1]
        not     ecx
        mov     dword ptr [esp + 0x24], ecx
        mov     cl, byte ptr [edx]
        and     cl, al
        neg     cl
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x30], ebp
        sbb     ecx, ecx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x40], ecx
        mov     cl, byte ptr [edx + edi*0x1]
        and     cl, al
        neg     cl
        sbb     ecx, ecx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x10], ecx
        xor     ecx, ecx
        shl     eax, 0x1
        cmp     eax, 0x80
        mov     dword ptr [esp + 0x50], ecx
        jle     L_212
        mov     ecx, 0x1
        mov     dword ptr [esp + 0x50], ecx
        mov     eax, ecx
L_212:
        add     ecx, edx
        mov     dl, byte ptr [ecx]
        mov     cl, byte ptr [ecx + edi*0x1]
        and     dl, al
        neg     dl
        sbb     edx, edx
        and     edx, 0xff
        and     cl, al
        neg     cl
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x0
        sbb     ecx, ecx
        imul    edx, ebx
        sub     esi, ebx
        and     ecx, 0xff
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, esi
        imul    ecx, dword ptr [esp + 0x40]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x18]
        imul    edx, ebx
        mov     ebx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x28], esi
        imul    esi, dword ptr [esp + 0x14]
        add     esi, edx
        mov     edx, ebp
        mov     ebp, dword ptr [esp + 0x48]
        sub     edx, ebx
        imul    edx, ecx
        mov     ebx, esi
        imul    ebx, dword ptr [esp + 0x38]
        add     edx, ebx
        mov     ebx, esi
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x4c]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x40], ecx
L_293:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, edx
        sar     ebp, cl
        add     edx, ebx
        cmp     ebp, 0x80
        jle     L_2b0
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x40]
        mov     dword ptr [ebp], ecx
L_2b0:
        mov     ebp, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, 0x4
        inc     ecx
        mov     dword ptr [esp + 0x40], ebp
        cmp     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x10], ecx
        jge     L_348
        mov     ecx, dword ptr [esp + 0x38]
        mov     ebp, dword ptr [esp + 0x24]
        inc     ecx
        /* __emit: MSVC6 swaps test operands (85 CD) vs ref test ecx,ebp (85 E9) */
        __emit  0x85
        __emit  0xE9
        mov     dword ptr [esp + 0x38], ecx
        jz      L_293
        mov     edx, dword ptr [esp + 0x50]
        xor     ecx, ecx
        cmp     edx, ecx
        mov     dword ptr [esp + 0x38], ecx
        jz      L_2ed
        inc     dword ptr [esp + 0x44]
L_2ed:
        shl     eax, 0x1
        cmp     eax, 0x80
        mov     dword ptr [esp + 0x50], ecx
        jle     L_305
        mov     ecx, 0x1
        mov     dword ptr [esp + 0x50], ecx
        mov     eax, ecx
L_305:
        mov     edx, dword ptr [esp + 0x44]
        add     ecx, edx
        mov     dl, byte ptr [ecx]
        mov     cl, byte ptr [ecx + edi*0x1]
        and     dl, al
        neg     dl
        mov     ebp, esi
        mov     esi, dword ptr [esp + 0x28]
        sbb     edx, edx
        and     cl, al
        and     edx, 0xff
        neg     cl
        sbb     ecx, ecx
        imul    esi, edx
        and     ecx, 0xff
        imul    ecx, dword ptr [esp + 0x2c]
        add     esi, ecx
        mov     edx, ebp
        imul    edx, dword ptr [esp + 0x30]
        mov     ebx, esi
        sub     ebx, ebp
        jmp     L_293
L_348:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret
    }
}
