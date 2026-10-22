/*
 * FUN_00413970 (22 B) — __fastcall (this in ECX). If the node's [0x26]
 * flag is set and [0x20] != -1, clears the buffer pointer at [this+0x8]
 * and the flag (without freeing).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00413970(void)
{
    __asm {
        mov     dl, byte ptr [ecx + 0x26]
        xor     eax, eax
        cmp     dl, al
        jz      L1
        cmp     dword ptr [ecx + 0x20], -0x1
        jz      L1
        mov     dword ptr [ecx + 0x8], eax
        mov     byte ptr [ecx + 0x26], al
L1:
        ret
    }
}
