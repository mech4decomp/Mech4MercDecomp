/*
 * FUN_0064b7b0 (31 B) — __thiscall ABL name setter. Copies up to 0x19 bytes
 * of the given name into this+4 via strncpy (IAT 0x0076b320) and NUL-
 * terminates at this+0x1d.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *(__cdecl *g_0076b320)(char *, const char *, unsigned int);

__declspec(naked) void FUN_0064b7b0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        push    19h
        push    eax
        lea     ecx, [esi+4]
        push    ecx
        call    dword ptr [g_0076b320]
        add     esp, 0ch
        mov     byte ptr [esi+1dh], 0
        pop     esi
        ret     4
    }
}
