/*
 * FUN_006dd580 (1032 B) — Pure integer/bitfield arithmetic routine with
 * a small lookup table scan (DAT_0083f604/0083f608, count DAT_0084000c).
 * No vtable reconstruction, no .txt2. In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b68c4;
extern int g_84000c;

__declspec(naked) void __cdecl FUN_006dd580(void)
{
    __asm {
        sub     esp, 0x3c
        mov     edx, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x40]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x24]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        mov     ebx, dword ptr [esi + 0x18]
        push    edi
        mov     edi, dword ptr [eax + 0x28]
        mov     eax, dword ptr [eax + 0x2c]
        mov     ecx, edx
        sar     edi, cl
        sar     eax, cl
        lea     ecx, [edx + edx*0x1]
        mov     dword ptr [esp + 0x30], ebp
        mov     dword ptr [esp + 0x50], edi
        mov     edi, dword ptr [esi + 0x14]
        sub     edi, ecx
        mov     ecx, dword ptr [esi + 0x14]
        mov     esi, dword ptr [esi + 0x28]
        sub     ecx, edx
        add     edi, ebx
        mov     dword ptr [esp + 0x24], edi
        mov     edi, 0x1
        shl     edi, cl
        mov     ecx, ebx
        sub     ecx, edx
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x1c], edi
        mov     edi, dword ptr [esi + 0x10]
        add     edi, 0x2
        imul    edi, ecx
        mov     ecx, dword ptr [ebp]
        mov     ebx, ecx
        mov     esi, ecx
        sar     ecx, 0x7
        and     ecx, 0xf8
        sar     esi, 0x2
        and     esi, 0xf8
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [ecx + ebp*0x1]
        mov     dword ptr [esp + 0x20], esi
        mov     esi, ecx
        and     esi, 0x1f
        shl     esi, 0x3
        mov     dword ptr [esp + 0x38], esi
        mov     esi, ecx
        sar     ecx, 0x7
        and     ecx, 0xf8
        sar     esi, 0x2
        and     esi, 0xf8
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [edi + ebp*0x1]
        mov     ebp, ecx
        mov     dword ptr [esp + 0x28], esi
        mov     esi, ecx
        sar     ecx, 0x7
        and     ecx, 0xf8
        mov     dword ptr [esp + 0x60], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        add     ecx, edi
        mov     dword ptr [esp + 0x48], edi
        mov     edi, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [ecx + edi*0x1]
        and     esi, 0x1f
        sub     edx, eax
        and     ebx, 0x1f
        shl     ebx, 0x3
        shl     esi, 0x3
        mov     edi, edx
        imul    esi, eax
        imul    edi, ebx
        sar     ebp, 0x2
        and     ebp, 0xf8
        mov     dword ptr [esp + 0x3c], edx
        add     edi, esi
        imul    ebp, eax
        mov     ebx, edx
        imul    ebx, dword ptr [esp + 0x20]
        add     ebx, ebp
        mov     ebp, dword ptr [esp + 0x60]
        imul    ebp, eax
        mov     esi, edx
        imul    esi, dword ptr [esp + 0x34]
        add     esi, ebp
        mov     dword ptr [esp + 0x60], esi
        mov     esi, ecx
        and     esi, 0x1f
        shl     esi, 0x3
        imul    esi, eax
        mov     dword ptr [esp + 0x34], esi
        mov     ebp, dword ptr [esp + 0x34]
        mov     esi, edx
        imul    esi, dword ptr [esp + 0x38]
        add     ebp, esi
        mov     esi, ecx
        sar     esi, 0x2
        and     esi, 0xf8
        imul    esi, eax
        sar     ecx, 0x7
        and     ecx, 0xf8
        imul    ecx, eax
        mov     dword ptr [esp + 0x38], esi
        mov     esi, edx
        imul    edx, dword ptr [esp + 0x10]
        imul    esi, dword ptr [esp + 0x28]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x14], ebp
        mov     ebp, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x14]
        imul    ecx, dword ptr [esp + 0x50]
        add     ebp, esi
        mov     esi, dword ptr [esp + 0x1c]
        sub     esi, edx
        mov     dword ptr [esp + 0x18], ebp
        imul    ebp, dword ptr [esp + 0x50]
        mov     edx, esi
        mov     dword ptr [esp + 0x38], esi
        imul    edx, edi
        imul    esi, ebx
        add     edx, ecx
        mov     ecx, dword ptr [esp + 0x38]
        imul    ecx, dword ptr [esp + 0x60]
        add     esi, ebp
        mov     ebp, dword ptr [esp + 0x10]
        imul    ebp, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x38], ecx
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x14]
        sub     ecx, edi
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x10]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [g_7b68c4]
        lea     ecx, [ecx + ecx*0x2]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x28], 0x0
        mov     dword ptr [esp + 0x54], ecx
L_006dd77f:
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebp, edx
        sar     ebp, cl
        mov     dword ptr [esp + 0x40], ebp
        mov     ebp, esi
        sar     ebp, cl
        mov     dword ptr [esp + 0x18], ebp
        mov     ebp, dword ptr [esp + 0x20]
        sar     ebp, cl
        sub     esi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x38], ebp
        sub     edx, dword ptr [esp + 0x34]
        mov     ebp, dword ptr [esp + 0x20]
        sub     ebp, ecx
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x20], ebp
        mov     ebp, dword ptr [esp + 0x18]
        add     ecx, ebp
        add     ecx, dword ptr [esp + 0x40]
        cmp     ecx, dword ptr [esp + 0x44]
        jge     L_006dd81d
        mov     ecx, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [g_84000c]
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], 0x0
        jle     L_006dd812
        mov     ecx, 0x83f608
        jmp     L_006dd7ee
L_006dd7ea:
        mov     ecx, dword ptr [esp + 0x40]
L_006dd7ee:
        mov     ebp, dword ptr [esp + 0x38]
        cmp     dword ptr [ecx], ebp
        jz      L_006dd963
        mov     ebp, dword ptr [esp + 0x18]
        add     ecx, 0xc
        inc     ebp
        mov     dword ptr [esp + 0x40], ecx
        cmp     ebp, dword ptr [g_84000c]
        mov     dword ptr [esp + 0x18], ebp
        jl      L_006dd7ea
L_006dd812:
        mov     ecx, dword ptr [esp + 0x38]
L_006dd816:
        mov     ebp, dword ptr [esp + 0x54]
        mov     dword ptr [ebp], ecx
L_006dd81d:
        mov     ebp, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x54]
        inc     ebp
        add     ecx, 0x4
        mov     dword ptr [esp + 0x28], ebp
        mov     ebp, dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x54], ecx
        mov     ecx, dword ptr [esp + 0x5c]
        sub     ecx, ebp
        cmp     dword ptr [esp + 0x28], ecx
        jge     L_006dd980
        dec     dword ptr [esp + 0x50]
        jns     L_006dd77f
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x2c]
        lea     ecx, [edx + -0x1]
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x50], ecx
        sub     edx, ebp
        mov     ecx, dword ptr [edx]
        mov     ebp, ecx
        mov     esi, ecx
        sar     ecx, 0x7
        and     ecx, 0xf8
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x48]
        sar     esi, 0x2
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [ecx + edx*0x1]
        and     esi, 0xf8
        mov     ecx, edx
        sar     ecx, 0x2
        and     ecx, 0xf8
        imul    ecx, eax
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x14], edi
        mov     edi, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x18], ebx
        mov     ebx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x10], edi
        mov     edi, ebx
        imul    ebx, dword ptr [esp + 0x20]
        add     ebx, ecx
        mov     ecx, dword ptr [esp + 0x3c]
        imul    ecx, dword ptr [esp + 0x34]
        mov     esi, edx
        sar     edx, 0x7
        and     ebp, 0x1f
        and     esi, 0x1f
        shl     ebp, 0x3
        and     edx, 0xf8
        imul    edi, ebp
        shl     esi, 0x3
        imul    edx, eax
        add     ecx, edx
        imul    esi, eax
        mov     dword ptr [esp + 0x60], ecx
        mov     ecx, dword ptr [esp + 0x38]
        add     edi, esi
        mov     esi, dword ptr [esp + 0x1c]
        sub     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebp, ecx
        sub     ecx, edi
        imul    ebp, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x18]
        imul    ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x40], esi
        mov     edx, esi
        imul    esi, ebx
        add     esi, ecx
        imul    edx, edi
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, ebx
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x40]
        imul    ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        add     edx, ebp
        mov     ebp, dword ptr [esp + 0x10]
        dec     ecx
        imul    ebp, ecx
        mov     ecx, dword ptr [esp + 0x40]
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x10]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_006dd77f
L_006dd963:
        mov     ecx, dword ptr [esp + 0x18]
        lea     ecx, [ecx + ecx*0x2]
        mov     ecx, dword ptr [ecx*0x4 + 0x83f604]
        lea     ecx, [ecx + ecx*0x2]
        mov     ecx, dword ptr [ecx*0x4 + 0x83f608]
        jmp     L_006dd816
L_006dd980:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret
    }
}
