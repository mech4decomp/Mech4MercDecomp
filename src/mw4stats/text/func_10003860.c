/*
 * FUN_10003860 (12 B) - calls FUN_10003870(this), returns this.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10003860 (12 B) -- fastcall trivial ctor: call base ctor 0x10003870
 * (a thiscall member), return this.
 */

extern void __cdecl FUN_10003870(void);

__declspec(naked) void *__cdecl FUN_10003860(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003870
        mov     eax, esi
        pop     esi
        ret
    }
}
