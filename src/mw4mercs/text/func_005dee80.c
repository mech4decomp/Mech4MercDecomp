/*
 * FUN_005DEE80 (4 B) — __fastcall (this in ECX). Returns the dword at
 * this+0x40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int __cdecl FUN_005dee80(void)
{
    __asm {
        mov     eax, [ecx + 0x40]
        ret
    }
}
