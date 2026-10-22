/*
 * FUN_00768020 (30 B) — __thiscall (ECX = this), one byte param, RET 4.
 * Calls FUN_00767a60; if (param & 1) calls FUN_004084e0(this).
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767a60(void);
extern void __cdecl FUN_004084e0(void *this);

__declspec(naked) void *__fastcall FUN_00768020(void *this, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00767a60
        test    byte ptr [esp + 8], 1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 4
    done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
