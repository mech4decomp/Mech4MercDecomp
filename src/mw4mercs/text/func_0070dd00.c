/*
 * FUN_0070dd00 (163 B) — __stdcall RET 0x4 (1 arg: filename). Opens the file
 * (CreateFileA), calls FUN_0070e160, writes a 0x260-byte header block
 * (g_85b238) then the data region (g_0085b21c..g_0085b490) via WriteFile.
 * Returns 1 on success, 0 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_0085b21c;          /* 0x0085b21c */
extern int  g_0085b490;          /* 0x0085b490 */
extern int  g_0085b484;          /* 0x0085b484 */
extern char g_85b238[];          /* 0x85b238 header block */

extern void *g_76b0e8;           /* IAT: CreateFileA */
extern void *g_76b0e4;           /* IAT: WriteFile */
extern void *g_76b0ec;           /* IAT: CloseHandle */

extern void __cdecl FUN_0070e160(void);

__declspec(naked) void FUN_0070dd00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        push    0x0
        push    0x8000080
        push    0x2
        push    0x0
        push    0x0
        push    0x40000000
        push    eax
        call    dword ptr [g_76b0e8]   /* CreateFileA */
        mov     esi, eax
        cmp     esi, -0x1
        jz      L6a
        call    FUN_0070e160
        mov     edx, dword ptr [g_0085b21c]
        mov     ecx, dword ptr [g_0085b490]
        mov     edi, dword ptr [g_76b0e4]   /* WriteFile */
        push    0x0
        sub     ecx, edx
        lea     edx, [esp + 0x10]
        push    edx
        push    0x260
        push    offset g_85b238
        push    esi
        mov     dword ptr [g_0085b484], ecx
        call    edi
        cmp     dword ptr [esp + 0xc], 0x260
        jz      L71
        push    esi
L64:
        call    dword ptr [g_76b0ec]   /* CloseHandle */
L6a:
        pop     edi
        xor     al, al
        pop     esi
        ret     0x4
L71:
        mov     ecx, dword ptr [g_0085b484]
        mov     edx, dword ptr [g_0085b21c]
        push    0x0
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    edi
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, dword ptr [g_0085b484]
        push    esi
        jnz     L64
        call    dword ptr [g_76b0ec]   /* CloseHandle */
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     0x4
    }
}
