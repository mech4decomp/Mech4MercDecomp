/*
 * FUN_0041e160 (253 B) — path normalization helper. Walks a path string,
 * splitting on '\\' separators, allocating a copy of each component via
 * FUN_004084c0, checking it with FUN_006fc4d0 / FUN_006fb780, and freeing
 * with FUN_004084e0. Returns 1 on success, 0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8810;
extern void *g_0076b2a4;   /* IAT: _mbschr */
extern void *g_0076b320;   /* IAT: strncpy  */

extern void *__cdecl FUN_004084c0(int, int);
extern char __cdecl FUN_006fc4d0(void *);
extern void __cdecl FUN_006fb780(void *);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0041e160(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x10]
        test    esi, esi
        push    edi
        jnz     L173
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
L173:
        cmp     byte ptr [esi], 0x5c
        mov     edi, esi
        jz      L194
        lea     ecx, [esi+1]
        test    ecx, ecx
        jz      L194
        lea     eax, [esi+2]
        test    eax, eax
        jz      L194
        cmp     byte ptr [ecx], 0x3a
        jnz     L194
        cmp     byte ptr [eax], 0x5c
        jnz     L194
        mov     edi, eax
L194:
        cmp     byte ptr [edi], 0x5c
        jz      L1A0
L199:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
L1A0:
        test    edi, edi
        jz      L256
        jmp     L1AE
L1AA:
        mov     esi, dword ptr [esp+0x14]
L1AE:
        lea     eax, [edi+1]
        push    0x5c
        push    eax
        call    dword ptr [g_0076b2a4]
        mov     ebp, eax
        add     esp, 0x8
        test    ebp, ebp
        jnz     L1FF
        mov     ecx, dword ptr [g_007b8810]
        push    ecx
        or      ecx, 0xffffffff
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084c0
        or      ecx, 0xffffffff
        mov     edi, esi
        mov     ebx, eax
        xor     eax, eax
        add     esp, 0x8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        jmp     L233
L1FF:
        mov     eax, ebp
        sub     eax, edi
        jz      L199
        cmp     eax, 0x1
        jz      L199
        mov     edi, dword ptr [esp+0x14]
        mov     eax, dword ptr [g_007b8810]
        mov     esi, ebp
        sub     esi, edi
        push    eax
        lea     ecx, [esi+1]
        push    ecx
        call    FUN_004084c0
        push    esi
        mov     ebx, eax
        push    edi
        push    ebx
        call    dword ptr [g_0076b320]
        add     esp, 0x14
        mov     byte ptr [esi+ebx], 0
L233:
        push    ebx
        call    FUN_006fc4d0
        test    al, al
        jnz     L243
        push    ebx
        call    FUN_006fb780
L243:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
        test    ebp, ebp
        mov     edi, ebp
        jnz     L1AA
L256:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
    }
}
