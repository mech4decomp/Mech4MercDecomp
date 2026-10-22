/*
 * FUN_006fe4c0 (324 B) — Extract localized strings from a global table.
 *
 * If the flag at [g_856860+0x2f47c] is clear, returns 0. Otherwise selects a
 * language name via a jump table on [g_856860+0x2f480], then walks the
 * string table at [g_856860+0x387c] (0x100-byte stride), matching each entry
 * against the language name (strncmp) and copying the suffix after '_'
 * (strchr) into the caller's buffer array.
 *
 * __cdecl, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856860;
extern int g_6fe604[];   /* jump table (data at 0x6fe604, outside compared bytes) */
extern char g_7a0cb8[];  /* "English" */
extern char g_7a0cb0[];  /* "French" */
extern char g_7a0ca8[];  /* "German" */
extern char g_7a0ca0[];  /* "Korean" */
extern char g_7a0c98[];  /* "Spanish" */
extern char g_7a0c8c[];  /* "Chinese" */
extern char g_779d48[];  /* "Japanese" */
extern int (__cdecl *g_76b2e0)(const char *, const char *, unsigned int);  /* strncmp */
extern char *(__cdecl *g_76b308)(const char *, int);                       /* strchr */

__declspec(naked) int __cdecl FUN_006fe4c0(int *param_1, void **param_2)
{
    __asm {
        mov     edx, dword ptr [g_856860]
        mov     al, byte ptr [edx + 0x2f47c]
        sub     esp, 0xc
        test    al, al
        jz      loc_6fe5fc
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        xor     ebx, ebx
        mov     dword ptr [eax], ebx
        mov     eax, dword ptr [edx + 0x2f480]
        cmp     eax, 6
        ja      loc_6fe52e
        jmp     dword ptr [eax*4 + g_6fe604]
loc_6fe4f2:
        mov     dword ptr [esp + 4], offset g_7a0cb8
        jmp     loc_6fe536
loc_6fe4fc:
        mov     dword ptr [esp + 4], offset g_7a0cb0
        jmp     loc_6fe536
loc_6fe506:
        mov     dword ptr [esp + 4], offset g_7a0ca8
        jmp     loc_6fe536
loc_6fe510:
        mov     dword ptr [esp + 4], offset g_7a0ca0
        jmp     loc_6fe536
loc_6fe51a:
        mov     dword ptr [esp + 4], offset g_7a0c98
        jmp     loc_6fe536
loc_6fe524:
        mov     dword ptr [esp + 4], offset g_7a0c8c
        jmp     loc_6fe536
loc_6fe52e:
        mov     dword ptr [esp + 4], offset g_779d48
loc_6fe536:
        cmp     dword ptr [edx + 0x3878], ebx
        mov     dword ptr [esp + 8], ebx
        mov     dword ptr [esp + 0xc], ebx
        jle     loc_6fe5df
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        push    edi
loc_6fe551:
        mov     esi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        lea     ecx, [ebx + edx + 0x387c]
        push    esi
        push    ecx
        call    dword ptr [g_76b2e0]
        add     esp, 0xc
        test    eax, eax
        jnz     loc_6fe5b9
        mov     edx, dword ptr [g_856860]
        lea     eax, [ebx + edx + 0x387c]
        push    0x5f
        push    eax
        call    dword ptr [g_76b308]
        or      ecx, 0xffffffff
        add     esp, 8
        mov     edi, eax
        inc     edi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebp]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        inc     dword ptr [esp + 0x14]
        add     ebp, 4
loc_6fe5b9:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [g_856860]
        mov     ecx, dword ptr [edx + 0x3878]
        inc     eax
        add     ebx, 0x100
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      loc_6fe551
        pop     edi
        pop     esi
        pop     ebp
loc_6fe5df:
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx], eax
        mov     byte ptr [edx + 0x2f47c], 0
        mov     eax, 1
        pop     ebx
        add     esp, 0xc
        ret     8
loc_6fe5fc:
        xor     eax, eax
        add     esp, 0xc
        ret     8
    }
}
