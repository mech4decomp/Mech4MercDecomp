/*
 * FUN_005bd220 (30 B) — __thiscall (ECX = this, RET 4). Calls FUN_005bd240,
 *   then frees this via FUN_004084e0 if (flags & 1). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005bd240(void *this);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *__fastcall FUN_005bd220(void *this, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005bd240
        test    byte ptr [esp + 8], 1
        jz      l_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
