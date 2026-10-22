/*
 * FUN_006dd150 (1071 B) — Pure integer/bitfield arithmetic routine with
 * a small lookup table scan (DAT_0083f604/0083f608, count DAT_0084000c).
 * No vtable reconstruction, no .txt2. In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b68c4;
extern int g_84000c;

__declspec(naked) void __cdecl FUN_006dd150(void)
{
    __asm {
        sub     esp, 0x44
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [eax + 0x24]
        push    ebx
        mov     ebx, dword ptr [eax + 0x28]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x64]
        mov     ecx, esi
        sar     ebx, cl
        push    edi
        mov     edi, dword ptr [eax + 0x4]
        mov     ebp, dword ptr [edi + 0x18]
        mov     eax, dword ptr [eax + 0x2c]
        sar     eax, cl
        lea     ecx, [esi + esi*0x1]
        mov     dword ptr [esp + 0x58], ebx
        mov     ebx, dword ptr [edi + 0x14]
        sub     ebx, ecx
        mov     ecx, dword ptr [edi + 0x14]
        sub     ecx, esi
        add     ebx, ebp
        mov     edi, dword ptr [edi + 0x28]
        mov     dword ptr [esp + 0x2c], ebx
        mov     ebx, 0x1
        shl     ebx, cl
        mov     ecx, ebp
        sub     ecx, esi
        mov     ebp, dword ptr [edi + 0x10]
        mov     esi, 0x1
        shl     esi, cl
        mov     ecx, dword ptr [edx]
        mov     dword ptr [esp + 0x20], ebx
        dec     ebx
        mov     dword ptr [esp + 0x68], esi
        mov     esi, ecx
        and     esi, 0x1f
        shl     esi, 0x3
        mov     dword ptr [esp + 0x40], esi
        mov     esi, ecx
        not     ebx
        sar     ecx, 0x7
        sar     esi, 0x2
        and     ecx, 0xf8
        mov     dword ptr [esp + 0x50], ebx
        mov     ebx, dword ptr [edi + 0x20]
        and     esi, 0xf8
        mov     dword ptr [esp + 0x3c], ebx
        add     ebp, 0x2
        imul    ebp, ebx
        add     ebx, edx
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x38], esi
        mov     esi, dword ptr [ebx]
        mov     ecx, esi
        and     ecx, 0x1f
        shl     ecx, 0x3
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, esi
        sar     ecx, 0x2
        and     ecx, 0xf8
        sar     esi, 0x7
        and     esi, 0xf8
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        add     ecx, ebp
        mov     dword ptr [esp + 0x14], esi
        mov     esi, dword ptr [edx + ebp*0x1]
        mov     dword ptr [esp + 0x4c], ebx
        add     edx, ecx
        mov     ecx, dword ptr [edx]
        mov     edi, esi
        mov     ebx, esi
        and     edi, 0x1f
        sar     ebx, 0x2
        sar     esi, 0x7
        mov     ebp, ecx
        shl     edi, 0x3
        and     ebx, 0xf8
        and     esi, 0xf8
        mov     dword ptr [esp + 0x48], edx
        and     ebp, 0x1f
        mov     edx, ecx
        imul    edi, eax
        imul    ebx, eax
        sar     ecx, 0x7
        imul    esi, eax
        and     ecx, 0xf8
        mov     dword ptr [esp + 0x44], ecx
        sar     edx, 0x2
        and     edx, 0xf8
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [esp + 0x68]
        sub     edx, eax
        mov     ecx, edx
        imul    ecx, dword ptr [esp + 0x40]
        add     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, edx
        imul    ecx, dword ptr [esp + 0x38]
        add     ecx, ebx
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, edx
        imul    ecx, dword ptr [esp + 0x34]
        add     ecx, esi
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x30]
        imul    ecx, eax
        mov     edi, edx
        imul    edi, dword ptr [esp + 0x1c]
        add     edi, ecx
        mov     ecx, dword ptr [esp + 0x44]
        imul    ecx, eax
        shl     ebp, 0x3
        imul    ebp, eax
        mov     esi, edx
        imul    esi, dword ptr [esp + 0x28]
        mov     ebx, edx
        imul    ebx, dword ptr [esp + 0x14]
        add     ebx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        add     esi, ebp
        mov     ebp, dword ptr [esp + 0x58]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x68], ecx
        imul    ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, esi
        imul    ecx, ebp
        mov     ebp, dword ptr [esp + 0x44]
        add     ebp, ecx
        mov     ecx, dword ptr [esp + 0x68]
        imul    ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, edi
        imul    ecx, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x14], ebp
        mov     ebp, dword ptr [esp + 0x44]
        add     ebp, ecx
        mov     ecx, dword ptr [esp + 0x68]
        imul    ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x1c], ebp
        mov     ebp, ebx
        imul    ebp, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x68], ecx
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, esi
        sub     ecx, ebp
        mov     ebp, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, edi
        sub     ecx, ebp
        mov     ebp, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, ebx
        sub     ecx, ebp
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [g_7b68c4]
        lea     ecx, [ecx + ecx*0x2]
        mov     dword ptr [esp + 0x30], 0x0
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x68], ecx
L_006dd37b:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ebp, dword ptr [esp + 0x14]
        sar     ebp, cl
        mov     dword ptr [esp + 0x48], ebp
        mov     ebp, dword ptr [esp + 0x1c]
        sar     ebp, cl
        mov     dword ptr [esp + 0x4c], ebp
        mov     ebp, dword ptr [esp + 0x28]
        sar     ebp, cl
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x5c], ebp
        mov     ebp, dword ptr [esp + 0x14]
        add     ebp, ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x14], ebp
        mov     ebp, dword ptr [esp + 0x1c]
        add     ebp, ecx
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x1c], ebp
        mov     ebp, dword ptr [esp + 0x28]
        add     ebp, ecx
        mov     ecx, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x28], ebp
        mov     ebp, dword ptr [esp + 0x4c]
        add     ecx, ebp
        add     ecx, dword ptr [esp + 0x48]
        cmp     ecx, dword ptr [esp + 0x44]
        jge     L_006dd431
        mov     ecx, dword ptr [esp + 0x68]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [g_84000c]
        test    ecx, ecx
        mov     dword ptr [esp + 0x5c], 0x0
        jle     L_006dd426
        mov     ecx, 0x83f608
        jmp     L_006dd402
L_006dd3fe:
        mov     ecx, dword ptr [esp + 0x4c]
L_006dd402:
        mov     ebp, dword ptr [esp + 0x24]
        cmp     dword ptr [ecx], ebp
        jz      L_006dd55a
        mov     ebp, dword ptr [esp + 0x5c]
        add     ecx, 0xc
        inc     ebp
        mov     dword ptr [esp + 0x4c], ecx
        cmp     ebp, dword ptr [g_84000c]
        mov     dword ptr [esp + 0x5c], ebp
        jl      L_006dd3fe
L_006dd426:
        mov     ecx, dword ptr [esp + 0x24]
L_006dd42a:
        mov     ebp, dword ptr [esp + 0x68]
        mov     dword ptr [ebp], ecx
L_006dd431:
        mov     ebp, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x68]
        inc     ebp
        add     ecx, 0x4
        mov     dword ptr [esp + 0x30], ebp
        mov     ebp, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x68], ecx
        mov     ecx, dword ptr [esp + 0x64]
        sub     ecx, ebp
        cmp     dword ptr [esp + 0x30], ecx
        jge     L_006dd577
        mov     ecx, dword ptr [esp + 0x58]
        mov     ebp, dword ptr [esp + 0x50]
        inc     ecx
        __emit 0x85 /* __emit: MSVC6 encodes test ecx,ebp as 85 CD (operand swap); ref needs 85 E9 */
        __emit 0xE9
        mov     dword ptr [esp + 0x58], ecx
        jz      L_006dd37b
        mov     ecx, dword ptr [esp + 0x3c]
        add     dword ptr [esp + 0x34], ecx
        mov     ebp, dword ptr [esp + 0x38]
        add     ebp, ecx
        mov     ecx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [esp + 0x38], ebp
        mov     ebp, ecx
        and     ebp, 0x1f
        shl     ebp, 0x3
        mov     dword ptr [esp + 0x28], ebp
        mov     ebp, ecx
        sar     ecx, 0x7
        and     ecx, 0xf8
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [ecx]
        sar     ebp, 0x2
        and     ebp, 0xf8
        mov     dword ptr [esp + 0x1c], ebp
        mov     ebp, ecx
        and     ebp, 0x1f
        shl     ebp, 0x3
        mov     dword ptr [esp + 0x5c], ebp
        mov     dword ptr [esp + 0x18], edi
        mov     ebp, ecx
        mov     dword ptr [esp + 0x10], esi
        mov     esi, dword ptr [esp + 0x5c]
        sar     ecx, 0x7
        imul    esi, eax
        mov     edi, edx
        imul    edi, dword ptr [esp + 0x28]
        and     ecx, 0xf8
        imul    ecx, eax
        sar     ebp, 0x2
        add     esi, edi
        and     ebp, 0xf8
        mov     dword ptr [esp + 0x24], ebx
        imul    ebp, eax
        mov     edi, edx
        imul    edi, dword ptr [esp + 0x1c]
        mov     ebx, edx
        imul    ebx, dword ptr [esp + 0x14]
        add     ebx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x10]
        imul    ecx, ebp
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, esi
        sub     ecx, ebp
        mov     ebp, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x20]
        imul    ecx, ebp
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, edi
        sub     ecx, ebp
        mov     ebp, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x20]
        imul    ecx, ebp
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, ebx
        sub     ecx, ebp
        mov     dword ptr [esp + 0x58], 0x0
        mov     dword ptr [esp + 0x40], ecx
        jmp     L_006dd37b
L_006dd55a:
        mov     ecx, dword ptr [esp + 0x5c]
        lea     ecx, [ecx + ecx*0x2]
        mov     ecx, dword ptr [ecx*0x4 + 0x83f604]
        lea     ecx, [ecx + ecx*0x2]
        mov     ecx, dword ptr [ecx*0x4 + 0x83f608]
        jmp     L_006dd42a
L_006dd577:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret
    }
}
