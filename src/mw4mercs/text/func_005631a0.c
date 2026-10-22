/*
 * FUN_005631a0 (314 B) — builds a string into param_1 by concatenating
 * several string literals (0x77e7dc/0x77e7d8/0x77e7cc) plus the result of
 * FUN_0064c3d0 and a _strcat IAT call (0x0076b2d4). Uses repne scasb /
 * rep movsd / rep movsb string copies. Returns param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058cc;   /* 0x008058cc */
extern int g_0080d984;   /* 0x0080d984 */
extern int g_00805904;   /* 0x00805904 */
extern int g_0076b2d4;   /* 0x0076b2d4 (IAT _strcat) */

extern void __cdecl FUN_0064c3d0(void);

__declspec(naked) void FUN_005631a0(void)
{
    __asm {
        mov     eax, dword ptr [g_008058cc]
        sub     esp, 0x1c
        cmp     eax, -0x1
        push    ebx
        mov     ebx, dword ptr [esp + 0x24]
        push    esi
        push    edi
        mov     byte ptr [ebx], 0x0
        jle     L5631ea
        mov     ecx, dword ptr [g_0080d984]
        push    eax
        call    FUN_0064c3d0
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebx
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L5631ea:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77e7dc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebx
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    0xa
        lea     eax, [esp + 0x10]
        rep     movsb
        mov     ecx, dword ptr [g_00805904]
        push    eax
        push    ecx
        call    dword ptr [g_0076b2d4]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [esp + 0xc]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebx
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x77e7d8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebx
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x77e7cc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebx
        repne   scasb
        mov     eax, dword ptr [g_0080d984]
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        lea     edi, [eax + 0x4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebx
        repne   scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
