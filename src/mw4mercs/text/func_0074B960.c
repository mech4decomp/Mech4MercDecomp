/*
 * FUN_0074B960 (262 B @ 0x74b960) - __cdecl. Frees a loaded library, builds
 * two strings on the stack (concatenating from globals 0x7aaa10/0x7aaa00),
 * and deletes the resulting files via DeleteFileA IAT.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0074b910(void);
extern void *g_0076b0b8;   /* FreeLibrary IAT */
extern void *g_76b1a0;     /* DeleteFileA IAT */
extern int  g_8b8e48;
extern char g_7aaa10[];
extern char g_7aaa00[];

__declspec(naked) void FUN_0074B960(void)
{
    __asm {
        mov     eax, dword ptr [g_8b8e48]
        sub     esp, 0x208
        test    eax, eax
        je      L_74b980
        push    eax
        call    dword ptr [g_0076b0b8]
        mov     dword ptr [g_8b8e48], 0
L_74b980:
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x104
        lea     eax, [esp + 0x118]
        push    eax
        call    FUN_0074b910
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x114]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, OFFSET g_7aaa10
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_76b1a0]
        lea     eax, [esp + 0x10]
        and     ecx, 3
        push    eax
        rep     movsb
        call    ebx
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x114]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, OFFSET g_7aaa00
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        lea     eax, [esp + 0x10]
        push    eax
        call    ebx
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x208
        ret
    }
}
