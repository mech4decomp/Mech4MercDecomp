/*
 * FUN_10013d40 (30 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x5104),
 * stores vtable 0x100498a8 at this+0, zeroes this+0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10013d40(void)
{
    __asm {
        push    esi
        push    0x5104
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x100498a8
        mov     dword ptr [esi + 0x20], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}
