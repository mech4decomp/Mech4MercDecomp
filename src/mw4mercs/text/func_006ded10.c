/*
 * FUN_006ded10 (702 B) — __cdecl RET (5 args). Image/color transform with
 * bilinear interpolation over two byte tables (pbVar21/pbVar22). Pure
 * register/stack arithmetic; no external calls or data. Structurally
 * identical to FUN_006dea50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006ded10(void)
{
    __asm {
        sub     esp, 0x44
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x58]
        mov     ecx, eax
        and     ecx, 0xffffff
        mov     dword ptr [esp + 0x34], ecx
        sar     eax, 0x18
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
        mov     dword ptr [esp + 0x58], ebp
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
        mov     dword ptr [esp + 0x68], ebp
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
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [ebx + 0x28]
        mov     ebp, dword ptr [eax + 0x10]
        mov     ebx, dword ptr [ebx + 0x2c]
        mov     dword ptr [esp + 0x4c], eax
        mov     eax, dword ptr [esp + 0x14]
        sub     edx, eax
        mov     dword ptr [esp + 0x18], edx
        imul    ecx, edx
        add     ebp, 0x2
        xor     edx, edx
        mov     dl, byte ptr [edi + ebp]
        mov     dword ptr [esp + 0x50], ebx
        mov     ebx, dword ptr [ebx + 0x10]
        add     ebx, 0x2
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x30], ebx
        imul    edx, eax
        xor     eax, eax
        mov     al, byte ptr [edi + 0x1]
        add     ecx, edx
        imul    eax, dword ptr [esp + 0x18]
        xor     edx, edx
        mov     dl, byte ptr [edi + ebp + 0x1]
        imul    edx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x58]
        add     eax, edx
        mov     edx, dword ptr [esp + 0x1c]
        sub     edx, ebp
        imul    edx, ecx
        mov     ebp, eax
        imul    ebp, dword ptr [esp + 0x58]
        sub     eax, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x38]
        add     edx, ebp
        sub     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x34], eax
        mov     ebp, ecx
        xor     ecx, ecx
        imul    ebp, eax
        mov     cl, byte ptr [ebx + esi]
        mov     dword ptr [esp + 0x24], 0x0
        imul    ecx, dword ptr [esp + 0x10]
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x1]
        imul    ecx, eax
        xor     eax, eax
        mov     al, byte ptr [ebx + esi + 0x1]
        mov     ebx, dword ptr [esp + 0x68]
        imul    eax, dword ptr [esp + 0x10]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, ebp
        imul    ebx, dword ptr [esp + 0x68]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x64]
        add     eax, ebx
        sub     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x48], ecx
        mov     ecx, dword ptr [esp + 0x5c]
        mov     dword ptr [esp + 0x64], ecx
L_6dee93:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     ebx, eax
        sar     ebx, cl
        mov     ecx, dword ptr [esp + 0x40]
        mov     ebp, edx
        sar     ebp, cl
        sub     edx, dword ptr [esp + 0x2c]
        add     ebx, ebp
        sub     eax, dword ptr [esp + 0x38]
        cmp     ebx, 0x80
        jle     L_6deebf
        mov     ecx, dword ptr [esp + 0x44]
        mov     ebx, dword ptr [esp + 0x64]
        mov     dword ptr [ebx], ecx
L_6deebf:
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebp, dword ptr [esp + 0x64]
        mov     ebx, dword ptr [esp + 0x48]
        inc     ecx
        add     ebp, 0x4
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x64], ebp
        jge     L_6defc6
        dec     dword ptr [esp + 0x58]
        jns     L_6def4f
        mov     edx, dword ptr [esp + 0x1c]
        lea     ecx, [edx - 0x1]
        mov     dword ptr [esp + 0x60], ecx
        mov     dword ptr [esp + 0x58], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     ebp, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x28]
        xor     edx, edx
        mov     ebx, dword ptr [esp + 0x28]
        sub     edi, ebp
        mov     dl, byte ptr [ecx + edi]
        xor     ecx, ecx
        mov     cl, byte ptr [edi]
        mov     ebp, edx
        mov     edx, dword ptr [esp + 0x14]
        imul    ecx, dword ptr [esp + 0x18]
        imul    ebp, edx
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + edi + 0x1]
        mov     ebx, dword ptr [esp + 0x60]
        imul    ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x1]
        imul    edx, dword ptr [esp + 0x18]
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x1c]
        sub     edx, ebx
        mov     ebx, ecx
        imul    edx, ebp
        imul    ebx, dword ptr [esp + 0x60]
        add     edx, ebx
        sub     ecx, ebp
        mov     dword ptr [esp + 0x2c], ecx
L_6def4f:
        dec     dword ptr [esp + 0x68]
        jns     L_6dee93
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x50]
        mov     ebp, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x30]
        dec     eax
        mov     dword ptr [esp + 0x60], eax
        mov     dword ptr [esp + 0x68], eax
        xor     eax, eax
        mov     ebx, dword ptr [esp + 0x30]
        sub     esi, ebp
        mov     al, byte ptr [ecx + esi]
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x10]
        imul    ecx, dword ptr [esp + 0x34]
        imul    ebp, eax
        add     ebp, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + esi + 0x1]
        mov     ebx, dword ptr [esp + 0x60]
        imul    ecx, eax
        xor     eax, eax
        mov     al, byte ptr [esi + 0x1]
        imul    eax, dword ptr [esp + 0x34]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, ebx
        mov     ebx, ecx
        imul    eax, ebp
        imul    ebx, dword ptr [esp + 0x60]
        add     eax, ebx
        sub     ecx, ebp
        mov     dword ptr [esp + 0x38], ecx
        jmp     L_6dee93
L_6defc6:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret
    }
}
