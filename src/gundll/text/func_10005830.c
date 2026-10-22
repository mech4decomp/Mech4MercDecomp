/*
 * FUN_10005830 (399 B) - __stdcall, RET 0xc.
 * Validates flags/pointers, searches a hash table (indirect vtable calls),
 * increments/decrements reference counts and walks sub-tables calling
 * FUN_100059c0 to validate entries.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern char __cdecl FUN_100059c0(void);      /* rel32 call, 3 args */

__declspec(naked) void __stdcall FUN_10005830(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        mov     cl, byte ptr [eax + 0x14]
        test    cl, cl
        push    ebx
        push    ebp
        push    esi
        push    edi
        jnz     L_584d
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120008
        pop     ebx
        pop     ecx
        ret     0xc
    L_584d:
        mov     ebp, dword ptr [eax + 0x7c]
        test    ebp, ebp
        mov     dword ptr [esp + 0x10], ebp
        jnz     L_5865
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120008
        pop     ebx
        pop     ecx
        ret     0xc
    L_5865:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jnz     L_587a
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        pop     ecx
        ret     0xc
    L_587a:
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        call    dword ptr [ebp + 0xc]
        and     ax, word ptr [ebp + 0x2]
        mov     ecx, dword ptr [ebp + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      L_58e0
        /* __emit: 6-byte alignment NOP (LEA EBX,[EBX]); MSVC6 collapses to 8D 1B */
        __emit 0x8D
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_58a0:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_58bb
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esi + 0x8]
        push    ecx
        push    ebx
        call    dword ptr [ebp + 0x8]
        test    al, al
        jnz     L_58ce
        mov     ebp, dword ptr [esp + 0x10]
    L_58bb:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_58a0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120c01
        pop     ebx
        pop     ecx
        ret     0xc
    L_58ce:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jz      L_58dc
        push    ebx
        call    eax
    L_58dc:
        test    ebx, ebx
        jnz     L_58ed
    L_58e0:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120c01
        pop     ebx
        pop     ecx
        ret     0xc
    L_58ed:
        mov     edx, dword ptr [ebx + 0x28]
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebx], ax
        mov     dword ptr [ebx + 0x28], edx
        mov     dword ptr [esp + 0x10], eax
        jbe     L_5946
        nop
    L_5900:
        mov     edx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + edx]
        add     edi, edx
        cmp     esi, edi
        jz      L_593c
    L_5914:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_5932
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0x8]
        push    eax
        push    esi
        push    ecx
        call    FUN_100059c0
        test    al, al
        jz      L_59b2
    L_5932:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_5914
        mov     eax, dword ptr [esp + 0x10]
    L_593c:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        jc      L_5900
    L_5946:
        mov     ecx, dword ptr [ebx + 0x28]
        mov     eax, dword ptr [esp + 0x1c]
        dec     ecx
        test    eax, eax
        mov     dword ptr [ebx + 0x28], ecx
        jnz     L_59b5
        mov     edx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [edx + 0x78]
        mov     edx, dword ptr [ebx + 0x28]
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebx], ax
        mov     dword ptr [ebx + 0x28], edx
        mov     dword ptr [esp + 0x1c], eax
        jbe     L_59b2
        mov     edi, edi
    L_5970:
        mov     edx, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 0x4
        mov     esi, dword ptr [edi + edx]
        add     edi, edx
        cmp     esi, edi
        jz      L_59a8
    L_5984:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_599e
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esi + 0x8]
        push    eax
        push    esi
        push    ecx
        call    FUN_100059c0
        test    al, al
        jz      L_59b2
    L_599e:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_5984
        mov     eax, dword ptr [esp + 0x1c]
    L_59a8:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x1c], eax
        jc      L_5970
    L_59b2:
        dec     dword ptr [ebx + 0x28]
    L_59b5:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
