/*
 * FUN_004D7CB0 (17 B) — Constructor-like: saves this (ECX) in ESI,
 * calls FUN_004D7D70, then calls FUN_004D7CD0 on same this.
 *
 * __thiscall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d7d70(void);
extern void __fastcall FUN_004d7cd0(void);

__declspec(naked) void __fastcall FUN_004d7cb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004d7d70
        mov     ecx, esi
        call    FUN_004d7cd0
        pop     esi
        ret
    }
}
