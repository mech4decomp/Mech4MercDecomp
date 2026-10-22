/*
 * FUN_10011e20 (266 B, __thiscall RET 0x4) - Formats param_1 into a
 * wide-string buffer at this+0x18 via _snwprintf, then appends the
 * result to the growable wide-string buffer (this: {ptr, ?, len, cap,
 * grow}), reallocating via malloc/free when capacity is exceeded.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021100;   /* IAT: _snwprintf */
extern void *g_100210f8;   /* IAT: malloc */
extern void *g_100210ec;   /* IAT: free */

__declspec(naked) void __cdecl FUN_10011e20(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    ecx
        lea     eax, [ebp + 0x18]
        push    0x10026250
        push    0x40
        push    eax
        call    dword ptr [g_10021100]      /* _snwprintf */
        mov     esi, eax
        add     esp, 0x10
        shl     esi, 1
        mov     dword ptr [esp + 0x14], esi
        jz      L_11f23
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [edx + esi + 2]
        cmp     eax, ecx
        jbe     L_11ee8
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]      /* malloc */
        mov     ebx, eax
        xor     edi, edi
        add     esp, 4
        cmp     ebx, edi
        jnz     L_11e9f
        cmp     dword ptr [ebp + 0xc], edi
        jbe     L_11e8f
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_11e8f
        push    eax
        call    dword ptr [g_100210ec]      /* free */
        add     esp, 4
    L_11e8f:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    L_11e9f:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_11ee5
        mov     esi, dword ptr [ebp]
        mov     edx, ecx
        mov     edi, ebx
        xor     eax, eax
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebx]
        mov     edx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]      /* free */
        mov     esi, dword ptr [esp + 0x18]
        add     esp, 4
    L_11ee5:
        mov     dword ptr [ebp], ebx
    L_11ee8:
        mov     edi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     ecx, esi
        lea     esi, [ebp + 0x18]
        mov     edx, ecx
        add     edi, eax
        shr     ecx, 2
        rep movsd
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [eax + ecx], 0
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp]
        mov     byte ptr [edx + eax + 1], 0
    L_11f23:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
