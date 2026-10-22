/*
 * FUN_005a0b50 (30 B) — Destructor-like function.
 * Calls FUN_004dd1c0, then optionally frees this.
 *
 * __thiscall (ECX = this), RET 4 (one byte param for delete flag).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd1c0(void);
extern int __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005a0b50(int this)
{
    __asm {
        push    esi
        mov     esi, ecx

        call    FUN_004dd1c0

        test    byte ptr [esp + 8], 1
        jz      skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4

skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
