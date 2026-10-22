/*
 * FUN_100115d0 (564 B, __thiscall RET 0x4) - Appends two global wide
 * strings (0x100265dc "debug_server_response_v1", 0x100265cc "_clr") to
 * a growable wide-string buffer (param_1: {ptr, ?, len, cap, grow}).
 * Reallocates via malloc/free when capacity is exceeded.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;   /* IAT: wcslen */
extern void *g_100210f8;   /* IAT: malloc */
extern void *g_100210ec;   /* IAT: free */
extern unsigned short g_100265dc; /* wide string data */
extern unsigned short g_100265cc; /* wide string data */

__declspec(naked) void __cdecl FUN_100115d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x148]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L_116ee
        mov     eax, 0x100265dc
        test    eax, eax
        jz      L_116ee
        cmp     word ptr [g_100265dc], di
        jz      L_116ee
        push    eax
        call    dword ptr [g_100210f4]      /* wcslen */
        mov     esi, eax
        add     esp, 4
        shl     esi, 1
        mov     dword ptr [esp + 0x14], esi
        jz      L_116ee
        mov     ecx, dword ptr [ebp + 0xc]
        lea     eax, [esi + ecx + 2]
        mov     ecx, dword ptr [ebp + 0x10]
        cmp     eax, ecx
        jbe     L_116b1
        mov     edx, dword ptr [ebp + 0x14]
        add     eax, edx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]      /* malloc */
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jnz     L_11668
        cmp     dword ptr [ebp + 0xc], edi
        jbe     L_1165a
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_1165a
        push    eax
        call    dword ptr [g_100210ec]      /* free */
        add     esp, 4
    L_1165a:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_116ee
    L_11668:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_116ae
        mov     esi, dword ptr [ebp]
        mov     eax, ecx
        mov     edi, ebx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        xor     eax, eax
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
    L_116ae:
        mov     dword ptr [ebp], ebx
    L_116b1:
        mov     edi, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, esi
        mov     esi, 0x100265dc
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
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     byte ptr [edx + eax + 1], 0
    L_116ee:
        mov     ecx, 0x100265cc
        test    ecx, ecx
        jz      L_117fb
        cmp     word ptr [g_100265cc], 0
        jz      L_117fb
        push    ecx
        call    dword ptr [g_100210f4]      /* wcslen */
        mov     esi, eax
        add     esp, 4
        shl     esi, 1
        mov     dword ptr [esp + 0x14], esi
        jz      L_117fb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [esi + edx + 2]
        cmp     eax, ecx
        jbe     L_117be
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]      /* malloc */
        mov     ebx, eax
        xor     edi, edi
        add     esp, 4
        cmp     ebx, edi
        jnz     L_11775
        cmp     dword ptr [ebp + 0xc], edi
        jbe     L_11763
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_11763
        push    eax
        call    dword ptr [g_100210ec]      /* free */
        add     esp, 4
    L_11763:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
    L_11775:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_117bb
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
    L_117bb:
        mov     dword ptr [ebp], ebx
    L_117be:
        mov     edi, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, esi
        mov     esi, 0x100265cc
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
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     byte ptr [edx + eax + 1], 0
    L_117fb:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
    }
}
