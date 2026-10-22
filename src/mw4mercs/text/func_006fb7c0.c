/*
 * FUN_006FB7C0 — DeleteFile wrapper.
 *
 * Calls DeleteFileA on the given filename string and returns a boolean
 * (1 = success, 0 = failure).
 *
 * __stdcall, RET 4 (one param: const char *filename).
 *
 * Disassembly (20 bytes):
 *   8B 44 24 04       mov     eax, [esp+4]     ; filename
 *   50                push    eax               ; push filename
 *   FF 15 A0 B1 76 00 call    [DeleteFileA]     ; DeleteFileA(filename)
 *   F7 D8             neg     eax               ; boolean conversion:
 *   1B C0             sbb     eax, eax          ;   neg -> sbb -> neg
 *   F7 D8             neg     eax               ;   yields 0 or 1
 *   C2 04 00          retn    4                 ; __stdcall cleanup
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) int __stdcall FUN_006FB7C0(const char *filename)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [DeleteFileA]
        neg     eax
        sbb     eax, eax
        neg     eax
        ret     4
    }
}
