/*
 * FUN_005DEE60 (4 B) — __fastcall (this in ECX). Returns the dword at
 * this+0x2c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __cdecl FUN_005dee60(void)
{
    __asm {
        mov     eax, [ecx + 0x2c]
        ret
    }
}
