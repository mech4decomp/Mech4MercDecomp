/*
 * FUN_006ddf30 (700 B) — __cdecl RET (5 args). Image/color transform with
 * bilinear interpolation over two byte tables (pbVar21/pbVar22). Pure
 * register/stack arithmetic; no external calls or data.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006ddf30(void)
{
    __asm {
        sub     esp, 0x48
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, eax
        and     ecx, 0xffffff
        sar     eax, 0x18
        mov     dword ptr [esp + 0x34], ecx
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
        mov     dword ptr [esp + 0x14], ebp
        mov     ebp, dword ptr [edx + 0x34]
        mov     edx, dword ptr [edx + 0x38]
        sar     edx, cl
        sar     ebp, cl
        lea     ecx, [eax + eax*0x1]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [ebx + 0x14]
        sub     edx, ecx
        mov     dword ptr [esp + 0x6c], ebp
        mov     ebp, dword ptr [ebx + 0x18]
        add     edx, ebp
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [ebx + 0x1c]
        sub     edx, ecx
        add     edx, dword ptr [ebx + 0x20]
        mov     ecx, dword ptr [ebx + 0x14]
        sub     ecx, eax
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, ebp
        sub     ecx, eax
        mov     ebp, 0x1
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [ebx + 0x1c]
        sub     ecx, eax
        shl     ebp, cl
        mov     ecx, dword ptr [ebx + 0x20]
        sub     ecx, eax
        mov     eax, 0x1
        shl     eax, cl
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x34], ebp
        dec     ebp
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [ebx + 0x28]
        mov     ebx, dword ptr [ebx + 0x2c]
        not     ebp
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x50], ebp
        mov     ebp, dword ptr [eax + 0x10]
        mov     eax, edx
        xor     edx, edx
        mov     dl, byte ptr [edi]
        sub     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        add     ebp, 0x2
        mov     dword ptr [esp + 0x54], ebx
        mov     ebx, dword ptr [ebx + 0x10]
        add     ebx, 0x2
        imul    edx, eax
        xor     eax, eax
        mov     al, byte ptr [edi + ebp]
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x2c], ebx
        imul    eax, ecx
        add     edx, eax
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x1]
        xor     eax, eax
        mov     al, byte ptr [edi + ebp + 0x1]
        mov     ebp, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x20], 0x0
        imul    ecx, dword ptr [esp + 0x18]
        imul    eax, dword ptr [esp + 0x14]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebp
        mov     ebp, ecx
        imul    eax, edx
        imul    ebp, dword ptr [esp + 0x5c]
        sub     ecx, edx
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x28], ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + esi]
        add     eax, ebp
        sub     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x30], edx
        mov     ebp, ecx
        imul    ebp, dword ptr [esp + 0x10]
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        imul    ecx, edx
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x1]
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [ebx + esi + 0x1]
        mov     ebx, dword ptr [esp + 0x6c]
        imul    edx, dword ptr [esp + 0x10]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x34]
        sub     edx, ebx
        mov     ebx, ecx
        imul    edx, ebp
        imul    ebx, dword ptr [esp + 0x6c]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x68]
        add     edx, ebx
        sub     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x68], ecx
L_6de0bc:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     ebp, edx
        sar     ebp, cl
        mov     ecx, dword ptr [esp + 0x40]
        mov     ebx, eax
        sar     ebx, cl
        sub     eax, dword ptr [esp + 0x28]
        add     ebp, ebx
        add     edx, dword ptr [esp + 0x38]
        cmp     ebp, 0x80
        jle     L_6de0e8
        mov     ecx, dword ptr [esp + 0x44]
        mov     ebx, dword ptr [esp + 0x68]
        mov     dword ptr [ebx], ecx
L_6de0e8:
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x68]
        mov     ebx, dword ptr [esp + 0x48]
        inc     ecx
        add     ebp, 0x4
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x68], ebp
        jge     L_6de1e4
        dec     dword ptr [esp + 0x5c]
        jns     L_6de176
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     ebp, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        dec     eax
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x5c], eax
        xor     eax, eax
        mov     ebx, dword ptr [esp + 0x24]
        sub     edi, ebp
        mov     al, byte ptr [ecx + edi]
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x14]
        imul    ecx, dword ptr [esp + 0x18]
        imul    ebp, eax
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + edi + 0x1]
        mov     ebx, dword ptr [esp + 0x64]
        imul    ecx, eax
        xor     eax, eax
        mov     al, byte ptr [edi + 0x1]
        imul    eax, dword ptr [esp + 0x18]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, ebp
        imul    ebx, dword ptr [esp + 0x64]
        add     eax, ebx
        sub     ecx, ebp
        mov     dword ptr [esp + 0x28], ecx
L_6de176:
        mov     ecx, dword ptr [esp + 0x6c]
        mov     ebx, dword ptr [esp + 0x50]
        inc     ecx
        __emit 0x85 /* __emit: MSVC6 swaps test operands (85 CB for test ebx,ecx); ref needs 85 D9 = test ecx,ebx */
        __emit 0xD9
        mov     dword ptr [esp + 0x6c], ecx
        jz      L_6de0bc
        mov     ecx, dword ptr [esp + 0x54]
        mov     ebp, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x2c]
        xor     edx, edx
        add     esi, ebp
        mov     dl, byte ptr [ecx + esi]
        mov     ebx, dword ptr [esp + 0x2c]
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        mov     dword ptr [esp + 0x6c], 0x0
        mov     ebp, edx
        mov     edx, dword ptr [esp + 0x10]
        imul    ebp, edx
        imul    ecx, dword ptr [esp + 0x30]
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + esi + 0x1]
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x1]
        imul    edx, dword ptr [esp + 0x30]
        add     ecx, edx
        mov     edx, ebp
        imul    edx, dword ptr [esp + 0x34]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x38], ecx
        jmp     L_6de0bc
L_6de1e4:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret
    }
}
