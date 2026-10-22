/*
 * FUN_100144e0 (23 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x5107),
 * stores vtable 0x100498cc at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_100144e0(void)
{
    __asm {
        push    esi
        push    0x5107
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x100498cc
        mov     eax, esi
        pop     esi
        ret
    }
}
