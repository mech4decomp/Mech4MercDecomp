/*
 * FUN_005df350 (30 B) — __thiscall (ECX = this), RET 4.
 *
 * Calls FUN_005df370(this); if (arg1 & 1) frees this via FUN_004084e0.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005df370(void *this);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void *__stdcall FUN_005df350(char arg1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005df370
        test    byte ptr [esp + 0x8], 0x1
        jz      L_368
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_368:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
