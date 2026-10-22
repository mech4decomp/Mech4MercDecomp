/*
 * FUN_1003eb10 (132 B) - __cdecl.  strcmp-like: compares arg1 vs arg2,
 * returns <0/0/>0.  Fast 4-byte aligned scan with unaligned tail handling.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003eb10(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        test    edx, 3
        jne     L_eb5c
L_eb20:
        mov     eax, dword ptr [edx]
        cmp     al, byte ptr [ecx]
        jne     L_eb54
        or      al, al
        je      L_eb50
        cmp     ah, byte ptr [ecx + 1]
        jne     L_eb54
        or      ah, ah
        je      L_eb50
        shr     eax, 0x10
        cmp     al, byte ptr [ecx + 2]
        jne     L_eb54
        or      al, al
        je      L_eb50
        cmp     ah, byte ptr [ecx + 3]
        jne     L_eb54
        add     ecx, 4
        add     edx, 4
        or      ah, ah
        jne     L_eb20
        mov     edi, edi
L_eb50:
        xor     eax, eax
        ret
        nop
L_eb54:
        sbb     eax, eax
        shl     eax, 1
        inc     eax
        ret
        mov     edi, edi
L_eb5c:
        test    edx, 1
        je      L_eb78
        mov     al, byte ptr [edx]
        inc     edx
        cmp     al, byte ptr [ecx]
        jne     L_eb54
        inc     ecx
        or      al, al
        je      L_eb50
        test    edx, 2
        je      L_eb20
L_eb78:
        mov     ax, word ptr [edx]
        add     edx, 2
        cmp     al, byte ptr [ecx]
        jne     L_eb54
        or      al, al
        je      L_eb50
        cmp     ah, byte ptr [ecx + 1]
        jne     L_eb54
        or      ah, ah
        je      L_eb50
        add     ecx, 2
        jmp     L_eb20
    }
}
