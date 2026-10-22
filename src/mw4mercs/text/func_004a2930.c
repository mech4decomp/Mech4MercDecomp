/*
 * FUN_004A2930 (28 B) — __fastcall float-to-byte conversion.
 *   Computes: *(ecx+0x1a1) = (byte)(*(float*)(ecx+0x194) / *(float*)0x76d064)
 *   Uses _ftol() for float-to-int truncation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern long __cdecl _ftol(double);
extern float DAT_0076d064;

__declspec(naked) void __fastcall FUN_004a2930(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi + 0x194]
        fdivr   dword ptr [DAT_0076d064]        ; fdivr dword ptr [0x0076d064] (D8 3D)
        call    _ftol
        mov     byte ptr [esi + 0x1a1], al
        pop     esi
        ret
    }
}
