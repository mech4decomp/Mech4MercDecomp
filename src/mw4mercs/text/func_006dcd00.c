/*
 * FUN_006dcd00 (365 B) — Fixed-point rasterization / interpolation loop
 * (sibling of FUN_006dcb90).
 *
 * Reads a packed color/param (param_5) and a descriptor (param_1),
 * computes per-row interpolation terms, then loops writing output
 * dwords while advancing through a byte stream. All operands are
 * register/stack-relative — no absolute memory refs, no calls.
 *
 * __cdecl, 5 args, returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006dcd00(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x24]
        push    ebx
        mov     ebx, dword ptr [edx + 4]
        mov     ecx, eax
        and     ecx, 0xFFFFFF
        mov     dword ptr [esp + 0xC], ecx
        sar     eax, 0x18
        push    ebp
        mov     ebp, dword ptr [edx + 0x28]
        mov     ecx, eax
        sar     ebp, cl
        push    esi
        mov     esi, dword ptr [edx + 0x24]
        push    edi
        mov     edi, dword ptr [edx + 0x2C]
        sar     edi, cl
        mov     ecx, dword ptr [ebx + 0x14]
        lea     edx, [eax + eax*1]
        sub     ecx, edx
        add     ecx, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [ebx + 0x14]
        sub     ecx, eax
        mov     edx, 1
        shl     edx, cl
        mov     ecx, dword ptr [ebx + 0x18]
        mov     ebx, dword ptr [ebx + 0x28]
        sub     ecx, eax
        mov     dword ptr [esp + 0x20], ebx
        mov     eax, 1
        shl     eax, cl
        lea     ecx, [edx - 1]
        not     ecx
        mov     dword ptr [esp + 0x1C], ecx
        mov     ecx, dword ptr [ebx + 0x10]
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 1]
        add     ecx, 2
        mov     dword ptr [esp + 0x24], ecx
        sub     eax, edi
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2C], edx
        sub     edx, ebp
        mov     dword ptr [esp + 0x44], ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + esi*1 + 1]
        mov     dword ptr [esp + 0x34], ebp
        mov     dword ptr [esp + 0x10], ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + esi*1]
        mov     ecx, ebx
        xor     ebx, ebx
        imul    ecx, edi
        mov     bl, byte ptr [esi]
        imul    ebx, eax
        imul    eax, dword ptr [esp + 0x44]
        add     ecx, ebx
        mov     ebx, dword ptr [esp + 0x10]
        imul    edx, ecx
        imul    ebx, edi
        add     eax, ebx
        mov     ebx, eax
        imul    ebx, ebp
        mov     ebp, dword ptr [esp + 0x3C]
        add     edx, ebx
        mov     ebx, eax
        sub     ebx, ecx
        mov     ecx, dword ptr [esp + 0x40]
        sub     ecx, ebp
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x44], ecx
L6DCDE1:
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebp, edx
        sar     ebp, cl
        add     edx, ebx
        cmp     ebp, 0x80
        jle     L6DCDFE
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x44]
        mov     dword ptr [ebp], ecx
L6DCDFE:
        mov     ebp, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, 4
        inc     ecx
        mov     dword ptr [esp + 0x44], ebp
        cmp     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x10], ecx
        jge     L6DCE65
        mov     ecx, dword ptr [esp + 0x34]
        mov     ebp, dword ptr [esp + 0x1C]
        inc     ecx
        test    ebp, ecx
        mov     dword ptr [esp + 0x34], ecx
        jz      L6DCDE1
        mov     edx, dword ptr [esp + 0x20]
        add     esi, dword ptr [edx + 0x20]
        mov     ebx, dword ptr [esp + 0x24]
        xor     edx, edx
        mov     dl, byte ptr [esi + 1]
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + esi*1 + 1]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x34], 0
        imul    eax, edx
        imul    ecx, edi
        add     eax, ecx
        mov     edx, ebp
        imul    edx, dword ptr [esp + 0x2C]
        mov     ebx, eax
        sub     ebx, ebp
        jmp     L6DCDE1
L6DCE65:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret
    }
}
