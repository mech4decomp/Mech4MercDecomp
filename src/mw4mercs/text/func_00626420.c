/*
 * FUN_00626420 (62 B) — __cdecl.
 *
 * Computes four float sums (params + esi fields), converts each via
 * FUN_0075db4a, and passes the results to FUN_0055e5c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0055e5c0(int);

__declspec(naked) void __cdecl FUN_00626420(void)
{
    __asm {
        fld     dword ptr [esp + 0x0c]   ; param_3 (float)
        mov     eax, dword ptr [esp + 0x14] ; param_5
        push    esi
        mov     esi, dword ptr [esp + 0x08] ; param_2
        fadd    dword ptr [esi + 0x04]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x10]   ; param_3 (float)
        fadd    dword ptr [esi]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esi + 0x04]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [esi]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e5c0
        add     esp, 0x14
        pop     esi
        ret
    }
}
