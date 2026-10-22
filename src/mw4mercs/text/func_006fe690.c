/*
 * FUN_006FE690 (595 B) — UpdateServer callback: processes a list of
 * server entries, builds a server-info object, and links it into the
 * global list (DAT_008aab08).
 *
 * __stdcall, RET 0x10 (4 stack params; 4th unused).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aaa20;                       /* critical section */
extern int g_856834;
extern int g_8aab08;
extern char g_8aaac2;
extern double g_8aaac8;

extern char g_79fc10[];   /* L"Rid" */
extern char g_79fab8[];   /* "Handle" */
extern char g_79fa10[];   /* "GName" */
extern char g_7a0cc0[];   /* "Unable to locate GUID data..." */
extern char g_79fa34[];   /* "PasswordProtected" */
extern char g_76ccac[];   /* "yes" */
extern char g_79fb4c[];   /* "ExpectRefresh" */
extern char g_79fafc[];   /* "false" */

extern void *g_76b110;   /* IAT: EnterCriticalSection */
extern void *g_76b37c;   /* IAT: wcscmp */
extern void *g_76b384;   /* IAT: wcstombs */
extern void *g_76b294;   /* IAT: malloc */
extern void *g_76b2ac;   /* IAT: _stricmp */
extern void *g_76b100;   /* IAT: LeaveCriticalSection */

extern int __stdcall FUN_006f89f0(void);
extern void __stdcall FUN_00700300(int a);
extern char __fastcall FUN_006f5ae0(void *this);
extern void *__fastcall FUN_006f5b80(void *this);
extern char __fastcall FUN_006f6370(void *this);
extern int __cdecl FUN_006fab90(const char *fmt, ...);
extern double __stdcall FUN_00707e90(void);

__declspec(naked) void __stdcall FUN_006fe690(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        mov     eax, dword ptr [ebp + 8]
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 8]
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        add     edx, esi
        test    ecx, ecx
        mov     dword ptr [eax + 0x1c], edx
        jz      L_6fe8dc
        push    offset g_8aaa20
        call    dword ptr [g_76b110]        ; EnterCriticalSection
        call    FUN_006f89f0
        test    eax, eax
        jz      L_6fe8d1
        test    esi, esi
        jbe     L_6fe8bf
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        push    edi
        mov     dword ptr [ebp + 0x10], eax
        mov     dword ptr [ebp + 0xc], esi
L_6fe6db:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     ebx, dword ptr [ecx]
        mov     eax, dword ptr [ebx]
        xor     edi, edi
        test    eax, eax
        jbe     L_6fe72f
        mov     esi, 4
L_6fe6ed:
        cmp     dword ptr [ebx + esi], 0
        jz      L_6fe70f
        mov     edx, dword ptr [ebp + 8]
        mov     eax, dword ptr [edx + 8]
        mov     ecx, dword ptr [esi + eax]
        push    offset g_79fc10
        push    ecx
        call    dword ptr [g_76b37c]        ; wcscmp
        add     esp, 8
        test    eax, eax
        jz      L_6fe71b
L_6fe70f:
        mov     eax, dword ptr [ebx]
        inc     edi
        add     esi, 4
        cmp     edi, eax
        jc      L_6fe6ed
        jmp     L_6fe72f
L_6fe71b:
        mov     edx, dword ptr [ebx + edi*4 + 4]
        push    0x14
        push    edx
        lea     eax, [ebp - 0x24]
        push    eax
        call    dword ptr [g_76b384]        ; wcstombs
        add     esp, 0xc
L_6fe72f:
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [ecx + 8]
        push    ebx
        push    edx
        lea     eax, [ebp - 0x24]
        push    eax
        call    FUN_006f89f0
        push    eax
        call    FUN_00700300
        call    FUN_006f89f0
        mov     ecx, dword ptr [g_856834]
        mov     edx, dword ptr [eax]
        add     ecx, 0x14
        push    ecx
        push    offset g_79fab8
        lea     ecx, [ebp - 0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 8]
        lea     edx, [ebp - 0x24]
        push    edx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5ae0
        test    al, al
        jnz     L_6fe884
        push    offset g_79fa10
        lea     eax, [ebp - 0x24]
        push    eax
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        mov     esi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        add     ecx, 0x5b
        push    ecx
        call    dword ptr [g_76b294]        ; malloc
        mov     ebx, eax
        xor     eax, eax
        mov     ecx, 0x14
        lea     edi, [ebx + 4]
        rep     stosd
        or      ecx, 0xffffffff
        mov     edi, esi
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebx + 0x59]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     edx, [ebp - 0x24]
        push    edx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f6370
        test    al, al
        jnz     L_6fe808
        lea     eax, [ebp - 0x24]
        push    eax
        push    offset g_7a0cc0
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      L_6fe808
        int     3
L_6fe808:
        push    offset g_79fa34
        lea     ecx, [ebp - 0x24]
        push    ecx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        test    eax, eax
        jz      L_6fe83b
        push    offset g_76ccac
        push    eax
        call    dword ptr [g_76b2ac]        ; _stricmp
        add     esp, 8
        test    eax, eax
        jnz     L_6fe83b
        or      dword ptr [ebx + 8], 0x400
L_6fe83b:
        mov     eax, dword ptr [ebp - 0x10]
        lea     edx, [ebx + 0xc]
        mov     dword ptr [edx], eax
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [edx + 4], ecx
        mov     eax, dword ptr [ebp - 8]
        mov     dword ptr [edx + 8], eax
        mov     ecx, dword ptr [ebp - 4]
        mov     dword ptr [edx + 0xc], ecx
        mov     ecx, dword ptr [g_8aab08]
        test    ecx, ecx
        mov     dword ptr [ebx + 0x54], 0
        mov     dword ptr [ebx], 0
        jz      L_6fe87e
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_6fe87a
L_6fe872:
        mov     ecx, eax
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jnz     L_6fe872
L_6fe87a:
        mov     dword ptr [ecx], ebx
        jmp     L_6fe884
L_6fe87e:
        mov     dword ptr [g_8aab08], ebx
L_6fe884:
        call    FUN_006f89f0
        test    eax, eax
        jz      L_6fe8a7
        call    FUN_006f89f0
        mov     edx, dword ptr [eax]
        push    offset g_79fb4c
        push    offset g_79fafc
        lea     ecx, [ebp - 0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 8]
L_6fe8a7:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        add     ecx, 4
        dec     eax
        mov     dword ptr [ebp + 0x10], ecx
        mov     dword ptr [ebp + 0xc], eax
        jnz     L_6fe6db
        pop     edi
        pop     ebx
L_6fe8bf:
        mov     byte ptr [g_8aaac2], 0
        call    FUN_00707e90
        fstp    qword ptr [g_8aaac8]
L_6fe8d1:
        push    offset g_8aaa20
        call    dword ptr [g_76b100]        ; LeaveCriticalSection
L_6fe8dc:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
