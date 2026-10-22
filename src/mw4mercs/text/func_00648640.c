/*
 * FUN_00648640 (134 B) — Looks up the string at 0x7f3254 in a hash table
 * indexed by string length (table base 0x7b5860). On match stores the
 * table entry's second field into 0x8058ac and returns 1; else 0.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7f3254[];
extern int  g_7b5860[];
extern int  g_8058ac;

__declspec(naked) int __cdecl FUN_00648640(void)
{
    __asm {
        push    ebx
        push    esi
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        mov     edi, offset g_7f3254
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x2
        jl      l_af
        cmp     ecx, 0xb
        jg      l_af
        mov     ecx, dword ptr [ecx*4 + g_7b5860]
        test    ecx, ecx
        jz      l_af
        mov     edi, ecx
    l_69:
        mov     esi, dword ptr [edi]
        test    esi, esi
        jz      l_af
    l_6f:
        mov     eax, offset g_7f3254
    l_74:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_9c
        test    cl, cl
        jz      l_98
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     l_9c
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     l_74
    l_98:
        xor     eax, eax
        jmp     l_a1
    l_9c:
        sbb     eax, eax
        sbb     eax, -0x1
    l_a1:
        test    eax, eax
        jz      l_b5
        mov     esi, dword ptr [edi + 0x8]
        add     edi, 0x8
        test    esi, esi
        jnz     l_6f
    l_af:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    l_b5:
        mov     eax, dword ptr [edi + 0x4]
        pop     edi
        pop     esi
        mov     dword ptr [g_8058ac], eax
        mov     eax, 0x1
        pop     ebx
        ret
    }
}
