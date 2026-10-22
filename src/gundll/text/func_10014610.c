/*
 * FUN_10014610 (30 B) — __fastcall.
 * Object constructor: calls base ctor FUN_1001c6e0(this, 0x5108), sets
 * vtable 0x100498d8, zeroes offset 0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);

__declspec(naked) void __fastcall FUN_10014610(void)
{
    __asm {
        push    esi
        push    0x5108
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x100498d8
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
