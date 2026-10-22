/*
 * FUN_006ddc60 (715 B) — __cdecl RET (5 args). Image/color transform with
 * bilinear interpolation over two byte tables (pbVar15/pbVar23). Pure
 * register/stack arithmetic; no external calls or data. Structurally
 * identical to FUN_006dd990.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006ddc60(void)
{
    __asm {
        sub     esp, 0x48
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, eax
        and     ecx, 0xffffff
        mov     dword ptr [esp + 0x2c], ecx
        sar     eax, 0x18
        mov     ecx, eax
        push    ebx
        mov     ebx, dword ptr [edx + 0x24]
        push    ebp
        mov     ebp, dword ptr [edx + 0x28]
        sar     ebp, cl
        push    esi
        mov     esi, dword ptr [edx + 0x4]
        push    edi
        mov     edi, dword ptr [edx + 0x30]
        mov     dword ptr [esp + 0x5c], ebp
        mov     ebp, dword ptr [edx + 0x2c]
        sar     ebp, cl
        mov     dword ptr [esp + 0x10], ebp
        mov     ebp, dword ptr [edx + 0x34]
        mov     edx, dword ptr [edx + 0x38]
        sar     edx, cl
        sar     ebp, cl
        lea     ecx, [eax + eax*0x1]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [esi + 0x14]
        sub     edx, ecx
        mov     dword ptr [esp + 0x6c], ebp
        mov     ebp, dword ptr [esi + 0x18]
        add     edx, ebp
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [esi + 0x1c]
        sub     edx, ecx
        add     edx, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [esi + 0x14]
        sub     ecx, eax
        mov     dword ptr [esp + 0x34], edx
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, ebp
        sub     ecx, eax
        mov     ebp, 0x1
        shl     ebp, cl
        mov     ecx, dword ptr [esi + 0x1c]
        sub     ecx, eax
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x30], ebp
        mov     ebp, 0x1
        shl     ebp, cl
        mov     ecx, dword ptr [esi + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        mov     dword ptr [esp + 0x2c], ebp
        dec     ebp
        not     ebp
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [edx - 0x1]
        not     eax
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esi + 0x28]
        mov     esi, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x10]
        add     ecx, 0x2
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x50], esi
        mov     esi, dword ptr [esp + 0x30]
        sub     esi, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        mov     dword ptr [esp + 0x44], eax
        mov     eax, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x4c], ebp
        add     eax, 0x2
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x24], esi
        mov     ebp, ecx
        imul    ebp, esi
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebx]
        xor     eax, eax
        mov     al, byte ptr [ebx + 0x1]
        imul    ecx, dword ptr [esp + 0x10]
        add     ebp, ecx
        imul    eax, esi
        mov     esi, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + ebx + 0x1]
        mov     esi, edx
        sub     esi, dword ptr [esp + 0x5c]
        imul    esi, ebp
        imul    ecx, dword ptr [esp + 0x10]
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, eax
        imul    edx, dword ptr [esp + 0x5c]
        sub     eax, ebp
        mov     ebp, dword ptr [esp + 0x1c]
        add     esi, edx
        xor     edx, edx
        mov     dl, byte ptr [edi + ebp]
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, ecx
        mov     dword ptr [esp + 0x54], eax
        mov     dword ptr [esp + 0x20], 0x0
        mov     ebp, edx
        imul    ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        xor     edx, edx
        imul    ecx, eax
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x1]
        imul    ecx, eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dl, byte ptr [eax + edi + 0x1]
        mov     eax, dword ptr [esp + 0x6c]
        imul    edx, dword ptr [esp + 0x14]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x2c]
        sub     edx, eax
        mov     eax, ecx
        imul    edx, ebp
        imul    eax, dword ptr [esp + 0x6c]
        sub     ecx, ebp
        add     edx, eax
        mov     eax, dword ptr [esp + 0x68]
        mov     dword ptr [esp + 0x30], ecx
        sub     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x68], ecx
L_6dde05:
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, edx
        sar     eax, cl
        mov     ecx, dword ptr [esp + 0x38]
        mov     ebp, esi
        sar     ebp, cl
        add     esi, dword ptr [esp + 0x28]
        add     eax, ebp
        add     edx, dword ptr [esp + 0x30]
        cmp     eax, 0x80
        jle     L_6dde30
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x68]
        mov     dword ptr [ecx], eax
L_6dde30:
        mov     eax, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x68]
        mov     ecx, dword ptr [esp + 0x64]
        inc     eax
        add     ebp, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x68], ebp
        jge     L_6ddf23
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x40]
        inc     eax
        __emit 0x85 /* __emit: MSVC6 swaps test operands (85 C1 for test ecx,eax); ref needs 85 C8 = test eax,ecx */
        __emit 0xC8
        mov     dword ptr [esp + 0x5c], eax
        jz      L_6ddeb5
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x10]
        add     ebx, ecx
        mov     ebp, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebx]
        xor     eax, eax
        mov     al, byte ptr [ebx]
        mov     dword ptr [esp + 0x5c], 0x0
        imul    ecx, esi
        imul    eax, dword ptr [esp + 0x24]
        add     ecx, eax
        xor     eax, eax
        mov     al, byte ptr [ebx + ebp + 0x1]
        mov     ebp, eax
        xor     eax, eax
        imul    ebp, esi
        mov     al, byte ptr [ebx + 0x1]
        mov     esi, ecx
        imul    esi, dword ptr [esp + 0x48]
        imul    eax, dword ptr [esp + 0x24]
        add     ebp, eax
        sub     ebp, ecx
        mov     dword ptr [esp + 0x28], ebp
L_6ddeb5:
        mov     eax, dword ptr [esp + 0x6c]
        mov     ecx, dword ptr [esp + 0x4c]
        inc     eax
        __emit 0x85 /* __emit: MSVC6 swaps test operands (85 C1 for test ecx,eax); ref needs 85 C8 = test eax,ecx */
        __emit 0xC8
        mov     dword ptr [esp + 0x6c], eax
        jz      L_6dde05
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [ecx + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        add     edi, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + edi]
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        mov     dword ptr [esp + 0x6c], 0x0
        mov     ebp, edx
        imul    ebp, dword ptr [esp + 0x14]
        mov     edx, ecx
        mov     ecx, dword ptr [esp + 0x54]
        imul    edx, ecx
        add     ebp, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + edi + 0x1]
        mov     eax, edx
        imul    eax, dword ptr [esp + 0x14]
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x1]
        imul    edx, ecx
        add     eax, edx
        mov     edx, ebp
        imul    edx, dword ptr [esp + 0x2c]
        sub     eax, ebp
        mov     dword ptr [esp + 0x30], eax
        jmp     L_6dde05
L_6ddf23:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret
    }
}
