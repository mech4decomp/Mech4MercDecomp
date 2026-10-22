/*
 * ZlogLib.dll - FUN_100016a6 (0x100016A6, 51 B, __cdecl)
 * File-exists probe: returns 1 if the file can be opened, else a
 * value derived from errno (2 => 0, otherwise 3).
 * Transcribed from ZlogLib.dll reference bytes.
 */

#include <windows.h>

extern void (*g_1000303c)(void);
extern void (*g_10003044)(void);
extern void (*g_10003028)(void);

__declspec(naked) void FUN_100016a6(void)
{
    __asm {
        push    0x100040d8
        push    dword ptr [esp + 0x8]
        call    dword ptr [g_1000303c]
        test    eax, eax
        pop     ecx
        pop     ecx
        jnz     l_100016cd
        call    dword ptr [g_10003044]
        mov     eax, dword ptr [eax]
        dec     eax
        dec     eax
        neg     eax
        sbb     eax, eax
        and     eax, 0x3
        ret
    l_100016cd:
        push    eax
        call    dword ptr [g_10003028]
        pop     ecx
        push    0x1
        pop     eax
        ret
    }
}
