/*
 * FUN_006dc3b0 (983 B) — Pure integer/bitfield arithmetic routine.
 * No external calls, no vtable, no middleware. In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006dc3b0(void)
{
    __asm {
        sub     esp, 0x40
        mov     edx, dword ptr [esp + 0x54]
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, edx
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]
        push    ebp
        mov     ebp, dword ptr [ebx + 0x18]
        push    esi
        mov     esi, dword ptr [eax + 0x28]
        sar     esi, cl
        push    edi
        mov     edi, dword ptr [eax + 0x24]
        mov     eax, dword ptr [eax + 0x2c]
        sar     eax, cl
        lea     ecx, [edx + edx*0x1]
        mov     dword ptr [esp + 0x54], esi
        mov     esi, dword ptr [ebx + 0x14]
        sub     esi, ecx
        mov     ecx, dword ptr [ebx + 0x14]
        sub     ecx, edx
        add     esi, ebp
        mov     ebx, dword ptr [ebx + 0x28]
        mov     dword ptr [esp + 0x10], esi
        mov     esi, 0x1
        shl     esi, cl
        mov     ecx, ebp
        sub     ecx, edx
        mov     ebp, dword ptr [ebx + 0x10]
        mov     edx, 0x1
        shl     edx, cl
        lea     ecx, [esi + -0x1]
        not     ecx
        mov     dword ptr [esp + 0x4c], ecx
        mov     ecx, dword ptr [edi]
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, ecx
        and     edx, 0x1f
        shl     edx, 0x3
        mov     dword ptr [esp + 0x34], edx
        mov     edx, ecx
        sar     ecx, 0x7
        sar     edx, 0x2
        mov     dword ptr [esp + 0x2c], esi
        mov     esi, dword ptr [ebx + 0x20]
        and     ecx, 0xf8
        and     edx, 0xf8
        mov     dword ptr [esp + 0x38], esi
        mov     dword ptr [esp + 0x24], ecx
        add     ebp, 0x2
        imul    ebp, esi
        add     esi, edi
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [esi]
        mov     ecx, edx
        and     ecx, 0x1f
        shl     ecx, 0x3
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, edx
        sar     ecx, 0x2
        sar     edx, 0x7
        and     ecx, 0xf8
        mov     dword ptr [esp + 0x48], esi
        mov     esi, dword ptr [edi + ebp*0x1]
        and     edx, 0xf8
        mov     dword ptr [esp + 0x64], ecx
        mov     ebx, esi
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [esp + 0x38]
        sar     esi, 0x7
        and     ebx, 0x1f
        sar     ecx, 0x2
        and     esi, 0xf8
        add     edx, ebp
        shl     ebx, 0x3
        and     ecx, 0xf8
        add     edi, edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x44], edi
        mov     esi, edx
        mov     edi, dword ptr [esp + 0x3c]
        imul    ebx, eax
        imul    ecx, eax
        mov     ebp, edx
        sar     edx, 0x7
        and     edx, 0xf8
        mov     dword ptr [esp + 0x40], edx
        sub     edi, eax
        mov     edx, edi
        imul    edx, dword ptr [esp + 0x34]
        add     edx, ebx
        mov     dword ptr [esp + 0x14], edx
        mov     edx, edi
        imul    edx, dword ptr [esp + 0x30]
        add     edx, ecx
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esp + 0x20]
        and     esi, 0x1f
        imul    edx, eax
        shl     esi, 0x3
        imul    esi, eax
        mov     ecx, edi
        imul    ecx, dword ptr [esp + 0x24]
        add     ecx, edx
        mov     ebx, edi
        imul    ebx, dword ptr [esp + 0x1c]
        sar     ebp, 0x2
        mov     dword ptr [esp + 0x20], ecx
        add     ebx, esi
        mov     esi, dword ptr [esp + 0x40]
        and     ebp, 0xf8
        imul    esi, eax
        imul    ebp, eax
        mov     edx, edi
        imul    edx, dword ptr [esp + 0x28]
        add     edx, esi
        mov     esi, dword ptr [esp + 0x2c]
        mov     ecx, edi
        imul    ecx, dword ptr [esp + 0x64]
        add     ecx, ebp
        mov     dword ptr [esp + 0x24], ecx
        imul    ecx, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x1c], edx
        sub     esi, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x64], esi
        mov     edx, esi
        imul    esi, dword ptr [esp + 0x18]
        imul    edx, dword ptr [esp + 0x14]
        mov     ebp, ebx
        imul    ebp, dword ptr [esp + 0x54]
        add     esi, ecx
        mov     ecx, dword ptr [esp + 0x64]
        imul    ecx, dword ptr [esp + 0x20]
        add     edx, ebp
        mov     ebp, dword ptr [esp + 0x1c]
        imul    ebp, dword ptr [esp + 0x54]
        mov     dword ptr [esp + 0x64], ecx
        add     ecx, ebp
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x64], ecx
        mov     ecx, ebx
        sub     ecx, ebp
        mov     ebp, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, ebp
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, edx
        sar     ebp, cl
        mov     dword ptr [esp + 0x34], ebp
        mov     ebp, esi
        sar     ebp, cl
        mov     dword ptr [esp + 0x30], ebp
        mov     ebp, dword ptr [esp + 0x64]
        sar     ebp, cl
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x14], ebp
        mov     ebp, dword ptr [esp + 0x28]
        add     esi, ecx
        mov     ecx, dword ptr [esp + 0x20]
        add     edx, ebp
        mov     ebp, dword ptr [esp + 0x64]
        add     ebp, ecx
        mov     ecx, dword ptr [esp + 0x14]
        shl     ecx, 0x8
        mov     dword ptr [esp + 0x64], ebp
        or      ecx, dword ptr [esp + 0x30]
        mov     ebp, dword ptr [esp + 0x34]
        shl     ecx, 0x8
        or      ecx, ebp
        mov     ebp, dword ptr [esp + 0x58]
        mov     dword ptr [ebp], ecx
        mov     ecx, dword ptr [esp + 0x60]
        sub     ecx, dword ptr [esp + 0x5c]
        cmp     ecx, 0x1
        jle     L_006dc77f
        add     ebp, 0x4
        mov     dword ptr [esp + 0x5c], ebp
        mov     ebp, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x60], ebp
        mov     ebp, dword ptr [esp + 0x48]
        dec     ecx
        mov     dword ptr [esp + 0x58], ebp
        mov     dword ptr [esp + 0x3c], ecx
L_006dc622:
        mov     ecx, dword ptr [esp + 0x54]
        mov     ebp, dword ptr [esp + 0x4c]
        inc     ecx
        __emit 0x85 /* __emit: MSVC6 encodes test ecx,ebp as 85 CD (operand swap); ref needs 85 E9 */
        __emit 0xE9
        mov     dword ptr [esp + 0x54], ecx
        jz      L_006dc718
        mov     edx, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x58]
        mov     esi, dword ptr [esp + 0x60]
        add     ecx, edx
        mov     dword ptr [esp + 0x58], ecx
        mov     ecx, dword ptr [ecx]
        add     esi, edx
        mov     edx, ecx
        mov     ebp, ecx
        sar     edx, 0x2
        and     edx, 0xf8
        mov     dword ptr [esp + 0x64], edx
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x60], esi
        mov     dword ptr [esp + 0x14], ebx
        mov     ebx, dword ptr [esp + 0x24]
        sar     ecx, 0x7
        mov     dword ptr [esp + 0x18], ebx
        mov     ebx, dword ptr [esp + 0x1c]
        mov     esi, edx
        and     esi, 0x1f
        and     ecx, 0xf8
        and     ebp, 0x1f
        mov     dword ptr [esp + 0x28], ecx
        shl     esi, 0x3
        mov     dword ptr [esp + 0x20], ebx
        imul    esi, eax
        shl     ebp, 0x3
        mov     ebx, edi
        imul    ebx, ebp
        mov     ecx, edx
        sar     ecx, 0x2
        and     ecx, 0xf8
        imul    ecx, eax
        add     ebx, esi
        mov     esi, edi
        imul    esi, dword ptr [esp + 0x64]
        add     esi, ecx
        sar     edx, 0x7
        and     edx, 0xf8
        imul    edx, eax
        mov     ecx, edi
        imul    ecx, dword ptr [esp + 0x28]
        add     ecx, edx
        mov     dword ptr [esp + 0x1c], ecx
        mov     ebp, esi
        mov     esi, dword ptr [esp + 0x2c]
        mov     ecx, ebx
        sub     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, ebp
        sub     ecx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x20]
        mov     edx, esi
        imul    esi, dword ptr [esp + 0x18]
        imul    edx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        imul    ecx, ebp
        mov     dword ptr [esp + 0x64], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x54], 0x0
        mov     dword ptr [esp + 0x20], ecx
L_006dc718:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, edx
        sar     ebp, cl
        mov     dword ptr [esp + 0x34], ebp
        mov     ebp, esi
        sar     ebp, cl
        mov     dword ptr [esp + 0x30], ebp
        mov     ebp, dword ptr [esp + 0x64]
        sar     ebp, cl
        add     esi, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], ebp
        add     edx, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x64]
        add     ebp, ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x64], ebp
        mov     ebp, dword ptr [esp + 0x30]
        shl     ecx, 0x8
        or      ecx, ebp
        mov     ebp, dword ptr [esp + 0x34]
        shl     ecx, 0x8
        or      ecx, ebp
        mov     ebp, dword ptr [esp + 0x5c]
        mov     dword ptr [ebp], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        add     ebp, 0x4
        dec     ecx
        mov     dword ptr [esp + 0x5c], ebp
        mov     dword ptr [esp + 0x3c], ecx
        jnz     L_006dc622
L_006dc77f:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
    }
}
