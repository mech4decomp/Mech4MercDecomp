/*
 * FUN_004d7ff0 (159 B) — __thiscall query-packet sender. If param_2 is
 * non-empty, increments the query counter at +0x17e8, sprintf()s a
 * "\\queryid\\%d.%d" packet into a local buffer, appends it to param_2, and
 * sendto()s it on the socket at +0x17d8, then clears param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b420;   /* sprintf (IAT) */
extern void __cdecl FUN_0075dfec(void);   /* sendto */

__declspec(naked) void FUN_004d7ff0(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        mov     ebx, ecx
        push    ebp
        mov     ebp, dword ptr [esp+0x60]
        push    edi
        or      ecx, -1
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        dec     ecx
        jz      exit
        mov     edi, dword ptr [ebx+0x17e8]
        push    esi
        inc     edi
        mov     eax, edi
        push    eax
        mov     eax, dword ptr [ebx+0x17e4]
        push    eax
        lea     ecx, [esp+0x18]
        push    0x772fd0
        push    ecx
        mov     dword ptr [ebx+0x17e8], edi
        call    dword ptr [g_0076b420]
        or      ecx, -1
        add     esp, 0x10
        xor     eax, eax
        lea     edi, [esp+0x10]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, ebp
        repne scasb
        mov     eax, dword ptr [esp+0x64]
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        push    0x10
        push    eax
        or      ecx, -1
        xor     eax, eax
        mov     edi, ebp
        repne scasb
        not     ecx
        push    0
        dec     ecx
        push    ecx
        mov     ecx, dword ptr [ebx+0x17d8]
        push    ebp
        push    ecx
        call    FUN_0075dfec
        mov     byte ptr [ebp], 0
        pop     esi
exit:
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x8
    }
}
