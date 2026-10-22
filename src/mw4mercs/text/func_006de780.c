/*
 * FUN_006de780 (710 B) — __cdecl RET (5 args). Image/color transform with
 * bilinear interpolation over two byte tables (pbVar22/pbVar23). Pure
 * register/stack arithmetic; no external calls or data. Structurally
 * identical to FUN_006de1f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006de780(void)
{
    __asm {
        sub     esp, 0x48
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, eax
        sar     eax, 0x18
        and     ecx, 0xffffff
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, eax
        push    ebx
        mov     ebx, dword ptr [edx + 0x4]
        push    ebp
        mov     ebp, dword ptr [edx + 0x28]
        sar     ebp, cl
        push    esi
        mov     esi, dword ptr [edx + 0x30]
        push    edi
        mov     edi, dword ptr [edx + 0x24]
        mov     dword ptr [esp + 0x5c], ebp
        mov     ebp, dword ptr [edx + 0x2c]
        sar     ebp, cl
        mov     dword ptr [esp + 0x10], ebp
        mov     ebp, dword ptr [edx + 0x34]
        mov     edx, dword ptr [edx + 0x38]
        sar     ebp, cl
        sar     edx, cl
        lea     ecx, [eax + eax*0x1]
        mov     dword ptr [esp + 0x6c], ebp
        mov     ebp, dword ptr [ebx + 0x14]
        sub     ebp, ecx
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [ebx + 0x18]
        add     ebp, edx
        mov     dword ptr [esp + 0x3c], ebp
        mov     ebp, dword ptr [ebx + 0x1c]
        sub     ebp, ecx
        add     ebp, dword ptr [ebx + 0x20]
        mov     ecx, dword ptr [ebx + 0x14]
        sub     ecx, eax
        mov     dword ptr [esp + 0x38], ebp
        mov     ebp, 0x1
        shl     ebp, cl
        mov     ecx, edx
        sub     ecx, eax
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [ebx + 0x1c]
        sub     ecx, eax
        mov     dword ptr [esp + 0x50], ebp
        mov     dword ptr [esp + 0x34], edx
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [ebx + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        mov     dword ptr [esp + 0x1c], edx
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        mov     dword ptr [esp + 0x30], eax
        lea     eax, [ebp - 0x1]
        not     eax
        mov     dword ptr [esp + 0x48], eax
        mov     eax, dword ptr [ebx + 0x28]
        mov     edx, dword ptr [eax + 0x10]
        mov     ebx, dword ptr [ebx + 0x2c]
        mov     dword ptr [esp + 0x4c], eax
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x2
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x54], ebx
        mov     ebx, dword ptr [esp + 0x34]
        sub     ebx, eax
        add     edx, 0x2
        imul    ecx, ebx
        xor     eax, eax
        mov     al, byte ptr [edx + edi]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], ebx
        imul    eax, dword ptr [esp + 0x10]
        add     ecx, eax
        xor     eax, eax
        mov     al, byte ptr [edi + 0x1]
        mov     dword ptr [esp + 0x20], 0x0
        imul    eax, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [edx + edi + 0x1]
        mov     edx, ebp
        mov     ebp, dword ptr [esp + 0x14]
        imul    ebx, dword ptr [esp + 0x10]
        add     eax, ebx
        sub     edx, dword ptr [esp + 0x5c]
        imul    edx, ecx
        mov     ebx, eax
        imul    ebx, dword ptr [esp + 0x5c]
        sub     eax, ecx
        xor     ecx, ecx
        add     edx, ebx
        mov     ebx, dword ptr [esp + 0x18]
        mov     cl, byte ptr [ebx + esi]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x30]
        sub     eax, ebp
        mov     dword ptr [esp + 0x30], eax
        mov     ebp, ecx
        imul    ebp, dword ptr [esp + 0x14]
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        imul    ecx, eax
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x1]
        imul    ecx, eax
        xor     eax, eax
        mov     al, byte ptr [ebx + esi + 0x1]
        mov     ebx, dword ptr [esp + 0x6c]
        imul    eax, dword ptr [esp + 0x14]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, ebp
        imul    ebx, dword ptr [esp + 0x6c]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x68]
        add     eax, ebx
        sub     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x68], ecx
L_6de916:
        mov     ecx, dword ptr [esp + 0x38]
        mov     ebp, eax
        sar     ebp, cl
        mov     ecx, dword ptr [esp + 0x3c]
        mov     ebx, edx
        sar     ebx, cl
        add     edx, dword ptr [esp + 0x2c]
        add     ebp, ebx
        sub     eax, dword ptr [esp + 0x34]
        cmp     ebp, 0x80
        jle     L_6de942
        mov     ecx, dword ptr [esp + 0x40]
        mov     ebx, dword ptr [esp + 0x68]
        mov     dword ptr [ebx], ecx
L_6de942:
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x68]
        mov     ebx, dword ptr [esp + 0x44]
        inc     ecx
        add     ebp, 0x4
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x68], ebp
        jge     L_6dea3e
        mov     ecx, dword ptr [esp + 0x5c]
        mov     ebx, dword ptr [esp + 0x48]
        inc     ecx
        __emit 0x85 /* __emit: MSVC6 swaps test operands (85 CB for test ebx,ecx); ref needs 85 D9 = test ecx,ebx */
        __emit 0xD9
        mov     dword ptr [esp + 0x5c], ecx
        jz      L_6de9c7
        mov     edx, dword ptr [esp + 0x4c]
        mov     ebp, dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        xor     ecx, ecx
        add     edi, ebp
        mov     cl, byte ptr [edx + edi]
        mov     edx, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x5c], 0x0
        mov     ebp, ecx
        xor     ecx, ecx
        imul    ebp, edx
        mov     cl, byte ptr [edi]
        imul    ecx, dword ptr [esp + 0x28]
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + edi + 0x1]
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x1]
        imul    edx, dword ptr [esp + 0x28]
        add     ecx, edx
        mov     edx, ebp
        imul    edx, dword ptr [esp + 0x50]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x2c], ecx
L_6de9c7:
        dec     dword ptr [esp + 0x6c]
        jns     L_6de916
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x54]
        mov     ebp, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x18]
        dec     eax
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x6c], eax
        xor     eax, eax
        mov     ebx, dword ptr [esp + 0x18]
        sub     esi, ebp
        mov     al, byte ptr [ecx + esi]
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x14]
        imul    ecx, dword ptr [esp + 0x30]
        imul    ebp, eax
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + esi + 0x1]
        mov     ebx, dword ptr [esp + 0x64]
        imul    ecx, eax
        xor     eax, eax
        mov     al, byte ptr [esi + 0x1]
        imul    eax, dword ptr [esp + 0x30]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, ebp
        imul    ebx, dword ptr [esp + 0x64]
        add     eax, ebx
        sub     ecx, ebp
        mov     dword ptr [esp + 0x34], ecx
        jmp     L_6de916
L_6dea3e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret
    }
}
