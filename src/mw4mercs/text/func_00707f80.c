/*
 * FUN_00707f80 (156 B) — finds a window by class name and brings it to the
 * foreground; if absent, creates a named file mapping as a single-instance
 * guard. Returns 0/1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_859694[];   /* named file-mapping object name */

extern void *g_0076b444;   /* IAT: FindWindowA */
extern void *g_0076b4e4;   /* IAT: GetWindowPlacement */
extern void *g_0076b4e8;   /* IAT: SetForegroundWindow */
extern void *g_0076b568;   /* IAT: ShowWindow */
extern void *g_0076b178;   /* IAT: CreateFileMappingA */
extern void *g_0076b1f8;   /* IAT: GetLastError */
extern void *g_0076b0ec;   /* IAT: CloseHandle */

extern int g_00858920;
extern int g_00858b98;

__declspec(naked) unsigned int FUN_00707f80(void)
{
    __asm {
        mov     eax, dword ptr [g_00858920]
        sub     esp, 0x2c
        push    esi
        push    eax
        push    eax
        call    dword ptr [g_0076b444]
        mov     esi, eax
        test    esi, esi
        jz      loc_7fc9
        lea     eax, [esp + 0x4]
        push    eax
        push    esi
        mov     dword ptr [esp + 0xc], 0x2c
        call    dword ptr [g_0076b4e4]
        push    esi
        call    dword ptr [g_0076b4e8]
        cmp     dword ptr [esp + 0xc], 0x2
        jnz     loc_7fc2
        push    0x9
        push    esi
        call    dword ptr [g_0076b568]
loc_7fc2:
        mov     al, 0x1
        pop     esi
        add     esp, 0x2c
        ret
loc_7fc9:
        push    offset g_859694
        push    0x4
        push    0x0
        push    0x4000002
        push    0x0
        push    -1
        call    dword ptr [g_0076b178]
        test    eax, eax
        mov     dword ptr [g_00858b98], eax
        jz      loc_8015
        call    dword ptr [g_0076b1f8]
        cmp     eax, 0xb7
        jnz     loc_8015
        mov     ecx, dword ptr [g_00858b98]
        push    ecx
        call    dword ptr [g_0076b0ec]
        mov     dword ptr [g_00858b98], 0x0
        mov     al, 0x1
        pop     esi
        add     esp, 0x2c
        ret
loc_8015:
        xor     al, al
        pop     esi
        add     esp, 0x2c
        ret
    }
}
