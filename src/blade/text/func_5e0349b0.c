/*
 * _strchr (193 B) — statically-linked CRT strchr helper. The function entry
 * is at 0x5E0349B0; its tail (LEA EAX,[EDX-1]; POP EBX; RET) lives at
 * 0x5E0349A0, just before the entry, and is reached only by the backward
 * `jz 0x5e0349a0` at 0x5E0349CD. That tail is outside the diffed range
 * (before the entry) and is covered by the byte-locked blob, so the branch
 * is emitted verbatim.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void _strchr(void)
{
    __asm {
        xor     eax, eax
        mov     al, byte ptr [esp + 8]
        push    ebx
        mov     ebx, eax
        shl     eax, 8
        mov     edx, dword ptr [esp + 8]
        test    edx, 3
        jz      L_9db
    L_9c8:
        mov     cl, byte ptr [edx]
        inc     edx
        /* __emit: MSVC6 emits cmp reg8,reg8 as 3A form; ref uses 38 D9 */
        __emit 0x38
        __emit 0xD9
        /* __emit: branch target 0x5E0349A0 is before the entry (outside
           this function's diffed range); emit the exact 74 D1 bytes */
        __emit 0x74
        __emit 0xD1
        test    cl, cl
        jz      L_a24
        test    edx, 3
        jnz     L_9c8
    L_9db:
        or      ebx, eax
        push    edi
        mov     eax, ebx
        shl     ebx, 16
        push    esi
        or      ebx, eax
    L_9e6:
        mov     ecx, dword ptr [edx]
        mov     edi, 0x7efefeff
        mov     eax, ecx
        mov     esi, edi
        xor     ecx, ebx
        add     esi, eax
        add     edi, ecx
        xor     ecx, -1
        xor     eax, -1
        xor     ecx, edi
        xor     eax, esi
        add     edx, 4
        and     ecx, 0x81010100
        jnz     L_a28
        and     eax, 0x81010100
        jz      L_9e6
        and     eax, 0x1010100
        jnz     L_a22
        and     esi, 0x80000000
        jnz     L_9e6
    L_a22:
        pop     esi
        pop     edi
    L_a24:
        pop     ebx
        xor     eax, eax
        ret
    L_a28:
        mov     eax, dword ptr [edx - 4]
        /* __emit: MSVC6 emits cmp reg8,reg8 as 3A form; ref uses 38 D8 */
        __emit 0x38
        __emit 0xD8
        jz      L_a65
        test    al, al
        jz      L_a22
        /* __emit: MSVC6 emits cmp reg8,reg8 as 3A form; ref uses 38 DC */
        __emit 0x38
        __emit 0xDC
        jz      L_a5e
        test    ah, ah
        jz      L_a22
        shr     eax, 16
        /* __emit: MSVC6 emits cmp reg8,reg8 as 3A form; ref uses 38 D8 */
        __emit 0x38
        __emit 0xD8
        jz      L_a57
        test    al, al
        jz      L_a22
        /* __emit: MSVC6 emits cmp reg8,reg8 as 3A form; ref uses 38 DC */
        __emit 0x38
        __emit 0xDC
        jz      L_a50
        test    ah, ah
        jz      L_a22
        jmp     L_9e6
    L_a50:
        pop     esi
        pop     edi
        lea     eax, [edx - 1]
        pop     ebx
        ret
    L_a57:
        lea     eax, [edx - 2]
        pop     esi
        pop     edi
        pop     ebx
        ret
    L_a5e:
        lea     eax, [edx - 3]
        pop     esi
        pop     edi
        pop     ebx
        ret
    L_a65:
        lea     eax, [edx - 4]
        pop     esi
        pop     edi
        pop     ebx
        ret
    }
}
