/*
 * FUN_10002410 (99 B) - __stdcall, RET 0x8.
 * Decimal string-to-integer parser with optional leading '-' sign.
 * Stores the parsed value through arg2; returns 0 on success or
 * 0xc112000c on a malformed digit.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10002410(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     al, byte ptr [esi]
        xor     edx, edx
        xor     ecx, ecx
        xor     bl, bl
        test    al, al
        je      L_2466
    L_2422:
        inc     esi
        cmp     al, 0x2d
        je      L_2437
        cmp     al, 0x2f
        jle     L_245c
        cmp     al, 0x39
        jg      L_245c
        movsx   ecx, al
        sub     ecx, 0x30
        jmp     L_243d
    L_2437:
        test    bl, bl
        jne     L_245c
        mov     bl, 1
    L_243d:
        lea     eax, [edx + edx*4]
        lea     edx, [ecx + eax*2]
        mov     al, byte ptr [esi]
        test    al, al
        jne     L_2422
        test    bl, bl
        je      L_2466
        mov     ecx, dword ptr [esp + 0x10]
        neg     edx
        pop     esi
        mov     dword ptr [ecx], edx
        xor     eax, eax
        pop     ebx
        ret     0x8
    L_245c:
        pop     esi
        mov     eax, 0xc112000c
        pop     ebx
        ret     0x8
    L_2466:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        mov     dword ptr [eax], edx
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
