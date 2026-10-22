/*
 * FUN_00412800 (25 B) — case-insensitive string equality wrapper. Calls
 * _stricmp (IAT at 0x0076b2ac) with the two args and returns 1 if equal,
 * 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2ac;

__declspec(naked) void FUN_00412800(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    dword ptr [g_0076b2ac]
        add     esp, 8
        neg     eax
        sbb     eax, eax
        inc     eax
        ret
    }
}
