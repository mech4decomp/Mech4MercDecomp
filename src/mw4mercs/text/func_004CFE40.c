/*
 * FUN_004CFE40 (223 B true extent; 224 B slice incl. trailing NOP) —
 * in-.text data block function (block 0x4CFCA6). String handling with
 * IAT callbacks (0x76b2b0, 0x76b2a0) and FUN_006fc4d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fc4d0(void);

extern void (__cdecl *g_0076b2b0)(void);   /* IAT @ 0x76b2b0 */
extern void (__cdecl *g_0076b2a0)(void);   /* IAT @ 0x76b2a0 */

extern int  g_007db0a0;   /* DAT_007db0a0 */
extern char g_7723a8[];   /* string @ 0x7723a8 */
extern char g_7b8de8[];   /* buffer @ 0x7b8de8 */
extern char g_007b8ef0;   /* byte @ 0x7b8ef0 */

__declspec(naked) void FUN_004CFE40(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [g_007db0a0]
        push    edi
        push    8
        push    offset g_7723a8
        push    ebp
        call    dword ptr [g_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        je      LFF0B
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [esi + 4]
        mov     edi, dword ptr [ecx + eax*4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_7b8de8
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
LFE90:
        push    0x5c
        push    offset g_7b8de8
        call    dword ptr [g_0076b2a0]
        mov     ebx, eax
        add     esp, 8
        test    ebx, ebx
        je      LFEC5
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     edx, [ebx + 1]
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        jmp     LFEE2
LFEC5:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_7b8de8
        rep movsd
        mov     ecx, edx
LFEE2:
        and     ecx, 3
        push    offset g_7b8de8
        rep movsb
        call    FUN_006fc4d0
        test    al, al
        jne     LFEFD
        test    ebx, ebx
        je      LFF0B
        mov     byte ptr [ebx], al
        jmp     LFE90
LFEFD:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebp
        mov     byte ptr [g_007b8ef0], al
        pop     ebx
        ret     4
LFF0B:
        push    ebp
        mov     byte ptr [g_007b8ef0], 0
        call    FUN_006fc4d0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
