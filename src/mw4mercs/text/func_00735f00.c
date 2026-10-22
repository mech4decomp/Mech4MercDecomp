/*
 * FUN_00735F00 (177 B) — Reads a config/state structure via a set of
 * function pointers (IAT at 0x008aad04/08/0c), logging failures through
 * FUN_006fab90 ("Problem reading %s"), and writes two results out.
 *
 * __cdecl, RET 0x14 (5 dword params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dc00(int);          /* stack alloc/probe */
extern void (__stdcall *g_8aad0c)(void *);      /* IAT 0x008aad0c */
extern void (__stdcall *g_8aad08)(void *);      /* IAT 0x008aad08 */
extern void (__stdcall *g_8aad04)(void *);      /* IAT 0x008aad04 */
extern int __cdecl FUN_006fab90(const char *, const char *);
extern char s_7a66b8[];                         /* "Problem reading %s" @ 0x7a66b8 */

__declspec(naked) void __cdecl FUN_00735f00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, 0x4e40
        call    FUN_0075dc00
        push    esi
        lea     eax, [ebp - 0x4e40]
        push    eax
        call    dword ptr [g_8aad0c]
        test    eax, eax
        mov     esi, dword ptr [ebp + 0x8]
        jz      L_735f42
        lea     ecx, [ebp - 0x4e40]
        push    ecx
        call    dword ptr [g_8aad08]
        push    esi
        push    offset s_7a66b8
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_735f42
        int     3
L_735f42:
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x10]
        push    0x1
        lea     ecx, [ebp - 0x4e40]
        push    ecx
        mov     dword ptr [ebp - 0x4e1c], edx
        mov     dword ptr [ebp - 0x4e18], eax
        call    dword ptr [g_8aad04]
        test    eax, eax
        jz      L_735f87
        lea     edx, [ebp - 0x4e40]
        push    edx
        call    dword ptr [g_8aad08]
        push    esi
        push    offset s_7a66b8
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_735f87
        int     3
L_735f87:
        mov     ecx, dword ptr [ebp - 0x4e14]
        mov     eax, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x18]
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [ebp - 0x4e10]
        lea     ecx, [ebp - 0x4e40]
        push    ecx
        mov     dword ptr [edx], eax
        call    dword ptr [g_8aad08]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
