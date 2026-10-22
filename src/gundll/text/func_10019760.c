/*
 * FUN_10019760 (30 B) — __fastcall, RET.
 * Object constructor: calls FUN_1001c6e0(this, 0x7103), sets vtable
 * 0x10049a88, zeroes offset 0x20.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10019760(void)
{
    __asm {
        push    esi
        push    0x7103
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x10049a88
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
