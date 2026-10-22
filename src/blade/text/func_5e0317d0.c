/*
 * _strcmp (129 B) - statically-linked CRT strcmp copy.
 * Classic MSVC word-at-a-time strcmp with alignment handling.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e0317d0(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        mov     ecx, dword ptr [esp+8]
        test    edx, 3
        jnz     L181c
    L17e0:
        mov     eax, dword ptr [edx]
        cmp     al, byte ptr [ecx]
        jnz     L1814
        or      al, al
        jz      L1810
        cmp     ah, byte ptr [ecx+1]
        jnz     L1814
        or      ah, ah
        jz      L1810
        shr     eax, 0x10
        cmp     al, byte ptr [ecx+2]
        jnz     L1814
        or      al, al
        jz      L1810
        cmp     ah, byte ptr [ecx+3]
        jnz     L1814
        add     ecx, 4
        add     edx, 4
        or      ah, ah
        jnz     L17e0
        mov     edi, edi
    L1810:
        xor     eax, eax
        ret
        nop
    L1814:
        sbb     eax, eax
        shl     eax, 1
        inc     eax
        ret
        mov     edi, edi
    L181c:
        test    edx, 1
        jz      L1838
        mov     al, byte ptr [edx]
        inc     edx
        cmp     al, byte ptr [ecx]
        jnz     L1814
        inc     ecx
        or      al, al
        jz      L1810
        test    edx, 2
        jz      L17e0
    L1838:
        mov     ax, word ptr [edx]
        add     edx, 2
        cmp     al, byte ptr [ecx]
        jnz     L1814
        or      al, al
        jz      L1810
        cmp     ah, byte ptr [ecx+1]
        jnz     L1814
        or      ah, ah
        jz      L1810
        add     ecx, 2
        jmp     L17e0
    }
}
