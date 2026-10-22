/*
 * FUN_0075a950 (185 B) — Builds an exception-file message into param_1 by
 * concatenating "\n Gos Exception File: <" + param_1 + local_100 + ">",
 * then calls FUN_00759e30(param_1). Returns early if FUN_0075aa10 fails.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_7af0c8[];   /* "\n Gos Exception File: <" */
extern char g_str_792790[];   /* ">" */

extern char __cdecl FUN_0075aa10(char *);
extern void __cdecl FUN_00759e30(char *);

__declspec(naked) void __stdcall FUN_0075a950(char *param)
{
    __asm {
        sub     esp, 0x100
        push    ebx
        lea     eax, [esp + 4]
        mov     ebx, ecx
        push    eax
        call    FUN_0075aa10
        test    al, al
        jnz     L1
        pop     ebx
        add     esp, 0x100
        ret     4
L1:
        or      ecx, 0xffffffff
        mov     edx, dword ptr [esp + 0x108]
        push    ebp
        push    esi
        push    edi
        xor     eax, eax
        mov     edi, offset g_str_7af0c8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x10]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebp
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, offset g_str_792790
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        push    edx
        mov     ecx, ebx
        call    FUN_00759e30
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x100
        ret     4
    }
}
