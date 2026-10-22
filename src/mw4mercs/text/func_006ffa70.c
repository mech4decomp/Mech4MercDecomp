/*
 * FUN_006ffa70 (320 B) — GOS game-list push. Looks up the "GName" server
 * name via FUN_006f89f0/FUN_006f5b80, mallocs (IAT 0x76b294) a node, copies
 * the name in, fetches the game GUID via FUN_006f6370, checks the
 * "PasswordProtected" flag via _stricmp (IAT 0x76b2ac), and appends the node
 * to the singly-linked list headed by g_008aab04.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aab04;
extern void * g_0076b294;   /* malloc IAT */
extern void * g_0076b2ac;   /* _stricmp IAT */
extern int __cdecl FUN_006f89f0(void);
extern void * __cdecl FUN_006f5b80(void);
extern int __cdecl FUN_006fabf0(char *);
extern int __cdecl FUN_006f6370(void);
extern int __cdecl FUN_006fab90(char *, int);

__declspec(naked) void FUN_006ffa70(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        push    esi
        call    FUN_006f89f0
        test    eax, eax
        jz      L_fbb0
        mov     eax, dword ptr [ebp + 0x8]
        push    0x79fa10
        push    eax
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        mov     esi, eax
        test    esi, esi
        jnz     L_fabe
        push    0x7a0f64
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L_fbb0
        int     3
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_fabe:
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        add     ecx, 0x5b
        push    ecx
        call    dword ptr [g_0076b294]
        mov     ebx, eax
        xor     eax, eax
        mov     ecx, 0x14
        lea     edi, [ebx + 0x4]
        rep     stosd
        or      ecx, 0xffffffff
        mov     edi, esi
        add     esp, 0x4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebx + 0x59]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [ebp + 0x8]
        lea     ecx, [ebp + -0x10]
        push    ecx
        push    esi
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f6370
        test    al, al
        pop     edi
        jnz     L_fb31
        push    esi
        push    0x7a0f34
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_fb31
        int     3
L_fb31:
        push    0x79fa34
        push    esi
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        test    eax, eax
        jz      L_fb61
        push    0x76ccac
        push    eax
        call    dword ptr [g_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_fb61
        or      dword ptr [ebx + 0x8], 0x400
L_fb61:
        mov     eax, dword ptr [ebp + -0x10]
        lea     edx, [ebx + 0xc]
        mov     dword ptr [edx], eax
        mov     ecx, dword ptr [ebp + -0xc]
        mov     dword ptr [edx + 0x4], ecx
        mov     eax, dword ptr [ebp + -0x8]
        mov     dword ptr [edx + 0x8], eax
        mov     ecx, dword ptr [ebp + -0x4]
        mov     dword ptr [edx + 0xc], ecx
        mov     ecx, dword ptr [g_008aab04]
        test    ecx, ecx
        mov     dword ptr [ebx + 0x54], 0x0
        mov     dword ptr [ebx], 0x0
        jz      L_fbaa
L_fb92:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_fba0
L_fb98:
        mov     ecx, eax
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jnz     L_fb98
L_fba0:
        pop     esi
        mov     dword ptr [ecx], ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_fbaa:
        mov     dword ptr [g_008aab04], ebx
L_fbb0:
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
