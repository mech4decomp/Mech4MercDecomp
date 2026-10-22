/*
 * FUN_0070d040 (341 B) — opens a "spew" log file (CreateFileA), parsing an
 * optional leading '*' (append-all flag) / '+' (append mode) prefix from the
 * filename. On failure it splits the path (_splitpath) and retries with a
 * "(1)".."(5)" numeric suffix via sprintf; if all fail it reports via
 * FUN_006fabf0 and traps. Finally, in append mode, seeks to EOF
 * (SetFilePointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_00858974;         /* 0x00858974 spew filename */
extern int   g_0085b180;         /* 0x0085b180 */
extern int   g_007b70e0;         /* 0x007b70e0 spew file handle */

extern void *g_76b0e8;           /* IAT: CreateFileA */
extern void *g_76b370;           /* IAT: _splitpath */
extern void *g_76b420;           /* IAT: sprintf */
extern void *g_76b160;           /* IAT: SetFilePointer */

extern char g_7a1aa4[];          /* 0x7a1aa4 sprintf format "%s%s%s(%c)%s" */
extern char g_7a1a84[];          /* 0x7a1a84 "Unable to open Spew file '%s'" */

extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0070d040(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x50c
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [g_00858974]
        cmp     byte ptr [edi], 0x2a
        mov     byte ptr [ebp - 0x1], 0x0
        mov     dword ptr [g_0085b180], 0x0
        jnz     L70
        inc     edi
        mov     dword ptr [g_0085b180], 0x1
L70:
        cmp     byte ptr [edi], 0x2b
        jnz     L7a
        inc     edi
        mov     byte ptr [ebp - 0x1], 0x1
L7a:
        cmp     byte ptr [edi], 0x2a
        jnz     L8a
        inc     edi
        mov     dword ptr [g_0085b180], 0x1
L8a:
        mov     al, byte ptr [ebp - 0x1]
        test    al, al
        push    0x0
        push    0x8000080
        jz      L9c
        push    0x4
        jmp     L9e
L9c:
        push    0x2
L9e:
        mov     esi, dword ptr [g_76b0e8]   /* CreateFileA */
        push    0x0
        push    0x1
        push    0x40000000
        push    edi
        call    esi
        cmp     eax, -0x1
        mov     dword ptr [g_007b70e0], eax
        jnz     L17a
        lea     eax, [ebp - 0x104]
        push    eax
        lea     ecx, [ebp - 0x408]
        push    ecx
        lea     edx, [ebp - 0x204]
        push    edx
        lea     eax, [ebp - 0x308]
        push    eax
        push    edi
        call    dword ptr [g_76b370]   /* _splitpath */
        add     esp, 0x14
        mov     bl, 0x31
L0e6:
        lea     ecx, [ebp - 0x104]
        push    ecx
        movsx   edx, bl
        push    edx
        lea     eax, [ebp - 0x408]
        push    eax
        lea     ecx, [ebp - 0x204]
        push    ecx
        lea     edx, [ebp - 0x308]
        push    edx
        lea     eax, [ebp - 0x50c]
        push    offset g_7a1aa4
        push    eax
        call    dword ptr [g_76b420]   /* sprintf */
        mov     al, byte ptr [ebp - 0x1]
        add     esp, 0x1c
        test    al, al
        push    0x0
        push    0x8000080
        jz      L13d
        push    0x4
        push    0x0
        push    0x1
        push    0x40000000
        lea     ecx, [ebp - 0x50c]
        push    ecx
        jmp     L14f
L13d:
        push    0x2
        push    0x0
        push    0x1
        push    0x40000000
        lea     edx, [ebp - 0x50c]
        push    edx
L14f:
        call    esi
        cmp     eax, -0x1
        mov     dword ptr [g_007b70e0], eax
        jnz     L17a
        inc     bl
        cmp     bl, 0x36
        jl      L0e6
        push    edi
        push    offset g_7a1a84
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L175
        int     3
L175:
        mov     eax, dword ptr [g_007b70e0]
L17a:
        mov     cl, byte ptr [ebp - 0x1]
        test    cl, cl
        pop     edi
        pop     esi
        pop     ebx
        jz      L191
        push    0x2
        push    0x0
        push    0x0
        push    eax
        call    dword ptr [g_76b160]   /* SetFilePointer */
L191:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
