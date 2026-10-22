/*
 * FUN_005EBC80 (30 B) — __thiscall (ECX = this), RET 4 (1 param).
 * Destructor: calls FUN_00416c60, and if (param & 1) frees this via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *__fastcall FUN_005ebc80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416c60
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
