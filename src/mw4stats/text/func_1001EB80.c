/*
 * FUN_1001eb80 (568 B) - __stdcall (2 args, RET 0x8). Appends two wide
 * string constants (<debug_server_response_v__1__> and <_clr>) to a growable
 * buffer described by param_2[0..5] (ptr, ?, size, cap, grow). Uses
 * wcslen/malloc/free and rep movsd/stosd copies.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;        /* IAT: wcslen */
extern void *g_100210f8;        /* IAT: malloc */
extern void *g_100210ec;        /* IAT: free */
extern unsigned short g_100265dc;  /* <debug_server_response_v__1__> */
extern unsigned short g_100265cc;  /* <_clr> */

__declspec(naked) void __cdecl FUN_1001eb80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0xcc]
        push    esi
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        jz      L_eca2
        mov     ecx, offset g_100265dc
        test    ecx, ecx
        jz      L_eca2
        cmp     word ptr [g_100265dc], di
        jz      L_eca2
        push    ecx
        call    dword ptr [g_100210f4]
        mov     esi, eax
        add     esp, 0x4
        shl     esi, 0x1
        mov     dword ptr [esp + 0x14], esi
        jz      L_eca2
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [esi + edx*0x1 + 0x2]
        cmp     eax, ecx
        jbe     L_ec65
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     ebx, eax
        add     esp, 0x4
        cmp     ebx, edi
        jnz     L_ec1c
        cmp     dword ptr [ebp + 0xc], edi
        jbe     L_ec0e
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_ec0e
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L_ec0e:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_eca2
L_ec1c:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_ec62
        mov     esi, dword ptr [ebp]
        mov     edx, ecx
        mov     edi, ebx
        xor     eax, eax
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebx*0x1]
        mov     edx, ecx
        shr     ecx, 0x2
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     esi, dword ptr [esp + 0x18]
        add     esp, 0x4
L_ec62:
        mov     dword ptr [ebp], ebx
L_ec65:
        mov     edi, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, esi
        mov     esi, offset g_100265dc
        mov     edx, ecx
        add     edi, eax
        shr     ecx, 0x2
        rep movsd
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [eax + ecx*0x1], 0x0
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     byte ptr [edx + eax*0x1 + 0x1], 0x0
L_eca2:
        mov     ecx, offset g_100265cc
        test    ecx, ecx
        jz      L_edaf
        cmp     word ptr [g_100265cc], 0x0
        jz      L_edaf
        push    ecx
        call    dword ptr [g_100210f4]
        mov     esi, eax
        add     esp, 0x4
        shl     esi, 0x1
        mov     dword ptr [esp + 0x14], esi
        jz      L_edaf
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        lea     eax, [esi + edx*0x1 + 0x2]
        cmp     eax, ecx
        jbe     L_ed72
        mov     ecx, dword ptr [ebp + 0x14]
        add     eax, ecx
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_100210f8]
        mov     ebx, eax
        xor     edi, edi
        add     esp, 0x4
        cmp     ebx, edi
        jnz     L_ed29
        cmp     dword ptr [ebp + 0xc], edi
        jbe     L_ed17
        mov     eax, dword ptr [ebp]
        cmp     eax, edi
        jz      L_ed17
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 0x4
L_ed17:
        mov     dword ptr [ebp], edi
        mov     dword ptr [ebp + 0x10], edi
        mov     dword ptr [ebp + 0xc], edi
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x8
L_ed29:
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, edi
        jbe     L_ed6f
        mov     esi, dword ptr [ebp]
        mov     edx, ecx
        mov     edi, ebx
        xor     eax, eax
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + ebx*0x1]
        mov     edx, ecx
        shr     ecx, 0x2
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        mov     eax, dword ptr [ebp]
        push    eax
        call    dword ptr [g_100210ec]
        mov     esi, dword ptr [esp + 0x18]
        add     esp, 0x4
L_ed6f:
        mov     dword ptr [ebp], ebx
L_ed72:
        mov     edi, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, esi
        mov     esi, offset g_100265cc
        mov     edx, ecx
        add     edi, eax
        shr     ecx, 0x2
        rep movsd
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp + 0xc]
        add     ecx, eax
        mov     dword ptr [ebp + 0xc], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp]
        mov     byte ptr [eax + ecx*0x1], 0x0
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0xc]
        mov     byte ptr [edx + eax*0x1 + 0x1], 0x0
L_edaf:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
