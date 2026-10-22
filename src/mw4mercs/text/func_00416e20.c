/*
 * FUN_00416e20 (44 B) — __thiscall (RET 0x8). Calls FUN_00415bb0(0),
 * stores arg2 (byte) at this->[+8], zeroes this->[+0xc/+0x10/+0x14],
 * returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415bb0(void);

__declspec(naked) void FUN_00416e20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x0
        call    FUN_00415bb0
        mov     al, byte ptr [esp + 0xc]
        mov     byte ptr [esi + 0x8], al
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi + 0x10], 0x0
        mov     dword ptr [esi + 0x14], 0x0
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
