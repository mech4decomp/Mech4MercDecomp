/*
 * FUN_005cc130 (104 B) — NonComAI object factory. Allocates 0xa4 bytes,
 *   calls FUN_00501a20 (__thiscall) with a large arg list, stores result
 *   in DAT_007f23c0. Second entry at 0x5CC18D zeroes DAT_007f23c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_004084d0(void);
extern void FUN_00501a20(void);

__declspec(naked) void FUN_005cc130(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f24d8;
extern int DAT_007f23c0;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_second
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007f24d8]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5cc1d0
        push    0x787d58
        push    1
        push    edx
        push    0x787d64
        push    0x4af
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f23c0], eax
        ret

    l_second:
        mov dword ptr [DAT_007f23c0], 0x0
        ret
    }


}
