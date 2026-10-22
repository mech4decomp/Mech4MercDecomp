/*
 * FUN_0071e090 (201 B) — Builds a timestamp string from the exe's file time.
 *
 * Opens the current exe (via __p__pgmptr), reads its file time, converts to
 * local/system time, formats "%02d:%02d:%02d %s %d/%d/%d" into a global
 * buffer, and returns a pointer to it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b368;   /* __p__pgmptr (IAT) */
extern void *g_0076b0e8;   /* CreateFileA (IAT) */
extern void *g_0076b1f0;   /* GetFileTime (IAT) */
extern void *g_0076b1b4;   /* FileTimeToLocalFileTime (IAT) */
extern void *g_0076b1b0;   /* FileTimeToSystemTime (IAT) */
extern void *g_0076b4f8;   /* wsprintfA (IAT) */
extern void *g_0076b0ec;   /* CloseHandle (IAT) */
extern char *g_007b70e4[]; /* day-name string table */

__declspec(naked) void __stdcall FUN_0071e090(void)
{
    __asm {
        sub     esp, 0x20
        push    esi
        push    0
        push    0
        push    3
        push    0
        push    1
        push    0x80000000
        call    dword ptr [g_0076b368]
        mov     eax, dword ptr [eax]
        push    eax
        call    dword ptr [g_0076b0e8]
        lea     ecx, [esp + 4]
        push    ecx
        push    0
        mov     esi, eax
        push    0
        push    esi
        call    dword ptr [g_0076b1f0]
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 8]
        push    eax
        call    dword ptr [g_0076b1b4]
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    dword ptr [g_0076b1b0]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1a]
        mov     edx, dword ptr [esp + 0x16]
        and     eax, 0xffff
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        and     ecx, 0xffff
        push    ecx
        and     edx, 0xffff
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        and     eax, 0xffff
        mov     ecx, dword ptr [g_007b70e4 + eax*4]
        mov     eax, dword ptr [esp + 0x2a]
        push    ecx
        mov     ecx, dword ptr [esp + 0x2c]
        and     edx, 0xffff
        push    edx
        and     eax, 0xffff
        push    eax
        and     ecx, 0xffff
        push    ecx
        push    0x7a02b0
        push    0x87d794
        call    dword ptr [g_0076b4f8]
        add     esp, 0x24
        push    esi
        call    dword ptr [g_0076b0ec]
        mov     eax, 0x87d794
        pop     esi
        add     esp, 0x20
        ret
    }
}
