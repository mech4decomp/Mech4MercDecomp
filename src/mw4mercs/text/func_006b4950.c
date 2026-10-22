/*
 * FUN_006b4950 (310 B) — Unregister a variable from a global linked list.
 *
 * Copies the "$$" prefix + param_1 into a local buffer (lowercasing any
 * A-Z), then walks the global list at 0x0082f3bc looking for a node whose
 * [node+8] == param_2 and whose name (_stricmp at [node+0x10]) matches the
 * lowercased buffer. On match, unlinks the node and frees it via
 * FUN_006f4230. If not found, asserts via FUN_006fab90.
 *
 * __cdecl, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_79a090[];                                  /* "$$" */
extern char g_79a0ec[];                                  /* "Couldn't find variable '%s' to unregister" */
extern void *g_82f3bc;                                   /* global linked-list head */
extern int (__cdecl *g_76b2ac)(const char *, const char *); /* _stricmp */
extern void __cdecl FUN_006fab90(const char *fmt, ...);
extern void __cdecl FUN_006f4230(void *p);

__declspec(naked) void __cdecl FUN_006b4950(char *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x100
        or      ecx, 0xffffffff
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        mov     edi, offset g_79a090
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebp - 0x100]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebp + 8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [ebp - 0x100]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, offset g_79a090
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [ebp - 0x100]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     al, byte ptr [ebp - 0x100]
        test    al, al
        lea     ecx, [ebp - 0x100]
        jz      loc_6b4a06
loc_6b49f0:
        mov     al, byte ptr [ecx]
        cmp     al, 0x41
        jl      loc_6b49fe
        cmp     al, 0x5a
        jg      loc_6b49fe
        add     al, 0x20
        mov     byte ptr [ecx], al
loc_6b49fe:
        mov     al, byte ptr [ecx + 1]
        inc     ecx
        test    al, al
        jnz     loc_6b49f0
loc_6b4a06:
        mov     esi, dword ptr [g_82f3bc]
        xor     edi, edi
        test    esi, esi
        jz      loc_6b4a3a
loc_6b4a15:
        mov     ebx, dword ptr [ebp + 0xc]
        cmp     ebx, dword ptr [esi + 8]
        jnz     loc_6b4a32
        lea     eax, [esi + 0x10]
        push    eax
        lea     ecx, [ebp - 0x100]
        push    ecx
        call    dword ptr [g_76b2ac]
        add     esp, 8
        test    eax, eax
        jz      loc_6b4a59
loc_6b4a32:
        mov     edi, esi
        mov     esi, dword ptr [esi]
        test    esi, esi
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (75 D8) when a
           call-reloc sits between branch and target; ref needs 75 DB */
        __emit 0x75
        __emit 0xDB
loc_6b4a3a:
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        push    offset g_79a0ec
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      loc_6b4a50
        int     3
loc_6b4a50:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
loc_6b4a59:
        test    edi, edi
        jz      loc_6b4a70
        mov     edx, dword ptr [esi]
        push    esi
        mov     dword ptr [edi], edx
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
loc_6b4a70:
        mov     eax, dword ptr [esi]
        push    esi
        mov     dword ptr [g_82f3bc], eax
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
