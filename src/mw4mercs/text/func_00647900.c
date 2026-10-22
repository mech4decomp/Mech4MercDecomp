/*
 * FUN_00647900 (15 B) — __thiscall (ECX = this) predicate.
 *
 * Calls FUN_00417a40 on this+0x2c and returns whether it was non-zero
 * (bool via neg/sbb/neg idiom).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417a40(void);

__declspec(naked) int __fastcall FUN_00647900(void *this)
{
    __asm {
        add     ecx, 0x2c
        call    FUN_00417a40
        neg     eax
        sbb     eax, eax
        neg     eax
        ret
    }
}
