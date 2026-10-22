/*
 * FUN_00740730 (297 B) — builds a config struct, calls FUN_00741f40
 * twice (alloc + fill), FUN_00741930, frees, returns success flag.
 *
 * __cdecl, 1 param, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7a2f30;   /* 0x007a2f30 */
extern int  g_7a2f34;   /* 0x007a2f34 */
extern int  g_7a2f3c;   /* 0x007a2f3c */
extern int  g_7a2f38;   /* 0x007a2f38 */
extern int  g_7a2fc8;   /* 0x007a2fc8 */
extern int  g_7a2fc0;   /* 0x007a2fc0 */
extern int  g_7a2fc4;   /* 0x007a2fc4 */
extern int  g_7a2fcc;   /* 0x007a2fcc */
extern int  g_8aaae8;   /* 0x008aaae8 */
extern char g_87dd0a;   /* 0x0087dd0a */
extern char g_7a2e40[]; /* 0x007a2e40 */
extern void *g_76b294;  /* 0x0076b294 malloc */
extern int  g_8aaae4;   /* 0x008aaae4 */
extern void *g_76b2d0;  /* 0x0076b2d0 free */
extern int  g_8aaaf4;   /* 0x008aaaf4 */

extern void __cdecl FUN_00741f40(void);
extern void __cdecl FUN_00741930(void);
extern void __cdecl FUN_00706f10(void);

__declspec(naked) int __stdcall FUN_00740730(void *param)
{
    __asm {
        sub     esp, 0x44
        mov     ecx, dword ptr [g_7a2f30]
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [g_7a2f34]
        push    ebx
        mov     [esp + 0x18], ecx
        mov     ecx, dword ptr [g_7a2f3c]
        inc     eax
        push    esi
        mov     [esp + 0x8], eax
        mov     eax, [g_7a2f38]
        mov     [esp + 0x28], ecx
        mov     ecx, dword ptr [g_7a2fc8]
        push    edi
        mov     [esp + 0x24], edx
        mov     edx, dword ptr [g_7a2fc0]
        mov     [esp + 0x28], eax
        mov     eax, [g_7a2fc4]
        mov     [esp + 0x40], ecx
        xor     ebx, ebx
        lea     ecx, [esp + 0x54]
        push    ecx
        mov     [esp + 0x3c], edx
        mov     edx, dword ptr [g_7a2fcc]
        push    ebx
        mov     [esp + 0x44], eax
        mov     [esp + 0x4c], edx
        lea     eax, [esp + 0x14]
        push    2
        lea     edx, [esp + 0x2c]
        mov     [esp + 0x58], eax
        mov     eax, [g_8aaae8]
        push    edx
        push    eax
        mov     dword ptr [esp + 0x24], 0xe100
        mov     [esp + 0x28], ebx
        mov     [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x30], 4
        mov     dword ptr [esp + 0x44], 0x10
        /* __emit: MSVC6 ICEs on `mov [esp+disp], offset symbol` (reloc into stack slot) */
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x48
        __emit 0x40
        __emit 0x2E
        __emit 0x7A
        __emit 0x00
        mov     dword ptr [esp + 0x5c], 0x14
        mov     byte ptr [g_87dd0a], 1
        mov     [esp + 0x68], ebx
        call    FUN_00741f40
        mov     ecx, dword ptr [esp + 0x54]
        push    ecx
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [g_8aaae8]
        add     esp, 4
        lea     edx, [esp + 0x54]
        push    edx
        mov     esi, eax
        push    esi
        push    2
        lea     eax, [esp + 0x2c]
        push    eax
        push    ecx
        call    FUN_00741f40
        mov     edx, dword ptr [g_8aaae4]
        push    ebx
        push    esi
        push    edx
        call    FUN_00741930
        push    esi
        mov     edi, eax
        mov     byte ptr [g_87dd0a], bl
        call    dword ptr [g_76b2d0]
        add     esp, 4
        cmp     edi, ebx
        pop     edi
        pop     esi
        pop     ebx
        jge     L40842
        xor     al, al
        add     esp, 0x44
        ret     4
L40842:
        call    FUN_00706f10
        mov     [g_8aaaf4], 3
        mov     al, 1
        add     esp, 0x44
        ret     4
    }
}
