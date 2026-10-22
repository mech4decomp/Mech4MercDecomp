/*
 * FUN_004E4830 (58 B) - Allocates and constructs a 0x158-byte object.
 *
 * Calls FUN_006F4950(DAT_007DAA00), allocates 0x158 bytes, constructs
 * via FUN_004B54C0 (thiscall), wraps with FUN_006F49A0, returns the
 * object (or 0 on alloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *__cdecl FUN_004b54c0(void);
extern void __cdecl FUN_006f49a0(void);
extern int DAT_007daa00;

__declspec(naked) void FUN_004E4830(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007daa00]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x158
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        mov     ecx, eax
        call    FUN_004b54c0
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    l_fail:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
