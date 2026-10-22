/*
 * FUN_005CD850 (104 B) — __cdecl, RET 0.
 * Allocates 0xa4 bytes; if success, calls FUN_00501a20 (thiscall) with a
 * large argument list and stores the result to global 0x007f23d8; else
 * stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__stdcall FUN_004084d0(int size);
extern int __fastcall FUN_00501a20(void *this);

__declspec(naked) void FUN_005cd850(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f24d8;
extern int DAT_007f23d8;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_8ad
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007f24d8]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5cd8f0
        push    0x787ed0
        push    0x1
        push    edx
        push    0x787edc
        push    0x47b
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f23d8], eax
        ret
    l_8ad:
        mov dword ptr [DAT_007f23d8], 0x0
        ret
    }


}
