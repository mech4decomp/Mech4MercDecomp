/*
 * FUN_00738a40 (586 B) — build a DirectX version string into the global
 * buffer at 0x008aab28. Formats the version numbers via sprintf, then
 * appends a descriptive suffix based on the DirectX version, and for
 * DirectX 8.0 checks the system ddraw.dll for debug builds.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_8aac6c;                       /* version low dword */
extern int  g_8aac70;                       /* version high dword */
extern char g_8aab28[];                     /* destination string buffer */
extern char g_7a70e8[];                     /* "%d.%02d.%02d.%04d" */
extern int  (__cdecl *g_76b420)(char *, const char *, ...); /* sprintf (IAT) */
extern unsigned int (__stdcall *g_76b248)(char *, unsigned int); /* GetSystemDirectoryA (IAT) */
extern int  __cdecl FUN_006fbc80(char *s);  /* string hash */

extern char g_7a70d8[];   /* " (DirectX 5.0)" */
extern char g_7a70c8[];   /* " (DirectX 5.2)" */
extern char g_7a70b8[];   /* " (DirectX 6.0)" */
extern char g_7a70a8[];   /* " (DirectX 6.1)" */
extern char g_7a7098[];   /* " (DirectX 6.2)" */
extern char g_7a7084[];   /* " (DirectX 7 Beta 1)" */
extern char g_7a7070[];   /* " (DirectX 7 Beta 2)" */
extern char g_7a7058[];   /* " (DirectX 7 Build 224)" */
extern char g_7a7044[];   /* " (DirectX 7 RC3)" */
extern char g_7a7034[];   /* " (DirectX 7.0)" */
extern char g_7a7024[];   /* " (DirectX 7.0a)" */
extern char g_7a7014[];   /* " (DirectX 7.1)" */
extern char g_7a7000[];   /* " (DirectX 8 RC0)" */
extern char g_7a6fec[];   /* " (DirectX 8 RC1)" */
extern char g_7a6fdc[];   /* " (DirectX 8.0)" */
extern char g_7a6fd0[];   /* "\\ddraw.dll" */
extern char g_7a6fc0[];   /* " DEBUG DLL's" */

__declspec(naked) char *FUN_00738a40(void)
{
    __asm {
        mov     eax, dword ptr [g_8aac6c]
        sub     esp, 0x104
        push    esi
        mov     ecx, eax
        push    edi
        and     ecx, 0xffff
        push    ecx
        shr     eax, 0x10
        push    eax
        mov     eax, dword ptr [g_8aac70]
        mov     edx, eax
        shr     edx, 0x10
        push    edx
        and     eax, 0xffff
        push    eax
        push    offset g_7a70e8
        push    offset g_8aab28
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [g_8aac70]
        add     esp, 0x18
        cmp     eax, 0x40005
        jnz     L_ab5
        mov     eax, dword ptr [g_8aac6c]
        cmp     eax, 0x9b
        jnz     L_aa0
        mov     edi, offset g_7a70d8
        jmp     L_c54
    L_aa0:
        cmp     eax, 0x10640
        jnz     L_c7c
        mov     edi, offset g_7a70c8
        jmp     L_c54
    L_ab5:
        cmp     eax, 0x40006
        jnz     L_af8
        mov     eax, dword ptr [g_8aac6c]
        cmp     eax, 0x13e
        jnz     L_ad2
        mov     edi, offset g_7a70b8
        jmp     L_c54
    L_ad2:
        cmp     eax, 0x201b4
        jnz     L_ae3
        mov     edi, offset g_7a70a8
        jmp     L_c54
    L_ae3:
        cmp     eax, 0x30206
        jnz     L_c7c
        mov     edi, offset g_7a7098
        jmp     L_c54
    L_af8:
        cmp     eax, 0x40007
        jnz     L_b83
        mov     eax, dword ptr [g_8aac6c]
        cmp     eax, 0xa6
        jnz     L_b19
        mov     edi, offset g_7a7084
        jmp     L_c54
    L_b19:
        cmp     eax, 0xc9
        jnz     L_b2a
        mov     edi, offset g_7a7070
        jmp     L_c54
    L_b2a:
        cmp     eax, 0xe0
        jnz     L_b3b
        mov     edi, offset g_7a7058
        jmp     L_c54
    L_b3b:
        cmp     eax, 0xf2
        jnz     L_b4c
        mov     edi, offset g_7a7044
        jmp     L_c54
    L_b4c:
        cmp     eax, 0x2bc
        jnz     L_b5d
        mov     edi, offset g_7a7034
        jmp     L_c54
    L_b5d:
        cmp     eax, 0x2cc
        jnz     L_b6e
        mov     edi, offset g_7a7024
        jmp     L_c54
    L_b6e:
        cmp     eax, 0x1bb8
        jnz     L_c7c
        mov     edi, offset g_7a7014
        jmp     L_c54
    L_b83:
        cmp     eax, 0x40008
        jnz     L_c7c
        mov     eax, dword ptr [g_8aac6c]
        cmp     eax, 0xb7
        jnz     L_ba4
        mov     edi, offset g_7a7000
        jmp     L_c54
    L_ba4:
        cmp     eax, 0xdb
        jnz     L_bb5
        mov     edi, offset g_7a6fec
        jmp     L_c54
    L_bb5:
        cmp     eax, 0x190
        jnz     L_c7c
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a6fdc
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8aab28
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        push    ebx
        mov     ecx, edx
        push    0x100
        lea     eax, [esp + 0x10]
        and     ecx, 0x3
        push    eax
        rep movsb
        call    dword ptr [g_76b248]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_7a6fd0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebx
        lea     eax, [esp + 0xc]
        and     ecx, 0x3
        push    eax
        rep movsb
        call    FUN_006fbc80
        cmp     eax, 0x71800
        pop     ebx
        jz      L_c4f
        lea     ecx, [esp + 0x8]
        push    ecx
        call    FUN_006fbc80
        cmp     eax, 0xef200
        jnz     L_c7c
    L_c4f:
        mov     edi, offset g_7a6fc0
    L_c54:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8aab28
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
    L_c7c:
        pop     edi
        mov     eax, offset g_8aab28
        pop     esi
        add     esp, 0x104
        ret
    }
}
