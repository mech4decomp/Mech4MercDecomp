/*
 * FUN_0060FCF0 (316 B) — __thiscall. Animation-blend registration: walks
 * linked lists (via XOR-obfuscated pointers at DAT_007dab44/40 and
 * DAT_007f27dc) and registers entries into this object's slot arrays at
 * +0x808 (keyed by +0xc04 counter) with tags 0x20/0x9e4/0x17c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */
extern int g_7f27dc;   /* DAT_007f27dc */
extern void __cdecl FUN_0060fe30(void);
extern void __cdecl FUN_0041fcd0(void *ptr);

__declspec(naked) void __fastcall FUN_0060FCF0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_0060fe30
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0xc]
        jz      L_FD76
L_FD15:
        mov     edi, dword ptr [eax]
        xor     edi, 0x85739531
        mov     eax, dword ptr [edi + 0x54]
        test    eax, eax
        mov     ebx, 0x20
        jz      L_FD4C
        push    eax
        mov     eax, dword ptr [esi + 0xc04]
        lea     ecx, [esi + eax*8 + 0x10]
        call    FUN_0041fcd0
        mov     ecx, dword ptr [esi + 0xc04]
        mov     dword ptr [esi + ecx*4 + 0x808], ebx
        inc     dword ptr [esi + 0xc04]
L_FD4C:
        mov     edi, dword ptr [edi + 0x50]
        test    edi, edi
        jz      L_FD76
        mov     edx, dword ptr [esi + 0xc04]
        push    edi
        lea     ecx, [esi + edx*8 + 0x10]
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0xc04]
        mov     dword ptr [esi + eax*4 + 0x808], ebx
        inc     dword ptr [esi + 0xc04]
L_FD76:
        mov     eax, dword ptr [g_7f27dc]
        test    eax, eax
        jz      L_FE28
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        jz      L_FE28
        mov     edi, 0x1e
        mov     ebx, 0x9e4
        jmp     L_FD9F
L_FD9A:
        mov     eax, dword ptr [g_7f27dc]
L_FD9F:
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi + 0xc04]
        push    ecx
        lea     ecx, [esi + edx*8 + 0x10]
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0xc04]
        mov     dword ptr [esi + eax*4 + 0x808], ebx
        mov     ecx, dword ptr [esi + 0xc04]
        inc     ecx
        dec     edi
        mov     dword ptr [esi + 0xc04], ecx
        jnz     L_FD9A
        mov     ecx, dword ptr [g_7f27dc]
        mov     eax, dword ptr [ecx + 0x4]
        mov     edi, dword ptr [eax + 0x34c]
        add     eax, 0x34c
        mov     ebx, 0x17c
L_FDE8:
        test    edi, edi
        jz      L_FE28
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 0x4]
        jz      L_FE28
        mov     edx, dword ptr [esi + 0xc04]
        push    eax
        lea     ecx, [esi + edx*8 + 0x10]
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0xc04]
        mov     dword ptr [esi + eax*4 + 0x808], ebx
        mov     ecx, dword ptr [esi + 0xc04]
        inc     ecx
        mov     eax, ecx
        cmp     eax, 0xff
        mov     dword ptr [esi + 0xc04], ecx
        jnz     L_FDE8
L_FE28:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
