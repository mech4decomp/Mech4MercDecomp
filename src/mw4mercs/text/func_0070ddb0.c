/*
 * FUN_0070ddb0 (552 B) — __stdcall log-file loader. Opens a file, reads a
 * header, validates magic/version, checks the project name and executable
 * identity (with a "Executeable Changed" MessageBox prompt), then reads the
 * payload into a global buffer and updates the global bookkeeping pointers.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b0e8;   /* IAT: CreateFileA */
extern void *g_76b164;   /* IAT: ReadFile */
extern void *g_76b2ac;   /* IAT: _stricmp */
extern void *g_76b420;   /* IAT: sprintf */
extern void *g_76b368;   /* IAT: __p__pgmptr */
extern void *g_76b598;   /* IAT: MessageBoxA */
extern void *g_76b0ec;   /* IAT: CloseHandle */

extern int  __cdecl FUN_006fab90(const char *fmt, ...);
extern void *__cdecl FUN_0071e090(void);
extern void __cdecl FUN_006f4230(void *p);
extern void *__cdecl FUN_006f3c80(int a, int b);

extern char g_859694;    /* string literal 0x00859694 */
extern char g_7a1c0c;    /* string literal 0x007a1c0c */
extern char g_7a1be4;    /* string literal 0x007a1be4 */
extern char g_7a1bd0;    /* string literal 0x007a1bd0 */
extern char g_7a1b5c;    /* string literal 0x007a1b5c */
extern char g_7a1b48;    /* string literal 0x007a1b48 */
extern char g_7a1b2c;    /* string literal 0x007a1b2c */

extern int g_858bf8;     /* dword at 0x00858bf8 */
extern int g_85b21c;     /* dword at 0x0085b21c */
extern int g_85b238;     /* dword array at 0x0085b238 */
extern int g_85b49c;     /* dword at 0x0085b49c */
extern int g_85b484;     /* dword at 0x0085b484 */
extern int g_85b48c;     /* dword at 0x0085b48c */
extern int g_85b494;     /* dword at 0x0085b494 */
extern int g_85b490;     /* dword at 0x0085b490 */

__declspec(naked) char __stdcall FUN_0070ddb0(void *p1, char p2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x4a4
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        push    0
        push    0x8000000
        push    0x3
        push    0
        push    0x1
        push    0x80000000
        push    esi
        call    dword ptr [g_76b0e8]
        mov     ebx, eax
        cmp     ebx, -1
        jz      L_cd
        push    0
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x260
        lea     ecx, [ebp - 0x2a4]
        push    ecx
        push    ebx
        call    dword ptr [g_76b164]
        cmp     dword ptr [ebp - 0x4], 0x260
        jz      L_18
        push    esi
        push    offset g_7a1c0c
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_18
        int     3
L_18:
        cmp     dword ptr [ebp - 0x2a4], 0x45ab1290
        jnz     L_b5
        cmp     dword ptr [ebp - 0x2a0], 0xb
        jnz     L_b5
        mov     esi, dword ptr [g_76b2ac]
        lea     edx, [ebp - 0x29c]
        push    offset g_859694
        push    edx
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_79
        lea     eax, [ebp - 0x29c]
        push    eax
        lea     ecx, [ebp - 0x44]
        push    offset g_7a1be4
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        push    0
        push    offset g_7a1bd0
        lea     edx, [ebp - 0x44]
        push    edx
        jmp     L_c1
L_79:
        mov     al, byte ptr [ebp + 0xc]
        test    al, al
        jz      L_06
        mov     edi, dword ptr [g_76b368]
        call    edi
        mov     ecx, dword ptr [eax]
        push    ecx
        lea     edx, [ebp - 0x27c]
        push    edx
        call    esi
        add     esp, 0x8
        test    eax, eax
        jnz     L_deb5
        call    FUN_0071e090
        push    eax
        lea     eax, [ebp - 0x9c]
        push    eax
        call    esi
        add     esp, 0x8
        test    eax, eax
        jz      L_06
L_deb5:
        call    FUN_0071e090
        push    eax
        call    edi
        mov     ecx, dword ptr [eax]
        push    ecx
        lea     edx, [ebp - 0x9c]
        push    edx
        lea     eax, [ebp - 0x27c]
        push    eax
        lea     ecx, [ebp - 0x4a4]
        push    offset g_7a1b5c
        push    ecx
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [g_858bf8]
        add     esp, 0x18
        push    0x4
        push    offset g_7a1b48
        lea     edx, [ebp - 0x4a4]
        push    edx
        push    eax
        call    dword ptr [g_76b598]
        cmp     eax, 0x6
        jnz     L_cd
L_06:
        mov     eax, dword ptr [g_85b21c]
        test    eax, eax
        jz      L_1f
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_85b21c], 0
L_1f:
        mov     edx, dword ptr [ebp - 0x58]
        mov     ecx, 0x98
        lea     esi, [ebp - 0x2a4]
        mov     edi, offset g_85b238
        rep movsd
        mov     ecx, dword ptr [g_85b49c]
        push    ecx
        push    edx
        call    FUN_006f3c80
        mov     edx, dword ptr [g_85b484]
        push    0
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    edx
        push    eax
        push    ebx
        mov     dword ptr [g_85b21c], eax
        call    dword ptr [g_76b164]
        mov     eax, dword ptr [ebp - 0x4]
        cmp     eax, dword ptr [g_85b484]
        jz      L_7c
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        push    offset g_7a1c0c
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_7c
        int     3
L_7c:
        mov     eax, dword ptr [g_85b21c]
        mov     esi, dword ptr [g_85b48c]
        mov     ecx, dword ptr [g_85b494]
        mov     edx, eax
        sub     edx, esi
        add     ecx, edx
        push    ebx
        mov     dword ptr [g_85b494], ecx
        mov     dword ptr [g_85b48c], eax
        mov     dword ptr [g_85b490], eax
        call    dword ptr [g_76b0ec]
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_b5:
        push    0
        push    offset g_7a1bd0
        push    offset g_7a1b2c
L_c1:
        mov     eax, dword ptr [g_858bf8]
        push    eax
        call    dword ptr [g_76b598]
L_cd:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
