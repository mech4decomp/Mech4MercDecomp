/*
 * FUN_10028770 (23 B) - __fastcall ctor. Calls FUN_1001c820(this, 0x5252),
 * stores vtable 0x1004ac90 at this+0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10028770(void)
{
    __asm {
        push    esi
        push    0x5252
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004ac90
        mov     eax, esi
        pop     esi
        ret
    }
}
