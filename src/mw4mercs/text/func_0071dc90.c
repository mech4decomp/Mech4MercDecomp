/*
 * FUN_0071DC90 (316 B) — Builds a formatted error/details string by
 * concatenating several substrings into a malloc'd buffer.
 *
 * __cdecl, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_007218c0(void *param);
extern char *g_87dbf4;                 /* DAT_0087dbf4 (char*) */
extern char g_7a45f4[];                /* "\n\nDetails\n=======\n" */
extern char g_7a45dc[];                /* "User Notes\n==========\n" */
extern void *g_76b294;                 /* IAT: malloc */

__declspec(naked) void *__cdecl FUN_0071DC90(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_007218c0
        mov     ebx, eax
        xor     edx, edx
        test    ebx, ebx
        jz      L_dcb3
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
L_dcb3:
        mov     edi, dword ptr [g_87dbf4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        or      ecx, 0xffffffff
        mov     edi, offset g_7a45f4
        repne   scasb
        not     ecx
        dec     ecx
        push    ebp
        mov     ebp, ecx
        or      ecx, 0xffffffff
        add     ebp, edx
        mov     edi, offset g_7a45dc
        repne   scasb
        not     ecx
        dec     ecx
        add     ebp, esi
        lea     ecx, [ecx + ebp + 0x10]
        push    ecx
        call    dword ptr [g_76b294]
        add     esp, 0x4
        test    ebx, ebx
        mov     edx, eax
        pop     ebp
        jz      L_dda1
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a45dc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, offset g_7a45f4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [g_87dbf4]
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        dec     edi
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, edx
        pop     ebx
        ret     0x4
L_dda1:
        mov     edi, dword ptr [g_87dbf4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, edx
        pop     ebx
        ret     0x4
    }
}
