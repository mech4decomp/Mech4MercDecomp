/*
 * FUN_00680df0 (30 B) — __thiscall destructor/refcount wrapper. Calls
 * FUN_00416c60(); if the stack flag (param & 1) is set, calls
 * FUN_004084e0(this). Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void *__stdcall FUN_00680df0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416c60
        test    byte ptr [esp + 8], 1
        jz      L_ret
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_ret:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
