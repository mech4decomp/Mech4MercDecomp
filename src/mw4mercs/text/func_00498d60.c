/*
 * FUN_00498d60 (417 B) - MLR particle/flare index-buffer generator.
 * __thiscall (ECX = this), 1 stack arg (short* output), RET 0x4.
 *
 * Fills a triangle-strip index buffer for the particle quad grid. Two
 * paths depending on [this+0x10]->[0x174] == 4 (special 4-row layout vs
 * generic row layout), each with a winding-order flag at [0x178].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00498d60(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        cmp     dword ptr [edi + 0x174], 0x4
        mov     ebx, dword ptr [edi + 0x180]
        mov     dword ptr [esp + 0x1c], edi
        jz      L_e5a
        mov     ebp, dword ptr [edi + 0x170]
        xor     esi, esi
        dec     ebp
        cmp     ebp, esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x14], ebp
        jle     L_ef7
L_d9a:
        mov     eax, dword ptr [esp + 0x24]
L_d9e:
        lea     edx, [ebx - 0x1]
        xor     ecx, ecx
        test    edx, edx
        jbe     L_e37
        mov     dl, byte ptr [edi + 0x178]
        mov     byte ptr [esp + 0x13], dl
L_db5:
        mov     dl, byte ptr [esp + 0x13]
        test    dl, dl
        jz      L_dea
        lea     edx, [esi + ecx*0x1 + 0x1]
        mov     word ptr [eax], dx
        add     eax, 0x2
        lea     edx, [esi + ecx*0x1]
        mov     word ptr [eax], dx
        lea     edi, [esi + ebx*0x1]
        add     eax, 0x2
        lea     ebp, [edi + ecx*0x1 + 0x1]
        mov     word ptr [eax], bp
        add     eax, 0x2
        add     edi, ecx
        mov     word ptr [eax], di
        add     eax, 0x2
        mov     word ptr [eax], bp
        jmp     L_e16
L_dea:
        add     eax, 0x2
        lea     edx, [esi + ecx*0x1]
        mov     word ptr [eax - 0x2], dx
        lea     edi, [esi + ecx*0x1 + 0x1]
        mov     word ptr [eax], di
        add     eax, 0x2
        lea     edi, [esi + ebx*0x1]
        lea     ebp, [edi + ecx*0x1 + 0x1]
        mov     word ptr [eax], bp
        add     eax, 0x2
        mov     word ptr [eax], bp
        add     eax, 0x2
        add     edi, ecx
        mov     word ptr [eax], di
L_e16:
        add     eax, 0x2
        mov     word ptr [eax], dx
        add     eax, 0x2
        inc     ecx
        mov     edi, ecx
        and     edi, 0xffff
        lea     edx, [ebx - 0x1]
        cmp     edi, edx
        jc      L_db5
        mov     edi, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x14]
L_e37:
        mov     ecx, dword ptr [esp + 0x18]
        inc     ecx
        mov     dword ptr [esp + 0x18], ecx
        and     ecx, 0xffff
        add     esi, ebx
        cmp     ecx, ebp
        jl      L_d9e
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
L_e5a:
        mov     eax, dword ptr [edi + 0x170]
        xor     ebp, ebp
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jle     L_ef7
        mov     al, byte ptr [edi + 0x178]
        mov     byte ptr [esp + 0x13], al
        mov     eax, dword ptr [esp + 0x24]
        xor     ecx, ecx
L_e7f:
        xor     esi, esi
L_e81:
        mov     dl, byte ptr [esp + 0x13]
        test    dl, dl
        jz      L_eae
        lea     edx, [ecx + esi*0x1 + 0x1]
        mov     word ptr [eax], dx
        add     eax, 0x2
        mov     word ptr [eax], cx
        add     eax, 0x2
        lea     edx, [ecx + esi*0x1 + 0x6]
        mov     word ptr [eax], dx
        add     eax, 0x2
        lea     edi, [ecx + 0x5]
        mov     word ptr [eax], di
        add     eax, 0x2
        jmp     L_ed1
L_eae:
        mov     word ptr [eax], cx
        add     eax, 0x2
        lea     edx, [ecx + esi*0x1 + 0x1]
        mov     word ptr [eax], dx
        add     eax, 0x2
        lea     edx, [ecx + esi*0x1 + 0x6]
        mov     word ptr [eax], dx
        add     eax, 0x2
        mov     word ptr [eax], dx
        add     eax, 0x2
        lea     edx, [ecx + 0x5]
L_ed1:
        mov     word ptr [eax], dx
        add     eax, 0x2
        mov     word ptr [eax], cx
        add     eax, 0x2
        inc     esi
        cmp     si, 0x4
        jc      L_e81
        mov     esi, dword ptr [esp + 0x14]
        inc     ebp
        mov     edx, ebp
        and     edx, 0xffff
        add     ecx, ebx
        cmp     edx, esi
        jl      L_e7f
L_ef7:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
