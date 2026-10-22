/*
 * FUN_0074BB40 (383 B) — lazily opens the "GameOS.vxd" device driver
 * handle (cached in DAT_008b8e4c). Builds "<path>GameOS.vxd" from the
 * string read by FUN_0074b620, deletes/rewrites the file via
 * DeleteFileA/CreateFileA/WriteFile, then opens "\\.\<path>" with
 * CreateFileA and caches the handle. Returns the cached handle, or -1
 * on failure. Called from FUN_00746e10 (rel32 call at 0x746EED).
 *
 * Match: target 100%
 */

extern int  g_008b8e4c;                 /* DAT_008b8e4c (cached handle) */
extern char g_7aaa20[];                 /* string "GameOS.vxd" @ 0x7aaa20 */
extern char g_7ab0f4[];                 /* DAT_007ab0f4 @ 0x7ab0f4 */
extern char g_7ab404[];                 /* string "\\\\.\\" @ 0x7ab404 */

extern void __cdecl FUN_0074b620(void);
extern void __cdecl FUN_0074bfd0(void);
extern void __cdecl FUN_0074bcc0(void);

extern void (__cdecl *g_76b1a0)(void);  /* IAT DeleteFileA @ 0x76b1a0 */
extern void (__cdecl *g_76b0e8)(void);  /* IAT CreateFileA @ 0x76b0e8 */
extern void (__cdecl *g_76b294)(void);  /* IAT malloc @ 0x76b294 */
extern void (__cdecl *g_76b0e4)(void);  /* IAT WriteFile @ 0x76b0e4 */
extern void (__cdecl *g_76b2d0)(void);  /* IAT free @ 0x76b2d0 */
extern void (__cdecl *g_76b0ec)(void);  /* IAT CloseHandle @ 0x76b0ec */

__declspec(naked) int FUN_0074BB40(void)
{
    __asm {
        mov     eax, dword ptr [g_008b8e4c]
        sub     esp, 0x20c
        test    eax, eax
        jnz     L_bcb5
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x104
        lea     eax, [esp + 0x11c]
        push    eax
        call    FUN_0074b620
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp + 0x118]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, -1
        xor     eax, eax
        mov     edi, offset g_7aaa20
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, -1
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        lea     eax, [esp + 0x14]
        and     ecx, 3
        push    eax
        rep     movsb
        call    dword ptr [g_76b1a0]
        mov     ebx, dword ptr [g_76b0e8]
        push    0
        push    0
        push    2
        push    0
        push    3
        push    0x40000000
        lea     ecx, [esp + 0x2c]
        push    ecx
        call    ebx
        push    0x100000
        mov     edi, eax
        mov     dword ptr [esp + 0x14], 0x2fe
        call    dword ptr [g_76b294]
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_bc2d
        push    esi
        push    offset g_7ab0f4
        call    FUN_0074bfd0
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        push    esi
        push    edi
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_76b0e4]
        push    esi
        call    dword ptr [g_76b2d0]
        add     esp, 4
L_bc2d:
        push    edi
        call    dword ptr [g_76b0ec]
        or      ecx, -1
        xor     eax, eax
        mov     edi, offset g_7ab404
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp + 0x14]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, -1
        mov     esi, edi
        lea     edx, [esp + 0x118]
        mov     edi, edx
        repne   scasb
        push    eax
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        push    0x4000000
        push    3
        push    eax
        push    3
        push    eax
        mov     ecx, ebp
        lea     eax, [esp + 0x130]
        and     ecx, 3
        push    eax
        rep     movsb
        call    ebx
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_008b8e4c], eax
        pop     ebx
        jnz     L_bcb8
        call    FUN_0074bcc0
L_bcb5:
        or      eax, -1
L_bcb8:
        add     esp, 0x20c
        ret
    }
}
