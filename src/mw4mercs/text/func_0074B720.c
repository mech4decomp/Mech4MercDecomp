/*
 * FUN_0074B720 (489 B) — __cdecl, no params.
 *
 * One-time initialization: if [g_008b8e48] is already set, returns 1.
 * Otherwise builds a path string (via FUN_0074b910), copies a literal
 * from 0x7aaa10, opens a file through the IAT function pointers
 * (0x76b1a0/0x76b0e8/0x76b294/0x76b0e4/0x76b2d0/0x76b0ec), repeats for
 * a second literal (0x7aaa00), and stores the result in [g_008b8e48].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008b8e48;
extern void *g_0076b1a0;
extern void *g_0076b0e8;
extern void *g_0076b294;
extern void *g_0076b0e4;
extern void *g_0076b2d0;
extern void *g_0076b0ec;
extern void *g_0076b0c0;
extern char g_007aaa10;
extern char g_007aaa2c;
extern char g_007aaa00;
extern char g_007aad7c;

extern void __cdecl FUN_0074b910(void);
extern void __cdecl FUN_0074bfd0(void);
extern void __cdecl FUN_0074b960(void);

__declspec(naked) int __cdecl FUN_0074B720(void)
{
    __asm {
        mov     eax, dword ptr [g_008b8e48]
        sub     esp, 0x20c
        test    eax, eax
        jne     L_74b8fd
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x104
        lea     eax, [esp + 0x11c]
        push    eax
        call    FUN_0074b910
        or      ecx, 0xffffffff
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
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_007aaa10
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [g_0076b1a0]
        lea     eax, [esp + 0x14]
        and     ecx, 3
        push    eax
        rep     movsb
        call    ebx
        mov     ebp, dword ptr [g_0076b0e8]
        push    0
        push    0
        push    2
        push    0
        push    3
        push    0x40000000
        lea     ecx, [esp + 0x2c]
        push    ecx
        call    ebp
        push    0x100000
        mov     edi, eax
        mov     dword ptr [esp + 0x14], 0x34e
        call    dword ptr [g_0076b294]
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_74b80f
        push    esi
        push    offset g_007aaa2c
        call    FUN_0074bfd0
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        push    esi
        push    edi
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_0076b0e4]
        push    esi
        call    dword ptr [g_0076b2d0]
        add     esp, 4
L_74b80f:
        push    edi
        call    dword ptr [g_0076b0ec]
        or      ecx, 0xffffffff
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
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_007aaa00
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x14]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        lea     eax, [esp + 0x14]
        and     ecx, 3
        push    eax
        rep     movsb
        call    ebx
        push    0
        push    0
        push    2
        push    0
        push    3
        push    0x40000000
        lea     ecx, [esp + 0x2c]
        push    ecx
        call    ebp
        push    0x100000
        mov     edi, eax
        mov     dword ptr [esp + 0x14], 0x378
        call    dword ptr [g_0076b294]
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_74b8d0
        push    esi
        push    offset g_007aad7c
        call    FUN_0074bfd0
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        push    esi
        push    edi
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_0076b0e4]
        push    esi
        call    dword ptr [g_0076b2d0]
        add     esp, 4
L_74b8d0:
        push    edi
        call    dword ptr [g_0076b0ec]
        lea     eax, [esp + 0x14]
        push    eax
        call    dword ptr [g_0076b0c0]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_008b8e48], eax
        pop     ebx
        jne     L_74b8fd
        call    FUN_0074b960
        xor     eax, eax
        add     esp, 0x20c
        ret
L_74b8fd:
        mov     eax, 1
        add     esp, 0x20c
        ret
    }
}
