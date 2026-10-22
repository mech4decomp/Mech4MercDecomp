/*
 * FUN_0074BBDC (227 B true extent; 228 B slice incl. trailing NOP) —
 * in-.text data block function (block 0x74BB40). Starts with 3 data bytes
 * (00 00 40), then real code using IAT callbacks (0x76b294, 0x76b0e4,
 * 0x76b2d0, 0x76b0ec) and FUN_0074bfd0 / FUN_0074bcc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074bfd0(void);
extern void __cdecl FUN_0074bcc0(void);

extern void (__cdecl *g_0076b294)(void);   /* IAT @ 0x76b294 */
extern void (__cdecl *g_0076b0e4)(void);   /* IAT @ 0x76b0e4 */
extern void (__cdecl *g_0076b2d0)(void);   /* IAT @ 0x76b2d0 */
extern void (__cdecl *g_0076b0ec)(void);   /* fn ptr @ 0x76b0ec */

extern char g_7ab0f4[];   /* string @ 0x7ab0f4 */
extern char g_7ab404[];   /* string @ 0x7ab404 */
extern int  g_008b8e4c;   /* DAT_008b8e4c */

__declspec(naked) void FUN_0074BBDC(void)
{
    __asm {
        __emit 0x00   /* __emit: data bytes (00 00 40) at function entry, not real code */
        __emit 0x00
        __emit 0x40
        lea     ecx, [esp + 0x2c]
        push    ecx
        call    ebx
        push    0x100000
        mov     edi, eax
        mov     dword ptr [esp + 0x14], 0x2fe
        call    dword ptr [g_0076b294]
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      LBC2D
        push    esi
        push    offset g_7ab0f4
        call    FUN_0074bfd0
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        push    esi
        push    edi
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_0076b0e4]
        push    esi
        call    dword ptr [g_0076b2d0]
        add     esp, 4
LBC2D:
        push    edi
        call    dword ptr [g_0076b0ec]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7ab404
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x14]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        repne scasb
        push    eax
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep movsd
        push    0x4000000
        push    3
        push    eax
        push    3
        push    eax
        mov     ecx, ebp
        lea     eax, [esp + 0x130]
        and     ecx, 3
        push    eax
        rep movsb
        call    ebx
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_008b8e4c], eax
        pop     ebx
        jne     LBCB8
        call    FUN_0074bcc0
        or      eax, 0xffffffff
LBCB8:
        add     esp, 0x20c
        ret
    }
}
