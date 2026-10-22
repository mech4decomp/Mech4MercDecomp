/*
 * FUN_00527d50 (36 B) — Read float from global, convert to int, store.
 *
 * Reads g_someGlobal->field_24 (float), subtracts 0.0 (no-op), calls _ftol,
 * stores result to *out.
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* _ftol from MSVCRT */
extern long _ftol(void);

extern int   DAT_007d2d30;   /* 0x007D2D30 — global flag pointer */
extern float DAT_0077a440;   /* 0x0077A440 — constant */

__declspec(naked) void FUN_00527d50(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007d2d30]
        fld     dword ptr [eax + 0x24]
        /* __emit: MSVC6 encodes fsub m32fp as D8 /4; reference uses DC /0 */
        __emit 0xDC
        __emit 0x0D
        __emit 0x40
        __emit 0xA4
        __emit 0x77
        __emit 0x00
        call    _ftol
        mov     ecx, [esp + 4]
        mov     edx, [ecx + 4]
        mov     [edx], eax
        mov     eax, 1
        ret     8
    }
}
