/*
 * FUN_005a8d00 (30 B) — __thiscall scalar-deleting-ish destructor wrapper.
 * Calls FUN_005a8d20 (sub-object ctor/dtor), then if (arg1 & 1) frees `this`
 * via FUN_004084e0. Returns `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005a8d20(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_005a8d00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a8d20
        test    byte ptr [esp+8], 1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
