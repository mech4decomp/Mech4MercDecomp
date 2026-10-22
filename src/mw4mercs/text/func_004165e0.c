/*
 * FUN_004165e0 (14 B) — database item/pool helper. __fastcall (this in ECX).
 * Calls FUN_00416840(0) (thiscall), returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416840(void);

__declspec(naked) void FUN_004165e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x0
        call    FUN_00416840
        mov     eax, esi
        pop     esi
        ret
    }
}
