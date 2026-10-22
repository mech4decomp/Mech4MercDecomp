/*
 * FUN_10002480 (108 B) - __stdcall, RET 0x8.
 * Wide-string to integer parser: parses an optional leading '-' followed
 * by decimal digits, stores the value in *param_2, returns 0 on success
 * or 0xc112000c on malformed input.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10002480(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     ax, word ptr [edx]
        push    ebx
        push    esi
        xor     ecx, ecx
        xor     esi, esi
        xor     bl, bl
        test    ax, ax
        jz      L_24df
    L_2494:
        movzx   eax, ax
        add     edx, 0x2
        cmp     eax, 0x2d
        jz      L_24ae
        cmp     eax, 0x2f
        jle     L_24d5
        cmp     eax, 0x39
        jg      L_24d5
        lea     esi, [eax - 0x30]
        jmp     L_24b4
    L_24ae:
        test    bl, bl
        jnz     L_24d5
        mov     bl, 0x1
    L_24b4:
        lea     eax, [ecx + ecx*4]
        lea     ecx, [esi + eax*2]
        mov     ax, word ptr [edx]
        test    ax, ax
        jnz     L_2494
        test    bl, bl
        jz      L_24df
        mov     edx, dword ptr [esp + 0x10]
        neg     ecx
        pop     esi
        mov     dword ptr [edx], ecx
        xor     eax, eax
        pop     ebx
        ret     0x8
    L_24d5:
        pop     esi
        mov     eax, 0xc112000c
        pop     ebx
        ret     0x8
    L_24df:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        mov     dword ptr [eax], ecx
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
