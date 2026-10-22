/*
 * FUN_006dce70 (365 B) — Fixed-point rasterization / interpolation loop
 * (sibling of FUN_006dcb90 / FUN_006dcd00, descending variant).
 *
 * Reads a packed color/param (param_5) and a descriptor (param_1),
 * computes per-row interpolation terms, then loops writing output
 * dwords while stepping backward through a byte stream. All operands
 * are register/stack-relative — no absolute memory refs, no calls.
 *
 * __cdecl, 5 args, returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006dce70(void)
{
    __asm {
        sub     esp, 0x1C
        mov     eax, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x20]
        push    ebx
        mov     ebx, dword ptr [edx + 4]
        mov     ecx, eax
        and     ecx, 0xFFFFFF
        mov     dword ptr [esp + 0x10], ecx
        sar     eax, 0x18
        push    ebp
        mov     ebp, dword ptr [ebx + 0x14]
        mov     ecx, eax
        push    esi
        mov     esi, dword ptr [edx + 0x24]
        push    edi
        mov     edi, dword ptr [edx + 0x28]
        sar     edi, cl
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x30], edi
        mov     edi, dword ptr [edx + 0x2C]
        mov     edx, dword ptr [ebx + 0x18]
        sar     edi, cl
        lea     ecx, [eax + eax*1]
        sub     ebp, ecx
        mov     ecx, dword ptr [ebx + 0x14]
        mov     ebx, dword ptr [ebx + 0x28]
        sub     ecx, eax
        add     ebp, edx
        mov     dword ptr [esp + 0x18], ebp
        mov     ebp, 1
        shl     ebp, cl
        mov     ecx, edx
        sub     ecx, eax
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, 1
        shl     edx, cl
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        add     eax, 2
        mov     dword ptr [esp + 0x20], ebx
        mov     ebx, edx
        sub     ebx, edi
        mov     edx, ebx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x10], ecx
        imul    edx, dword ptr [esp + 0x10]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + esi*1]
        mov     dword ptr [esp + 0x24], eax
        imul    ecx, edi
        add     edx, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 1]
        imul    ecx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax + esi*1 + 1]
        mov     eax, ebp
        imul    ebx, edi
        add     ecx, ebx
        sub     eax, dword ptr [esp + 0x30]
        mov     ebx, ecx
        imul    eax, edx
        imul    ebx, dword ptr [esp + 0x30]
        sub     ecx, edx
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x3C]
        add     eax, ebx
        sub     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x40], ecx
L6DCF45:
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, eax
        sar     ebx, cl
        sub     eax, dword ptr [esp + 0x10]
        cmp     ebx, 0x80
        jle     L6DCF63
        mov     ecx, dword ptr [esp + 0x1C]
        mov     ebx, dword ptr [esp + 0x40]
        mov     dword ptr [ebx], ecx
L6DCF63:
        mov     ebx, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x14]
        add     ebx, 4
        inc     ecx
        mov     dword ptr [esp + 0x40], ebx
        cmp     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x14], ecx
        jge     L6DCFD5
        dec     dword ptr [esp + 0x30]
        jns     L6DCF45
        mov     eax, dword ptr [esp + 0x20]
        mov     ebx, dword ptr [eax + 0x20]
        xor     eax, eax
        sub     esi, ebx
        mov     al, byte ptr [esi]
        mov     ebx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x3C], edx
        mov     edx, dword ptr [esp + 0x28]
        lea     ecx, [ebp - 1]
        mov     dword ptr [esp + 0x30], ecx
        mov     dword ptr [esp + 0x10], eax
        imul    edx, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     al, byte ptr [ebx + esi*1]
        mov     ebx, dword ptr [esp + 0x3C]
        imul    ebx, ecx
        imul    eax, edi
        add     edx, eax
        mov     eax, ebp
        sub     eax, ecx
        mov     ecx, dword ptr [esp + 0x3C]
        imul    eax, edx
        add     eax, ebx
        sub     ecx, edx
        mov     dword ptr [esp + 0x10], ecx
        jmp     L6DCF45
L6DCFD5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1C
        ret
    }
}
