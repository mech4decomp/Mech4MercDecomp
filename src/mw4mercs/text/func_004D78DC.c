/*
 * FUN_004D78DC (230 B) — in-.text data block function (block 0x4D78DC).
 * Searches a fixed-size element array (stride 0xa4) for a matching id,
 * then shifts entries down and calls FUN_004d7da0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d7da0(void);

__declspec(naked) void FUN_004D78DC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [edx + 0x17bc]
        push    ebx
        push    esi
        xor     ecx, ecx
        test    eax, eax
        push    edi
        jle     L790C
        mov     edi, dword ptr [esp + 0x14]
        lea     esi, [edx + 0x1f8]
L78FD:
        cmp     dword ptr [esi], edi
        je      L790C
        inc     ecx
        add     esi, 0xa4
        cmp     ecx, eax
        jl      L78FD
L790C:
        cmp     ecx, eax
        jne     L7918
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0x14
L7918:
        lea     esi, [ecx + ecx*4]
        lea     ecx, [ecx + esi*8]
        lea     ebx, [edx + ecx*4]
        dec     eax
        mov     dword ptr [edx + 0x17bc], eax
        lea     ecx, [eax + eax*4]
        lea     eax, [eax + ecx*8]
        or      ecx, 0xffffffff
        lea     edi, [edx + eax*4 + 0x158]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        push    ebp
        lea     ebp, [ebx + 0x158]
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [edx + 0x17bc]
        lea     ecx, [eax + eax*4]
        lea     eax, [eax + ecx*8]
        or      ecx, 0xffffffff
        lea     edi, [edx + eax*4 + 0x1a8]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     ebp, [ebx + 0x1a8]
        mov     esi, edi
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [edx + 0x17bc]
        lea     ecx, [eax + eax*4]
        lea     eax, [eax + ecx*8]
        mov     ecx, dword ptr [edx + eax*4 + 0x1f8]
        mov     dword ptr [ebx + 0x1f8], ecx
        mov     al, byte ptr [edx + 0x17b8]
        test    al, al
        pop     ebp
        je      L79BA
        mov     ecx, edx
        call    FUN_004d7da0
L79BA:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret     0x14
    }
}
