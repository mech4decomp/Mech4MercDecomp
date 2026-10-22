/*
 * FUN_10005750 (209 B) - __stdcall, RET 0xc.
 * Validates flags/pointers, searches a hash table (indirect vtable calls),
 * and returns a count (param_2[0] = node count, possibly plus a base count).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10005750(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        mov     cl, byte ptr [eax + 0x14]
        test    cl, cl
        push    ebx
        push    esi
        push    edi
        jnz     L_576b
        pop     edi
        pop     esi
        mov     eax, 0xc1120008
        pop     ebx
        pop     ecx
        ret     0xc
    L_576b:
        mov     ebx, dword ptr [eax + 0x7c]
        test    ebx, ebx
        jnz     L_577e
        pop     edi
        pop     esi
        mov     eax, 0xc1120008
        pop     ebx
        pop     ecx
        ret     0xc
    L_577e:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_5792
        pop     edi
        pop     esi
        mov     eax, 0x80004003
        pop     ebx
        pop     ecx
        ret     0xc
    L_5792:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    dword ptr [ebx + 0xc]
        and     ax, word ptr [ebx + 0x2]
        mov     ecx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      L_57f1
    L_57b2:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_57cd
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0x8]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x14], eax
        call    dword ptr [ebx + 0x8]
        test    al, al
        jnz     L_57df
    L_57cd:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_57b2
        pop     edi
        pop     esi
        mov     eax, 0xc1120c01
        pop     ebx
        pop     ecx
        ret     0xc
    L_57df:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        mov     esi, dword ptr [esp + 0xc]
        jz      L_57ed
        push    esi
        call    ebx
    L_57ed:
        test    esi, esi
        jnz     L_57fd
    L_57f1:
        pop     edi
        pop     esi
        mov     eax, 0xc1120c01
        pop     ebx
        pop     ecx
        ret     0xc
    L_57fd:
        mov     ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        mov     eax, dword ptr [esi + 0x24]
        jnz     L_5812
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edx + 0x78]
        add     eax, dword ptr [ecx + 0x24]
    L_5812:
        mov     edx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        mov     dword ptr [edx], eax
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
