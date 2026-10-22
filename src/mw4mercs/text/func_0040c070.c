/*
 * FUN_0040c070 (30 B) — __thiscall destructor-style helper. Calls
 * FUN_0040bbf0, then frees the object via FUN_004084e0 if the
 * "delete flag" (param & 1) is set. Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040bbf0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040c070(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0040bbf0
        test    byte ptr [esp+8], 1
        jz      L_0040c088
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_0040c088:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
