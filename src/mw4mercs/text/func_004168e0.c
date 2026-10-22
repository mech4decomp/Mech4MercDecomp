/*
 * FUN_004168e0 (37 B) — DB item/pool constructor helper (__thiscall, two
 * stack args). Stores arg1 at [this+4] and arg2 at [this+0xc], calls
 * FUN_00415d40(arg2), zeroes [this+0x10] and [this+0x14], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415d40(void);

__declspec(naked) void FUN_004168e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 4], eax
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        xor     eax, eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], eax
        mov     eax, esi
        pop     esi
        ret     8
    }
}
