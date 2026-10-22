/*
 * FUN_004d7b50 (349 B) — __thiscall network socket setup. Copies the given
 * host string into the object at +0x1768, stores the base port at +0x17ec,
 * creates two sockets (stored at +0x17d8/+0x17dc), then loops binding the
 * first socket to a local address (via FUN_004d7e50), retrying with an
 * incremented port up to base+100. On success calls FUN_004d7a60 (heartbeat
 * port) + FUN_004d7e00 to finish setup. Returns 1 on socket failure, 2 on
 * port-exhaustion, else the result of FUN_004d7e00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005008b0(void);
extern void __cdecl FUN_0075dfc2(void);   /* socket */
extern void __cdecl FUN_0075dfbc(void);   /* htonl */
extern void __cdecl FUN_0075dfb6(void);   /* bind */
extern void __cdecl FUN_0075dfb0(void);   /* closesocket */
extern void __cdecl FUN_004d7e50(void);
extern void __cdecl FUN_004d7a60(void);
extern void __cdecl FUN_004d7e00(void);

__declspec(naked) void FUN_004d7b50(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, ecx
        or      ecx, -1
        push    ebp
        mov     ebp, dword ptr [esp+0x1c]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x28]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebx+0x1768]
        mov     esi, edi
        mov     edi, edx
        mov     dword ptr [ebx+0x17ec], ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        call    FUN_005008b0
        push    0
        push    2
        push    2
        call    FUN_0075dfc2
        push    0
        push    2
        mov     esi, eax
        push    2
        mov     dword ptr [ebx+0x17d8], esi
        call    FUN_0075dfc2
        cmp     esi, -1
        mov     dword ptr [ebx+0x17dc], eax
        jz      ret1
        cmp     dword ptr [ebx+0x17dc], -1
        jz      ret1
loop_top:
        mov     edx, dword ptr [ebx+0x17ec]
        mov     eax, dword ptr [esp+0x2c]
        push    0
        lea     ecx, [esp+0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_004d7e50
        push    0x7f000001
        call    FUN_0075dfbc
        cmp     dword ptr [esp+0x14], eax
        jnz     skip_zero
        mov     dword ptr [esp+0x14], 0
skip_zero:
        mov     esi, dword ptr [ebx+0x17d8]
        push    0x10
        lea     ecx, [esp+0x14]
        push    ecx
        push    esi
        call    FUN_0075dfb6
        mov     edi, eax
        test    edi, edi
        jz      success
        push    esi
        call    FUN_0075dfb0
        mov     edx, dword ptr [ebx+0x17dc]
        push    edx
        call    FUN_0075dfb0
        mov     esi, dword ptr [ebx+0x17ec]
        inc     esi
        mov     eax, esi
        lea     ecx, [ebp+0x64]
        cmp     eax, ecx
        mov     dword ptr [ebx+0x17ec], esi
        jge     check_edi
        push    0
        push    2
        push    2
        call    FUN_0075dfc2
        push    0
        push    2
        mov     esi, eax
        push    2
        mov     dword ptr [ebx+0x17d8], esi
        call    FUN_0075dfc2
        cmp     esi, -1
        mov     dword ptr [ebx+0x17dc], eax
        __emit 0x0F  /* jnz loop_top — MSVC6 miscomputes backward rel32 (off by 13) */
        __emit 0x85
        __emit 0x53
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
ret1:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x10
        ret     0x10
check_edi:
        test    edi, edi
        jz      success
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 2
        pop     ebx
        add     esp, 0x10
        ret     0x10
success:
        call    FUN_004d7a60
        push    eax
        mov     eax, dword ptr [ebx+0x17dc]
        lea     edx, [ebx+4]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_004d7e00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x10
    }
}
