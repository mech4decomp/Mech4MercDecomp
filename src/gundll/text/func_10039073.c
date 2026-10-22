/*
 * FUN_10039073 (49 B) - __cdecl, 1 arg. Searches an 8-byte-entry table
 * at g_100518e0 (up to g_10051970) for arg1; returns the +4 field of the
 * matching entry, else 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern char g_100518e0;   /* module data: table base */
extern char g_10051970;   /* module data: table end */
extern char g_100518e4;   /* module data: table +4 field */

__declspec(naked) void __cdecl FUN_10039073(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        xor     edx, edx
        mov     eax, offset g_100518e0
L_loop:
        cmp     ecx, dword ptr [eax]
        je      L_found
        add     eax, 8
        inc     edx
        cmp     eax, offset g_10051970
        jb      L_loop
L_found:
        mov     eax, edx
        shl     eax, 3
        cmp     ecx, dword ptr [eax+g_100518e0]
        jne     L_notfound
        mov     eax, dword ptr [eax+g_100518e4]
        ret
L_notfound:
        xor     eax, eax
        ret
    }
}
