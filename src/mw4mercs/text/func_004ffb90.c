/*
 * FUN_004ffb90 (412 B) — MLR/Adept TCP receive/parse loop. recv()s into a
 * global buffer (0x7dc958), parses "name:value" pairs (strchr/_mbschr),
 * converts the value with atoi and reports via FUN_004ff9e0, then memmoves
 * the remainder. On failure closes the socket and signals FUN_004ff5e0(3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007dc958[];                /* global receive buffer */
extern void *g_0076b308;                 /* strchr IAT */
extern void *g_0076b2a4;                 /* _mbschr IAT */
extern void *g_0076b318;                 /* atoi IAT */
extern void *g_0076b28c;                 /* memmove IAT */
extern int __cdecl FUN_0075dffe(void);   /* recv */
extern void __cdecl FUN_004ff9e0(void);
extern int __cdecl FUN_0075dfb0(void);   /* closesocket */
extern void __cdecl FUN_004ff5e0(void);
extern void __cdecl FUN_00500040(void);

__declspec(naked) void FUN_004ffb90(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        mov     ebx, dword ptr [esp+0x38]
        push    ebp
        push    esi
        push    edi
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     edi, offset g_007dc958
        repne scasb
        mov     edi, dword ptr [ebx+0x88]
        not     ecx
        push    eax
        dec     ecx
        mov     esi, ecx
        mov     eax, 0x7ff
        sub     eax, esi
        push    eax
        lea     ecx, [esi+g_007dc958]
        push    ecx
        push    edi
        call    FUN_0075dffe
        cmp     eax, -0x1
        jz      L_fail
        test    eax, eax
        jz      L_fail
        mov     byte ptr [eax+esi+g_007dc958], 0x0
        mov     al, byte ptr [g_007dc958]
        test    al, al
        mov     ebp, offset g_007dc958
        jz      L_break
L_loop:
        cmp     byte ptr [ebp+0x1], 0x66
        jz      L_close
        mov     eax, dword ptr [ebx+0x74]
        test    eax, eax
        jnz     L_close
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xe
        jc      L_break
        lea     esi, [ebp+0x4]
        push    0x3a
        push    esi
        call    dword ptr [g_0076b308]
        add     esp, 0x8
        test    eax, eax
        jz      L_break
        push    0x5c
        push    esi
        call    dword ptr [g_0076b2a4]
        add     esp, 0x8
        test    eax, eax
        jz      L_break
        mov     al, byte ptr [esi]
        test    al, al
        lea     ecx, [esp+0x20]
        jz      L_skip1
L_char1:
        cmp     al, 0x3a
        jz      L_skip1
        mov     byte ptr [ecx], al
        mov     al, byte ptr [esi+0x1]
        inc     ecx
        inc     esi
        test    al, al
        jnz     L_char1
L_skip1:
        mov     al, byte ptr [esi+0x1]
        inc     esi
        test    al, al
        mov     byte ptr [ecx], 0x0
        lea     ecx, [esp+0x10]
        jz      L_skip2
L_char2:
        cmp     al, 0x5c
        jz      L_skip2
        mov     byte ptr [ecx], al
        mov     al, byte ptr [esi+0x1]
        inc     ecx
        inc     esi
        test    al, al
        jnz     L_char2
L_skip2:
        lea     edx, [esp+0x10]
        push    edx
        mov     byte ptr [ecx], 0x0
        mov     ebp, esi
        call    dword ptr [g_0076b318]
        push    eax
        lea     eax, [esp+0x28]
        push    eax
        push    ebx
        call    FUN_004ff9e0
        mov     al, byte ptr [esi]
        add     esp, 0x10
        test    al, al
        jnz     L_loop
L_break:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        push    ecx
        push    ebp
        push    offset g_007dc958
        call    dword ptr [g_0076b28c]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x30
        ret
L_close:
        mov     ecx, dword ptr [ebx+0x88]
        push    ecx
        call    FUN_0075dfb0
        push    0x3
        push    ebx
        mov     dword ptr [ebx+0x88], 0xffffffff
        mov     byte ptr [g_007dc958], 0x0
        call    FUN_004ff5e0
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x30
        ret
L_fail:
        push    edi
        call    FUN_0075dfb0
        push    ebx
        mov     dword ptr [ebx+0x88], 0xffffffff
        mov     byte ptr [g_007dc958], 0x0
        call    FUN_00500040
        push    0x3
        push    ebx
        call    FUN_004ff5e0
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x3
        pop     ebx
        add     esp, 0x30
        ret
    }
}
