/*
 * FUN_004931E0 (30 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Calls FUN_00491e40, then optionally frees this via FUN_004084e0 if
 * param_1 & 1. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491e40(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_004931e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00491e40
        test    byte ptr [esp + 8], 1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
