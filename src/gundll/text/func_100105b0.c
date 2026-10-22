/*
 * FUN_100105b0 (30 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x4102),
 * stores vtable 0x10049770 at this+0, zeroes this+0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_100105b0(void)
{
    __asm {
        push    esi
        push    0x4102
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x10049770
        mov     dword ptr [esi + 0x20], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}
