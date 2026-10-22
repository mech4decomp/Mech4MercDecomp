/*
 * FUN_006d3fc0 (850 B) — __thiscall geometry/offset computation (RET 0xC).
 *
 * Pure arithmetic routine: computes tile/offset fields on the object
 * (ESI+0x1c..0x38) from input coordinates and dimension tables, using
 * variable shifts (CL) and multiply-accumulate chains. No calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006d3fc0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     edx, dword ptr [esi + 4]
        mov     eax, dword ptr [edx + 0x30]
        mov     ecx, eax
        and     ecx, 0x3f
        and     eax, 0x3fc0
        xor     ebp, ebp
        cmp     eax, 0x1c0
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    edi
        mov     dword ptr [esi + 0x20], ebp
        mov     dword ptr [esp + 0x24], eax
        jz      L_40df
        cmp     eax, 0x240
        jz      L_40df
        mov     eax, dword ptr [edx + 0x24]
        mov     ebx, dword ptr [esi + 0x10]
        mov     edi, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esi + 8]
        sub     edi, ebx
        mov     ebx, dword ptr [eax + 0x18]
        sub     edi, edx
        mov     edx, dword ptr [eax + 0x10]
        and     edi, ebx
        mov     ebx, dword ptr [esp + 0x30]
        sar     edx, cl
        sar     edi, cl
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x20], edx
        sub     edx, edi
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esi + 0x20], edx
        sub     ebx, dword ptr [esi + 0x14]
        sub     ebx, dword ptr [esi + 0xc]
        and     ebx, dword ptr [eax + 0x1c]
        mov     dl, byte ptr [esp + 0x10]
        sar     ebx, cl
        test    dl, 2
        jz      L_4050
        mov     edx, dword ptr [eax + 0x14]
        sar     edx, cl
        sub     edx, ebx
        dec     edx
        mov     ebx, edx
    L_4050:
        test    byte ptr [esp + 0x10], 1
        jz      L_405e
        mov     edx, dword ptr [esp + 0x18]
        lea     edi, [edx - 1]
    L_405e:
        cmp     ecx, 1
        jnz     L_4078
        mov     ebp, dword ptr [eax + 0x14]
        mov     edx, dword ptr [eax + 0x10]
        add     ebp, 2
        add     edx, 2
        imul    ebp, edx
        imul    ebp, dword ptr [eax + 0x20]
        jmp     L_40be
    L_4078:
        cmp     ecx, 2
        jnz     L_40be
        mov     eax, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x18], eax
        cdq
        sub     eax, edx
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x1c], eax
        cdq
        sub     eax, edx
        mov     edx, dword ptr [esp + 0x18]
        sar     eax, 1
        sar     ebp, 1
        add     eax, ecx
        add     ebp, 2
        imul    ebp, eax
        mov     eax, dword ptr [esp + 0x1c]
        add     edx, ecx
        add     eax, ecx
        imul    edx, eax
        add     ebp, edx
        mov     edx, dword ptr [esp + 0x14]
        imul    ebp, dword ptr [edx + 0x20]
        mov     eax, edx
    L_40be:
        mov     edx, dword ptr [esp + 0x20]
        add     edx, 2
        inc     ebx
        imul    edx, ebx
        lea     edx, [edx + edi + 1]
        imul    edx, dword ptr [eax + 0x20]
        mov     edi, dword ptr [eax + 0x30]
        mov     eax, dword ptr [esp + 0x24]
        add     edx, edi
        add     edx, ebp
        mov     dword ptr [esi + 0x1c], edx
    L_40df:
        mov     edx, dword ptr [esi + 4]
        mov     edi, dword ptr [edx + 0x28]
        test    edi, edi
        jz      L_4255
        cmp     eax, 0x280
        jz      L_41aa
        mov     ebp, dword ptr [esi + 8]
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [edx + 0x14]
        mov     ebx, dword ptr [esp + 0x30]
        sub     eax, ebp
        mov     ebp, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x24], ecx
        mov     edx, eax
        sar     edx, cl
        mov     ecx, dword ptr [esi + 4]
        mov     ecx, dword ptr [ecx + 0x18]
        sub     ebx, ebp
        mov     ebp, ebx
        sar     ebp, cl
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x34], ebp
        mov     ebp, 1
        shl     ebp, cl
        lea     ecx, [ebp - 1]
        and     ecx, eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esi + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, 1
        shl     eax, cl
        lea     ecx, [eax - 1]
        and     ecx, ebx
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esi + 0x2c], ecx
        test    byte ptr [esp + 0x10], 8
        jz      L_4170
        mov     ebx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [edi + 0x14]
        sub     ecx, ebx
        sub     eax, dword ptr [esp + 0x24]
        dec     ecx
        dec     eax
        mov     dword ptr [esi + 0x2c], eax
        jmp     L_4174
    L_4170:
        mov     ecx, dword ptr [esp + 0x34]
    L_4174:
        test    byte ptr [esp + 0x10], 4
        jz      L_418d
        mov     eax, dword ptr [edi + 0x10]
        mov     ebx, dword ptr [esp + 0x1c]
        sub     eax, edx
        dec     eax
        sub     ebp, ebx
        dec     ebp
        mov     edx, eax
        mov     dword ptr [esi + 0x28], ebp
    L_418d:
        mov     eax, dword ptr [edi + 0x10]
        add     eax, 2
        inc     ecx
        imul    eax, ecx
        lea     ecx, [eax + edx + 1]
        imul    ecx, dword ptr [edi + 0x20]
        add     ecx, dword ptr [edi + 0x30]
        mov     dword ptr [esi + 0x24], ecx
        jmp     L_4255
    L_41aa:
        cmp     ecx, 1
        jnz     L_41c0
        mov     ebp, dword ptr [edi + 0x14]
        mov     edx, dword ptr [edi + 0x10]
        add     ebp, 2
        add     edx, 2
        imul    ebp, edx
        jmp     L_41ed
    L_41c0:
        cmp     ecx, 2
        jnz     L_41f1
        mov     eax, dword ptr [edi + 0x10]
        mov     ebx, dword ptr [edi + 0x14]
        cdq
        sub     eax, edx
        mov     ebp, eax
        mov     eax, ebx
        cdq
        sub     eax, edx
        sar     eax, 1
        sar     ebp, 1
        add     eax, ecx
        add     ebp, 2
        imul    ebp, eax
        mov     eax, dword ptr [edi + 0x10]
        add     eax, ecx
        add     ebx, ecx
        imul    eax, ebx
        add     ebp, eax
    L_41ed:
        imul    ebp, dword ptr [edi + 0x20]
    L_41f1:
        mov     ebx, dword ptr [esi + 8]
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [edi + 0x18]
        sub     eax, ebx
        mov     ebx, dword ptr [esp + 0x30]
        and     eax, edx
        sub     ebx, dword ptr [esi + 0xc]
        and     ebx, dword ptr [edi + 0x1c]
        mov     dl, byte ptr [esp + 0x10]
        sar     eax, cl
        sar     ebx, cl
        test    dl, 8
        jz      L_4224
        mov     edx, dword ptr [edi + 0x14]
        sar     edx, cl
        mov     ecx, dword ptr [esp + 0x34]
        sub     edx, ebx
        dec     edx
        mov     ebx, edx
    L_4224:
        test    byte ptr [esp + 0x10], 4
        jz      L_4239
        mov     edx, dword ptr [edi + 0x10]
        sar     edx, cl
        mov     ecx, dword ptr [esp + 0x34]
        sub     edx, eax
        dec     edx
        mov     eax, edx
    L_4239:
        mov     edx, dword ptr [edi + 0x10]
        sar     edx, cl
        add     edx, 2
        inc     ebx
        imul    edx, ebx
        lea     eax, [edx + eax + 1]
        imul    eax, dword ptr [edi + 0x20]
        add     eax, dword ptr [edi + 0x30]
        add     eax, ebp
        mov     dword ptr [esi + 0x24], eax
    L_4255:
        mov     eax, dword ptr [esi + 4]
        mov     ecx, dword ptr [eax + 0x2c]
        test    ecx, ecx
        mov     dword ptr [esp + 0x34], ecx
        jz      L_4306
        mov     ecx, dword ptr [eax + 0x1c]
        mov     ebx, dword ptr [esi + 8]
        mov     edi, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [eax + 0x20]
        sub     edi, ebx
        mov     ebx, dword ptr [esp + 0x30]
        mov     ebp, edi
        sar     ebp, cl
        sub     ebx, dword ptr [esi + 0xc]
        mov     ecx, eax
        mov     edx, ebx
        sar     edx, cl
        mov     ecx, dword ptr [esi + 4]
        mov     ecx, dword ptr [ecx + 0x1c]
        mov     eax, 1
        shl     eax, cl
        mov     ecx, dword ptr [esi + 4]
        mov     ecx, dword ptr [ecx + 0x20]
        dec     eax
        and     eax, edi
        mov     edi, 1
        shl     edi, cl
        mov     dword ptr [esi + 0x34], eax
        lea     ecx, [edi - 1]
        and     ecx, ebx
        test    byte ptr [esp + 0x10], 0x20
        mov     dword ptr [esi + 0x38], ecx
        jz      L_42c8
        mov     ebx, dword ptr [esp + 0x34]
        mov     ebx, dword ptr [ebx + 0x14]
        sub     ebx, edx
        dec     ebx
        sub     edi, ecx
        dec     edi
        mov     edx, ebx
        mov     dword ptr [esi + 0x38], edi
    L_42c8:
        test    byte ptr [esp + 0x10], 0x10
        mov     edi, dword ptr [esp + 0x34]
        jz      L_42ee
        mov     ecx, dword ptr [edi + 0x10]
        sub     ecx, ebp
        dec     ecx
        mov     ebp, ecx
        mov     ecx, dword ptr [esi + 4]
        mov     ecx, dword ptr [ecx + 0x14]
        mov     ebx, 1
        shl     ebx, cl
        sub     ebx, eax
        dec     ebx
        mov     dword ptr [esi + 0x34], ebx
    L_42ee:
        mov     eax, dword ptr [edi + 0x10]
        add     eax, 2
        inc     edx
        imul    eax, edx
        lea     ecx, [eax + ebp + 1]
        imul    ecx, dword ptr [edi + 0x20]
        add     ecx, dword ptr [edi + 0x30]
        mov     dword ptr [esi + 0x30], ecx
    L_4306:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x18
        ret     0xc
    }
}
