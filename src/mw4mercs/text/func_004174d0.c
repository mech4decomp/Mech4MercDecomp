/*
 * FUN_004174d0 (30 B) - __fastcall container constructor.
 * Calls FUN_00415bb0(0), zeroes this[0x8]/[0xc], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415bb0(int);

__declspec(naked) void FUN_004174d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x0
        call    FUN_00415bb0
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [esi + 0xc], 0x0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
