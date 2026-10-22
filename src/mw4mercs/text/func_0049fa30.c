/*
 * FUN_0049fa30 (417 B) - MLR particle/flare/debris index-buffer builder
 * (__thiscall, RET 0x4, one short* arg). Writes a series of 16-bit index
 * words into the caller's buffer, iterating over particle counts and a
 * per-particle flag at [edi+0x230]. Two code paths depending on
 * [edi+0x22c] == 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0049fa30(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        cmp     dword ptr [edi + 0x22c], 0x4
        mov     ebx, dword ptr [edi + 0x238]
        mov     dword ptr [esp + 0x1c], edi
        jz      LFB2A
        mov     ebp, dword ptr [edi + 0x228]
        xor     esi, esi
        dec     ebp
        cmp     ebp, esi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x14], ebp
        jle     LFBC7
LFA6A:
        mov     eax, dword ptr [esp + 0x24]
LFA6E:
        lea     edx, [ebx - 1]
        xor     ecx, ecx
        test    edx, edx
        jbe     LFB07
        mov     dl, byte ptr [edi + 0x230]
        mov     byte ptr [esp + 0x13], dl
LFA85:
        mov     dl, byte ptr [esp + 0x13]
        test    dl, dl
        jz      LFABA
        lea     edx, [esi + ecx + 1]
        mov     word ptr [eax], dx
        add     eax, 0x2
        lea     edx, [esi + ecx]
        mov     word ptr [eax], dx
        lea     edi, [esi + ebx]
        add     eax, 0x2
        lea     ebp, [edi + ecx + 1]
        mov     word ptr [eax], bp
        add     eax, 0x2
        add     edi, ecx
        mov     word ptr [eax], di
        add     eax, 0x2
        mov     word ptr [eax], bp
        jmp     LFAE6
LFABA:
        add     eax, 0x2
        lea     edx, [esi + ecx]
        mov     word ptr [eax - 2], dx
        lea     edi, [esi + ecx + 1]
        mov     word ptr [eax], di
        add     eax, 0x2
        lea     edi, [esi + ebx]
        lea     ebp, [edi + ecx + 1]
        mov     word ptr [eax], bp
        add     eax, 0x2
        mov     word ptr [eax], bp
        add     eax, 0x2
        add     edi, ecx
        mov     word ptr [eax], di
LFAE6:
        add     eax, 0x2
        mov     word ptr [eax], dx
        add     eax, 0x2
        inc     ecx
        mov     edi, ecx
        and     edi, 0xffff
        lea     edx, [ebx - 1]
        cmp     edi, edx
        jc      LFA85
        mov     edi, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x14]
LFB07:
        mov     ecx, dword ptr [esp + 0x18]
        inc     ecx
        mov     dword ptr [esp + 0x18], ecx
        and     ecx, 0xffff
        add     esi, ebx
        cmp     ecx, ebp
        jl      LFA6E
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
LFB2A:
        mov     eax, dword ptr [edi + 0x228]
        xor     ebp, ebp
        dec     eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jle     LFBC7
        mov     al, byte ptr [edi + 0x230]
        mov     byte ptr [esp + 0x13], al
        mov     eax, dword ptr [esp + 0x24]
        xor     ecx, ecx
LFB4F:
        xor     esi, esi
LFB51:
        mov     dl, byte ptr [esp + 0x13]
        test    dl, dl
        jz      LFB7E
        lea     edx, [ecx + esi + 1]
        mov     word ptr [eax], dx
        add     eax, 0x2
        mov     word ptr [eax], cx
        add     eax, 0x2
        lea     edx, [ecx + esi + 6]
        mov     word ptr [eax], dx
        add     eax, 0x2
        lea     edi, [ecx + 5]
        mov     word ptr [eax], di
        add     eax, 0x2
        jmp     LFBA1
LFB7E:
        mov     word ptr [eax], cx
        add     eax, 0x2
        lea     edx, [ecx + esi + 1]
        mov     word ptr [eax], dx
        add     eax, 0x2
        lea     edx, [ecx + esi + 6]
        mov     word ptr [eax], dx
        add     eax, 0x2
        mov     word ptr [eax], dx
        add     eax, 0x2
        lea     edx, [ecx + 5]
LFBA1:
        mov     word ptr [eax], dx
        add     eax, 0x2
        mov     word ptr [eax], cx
        add     eax, 0x2
        inc     esi
        cmp     si, 0x4
        jc      LFB51
        mov     esi, dword ptr [esp + 0x14]
        inc     ebp
        mov     edx, ebp
        and     edx, 0xffff
        add     ecx, ebx
        cmp     edx, esi
        jl      LFB4F
LFBC7:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
