/*
 * FUN_10026690 (30 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x5153),
 * stores vtable 0x1004ac00 at this+0, zeroes this+0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10026690(void)
{
    __asm {
        push    esi
        push    0x5153
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004ac00
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
