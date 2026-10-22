/*
 * FUN_00494B90 (62 B) — __fastcall (ECX = this), returns byte (AL).
 * Checks if bit 0 of field_9c is set; if so, compares float at
 * field_90 against DAT_0076d064 and returns 0 if less.
 * Otherwise checks field_14 and returns 1 if null or field_14[0] == 0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern float DAT_0076d064;

__declspec(naked) void __fastcall FUN_00494b90(void)
{
    __asm {
        test    byte ptr [ecx + 0x9c], 0x1
        jz      l_check_ptr
        fld     dword ptr [ecx + 0x90]
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x1
        jz      l_check_ptr
        xor     al, al
        ret
    l_check_ptr:
        mov     eax, dword ptr [ecx + 0x14]
        test    eax, eax
        jz      l_return_1
        mov     eax, dword ptr [eax]
        xor     ecx, ecx
        test    eax, eax
        setz    cl
        mov     al, cl
        ret
    l_return_1:
        xor     eax, eax
        xor     ecx, ecx
        test    eax, eax
        setz    cl
        mov     al, cl
        ret
    }
}
