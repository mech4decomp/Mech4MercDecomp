/*
 * FUN_005DBAD0 (33 B) - Setter with global counter.
 *
 * __thiscall (ECX = this), RET 4 (one byte param).
 * If old byte at +0x300 was 0 and new param != 0, increment global
 * counter at 0x007F24D4. Then store new param at +0x300.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_005dbad0(void *this, char param)
{
    

extern int DAT_007f24d4;
__asm {
mov     al, byte ptr [ecx + 0x300]
        test    al, al
        mov     al, byte ptr [esp + 4]
        jnz     l_store
        test    al, al
        jz      l_store
        inc dword ptr [DAT_007f24d4]
    l_store:
        mov     byte ptr [ecx + 0x300], al
        ret     4
    }


}
