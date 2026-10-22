/*
 * FUN_00413940 (41 B) — __fastcall (this in ECX). If the node's [0x26]
 * flag is set and [0x20] != -1, frees the buffer at [this+0x8] via
 * FUN_004084e0 and clears the flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00413940(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x26]
        test    al, al
        jz      L1
        cmp     dword ptr [esi + 0x20], -0x1
        jz      L1
        mov     eax, dword ptr [esi + 0x8]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
        mov     byte ptr [esi + 0x26], 0x0
L1:
        pop     esi
        ret
    }
}
