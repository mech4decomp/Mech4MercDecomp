/*
 * FUN_005e6920 (30 B) — __thiscall destructor (RET 4).
 *
 * Saves this (ECX) in ESI, calls FUN_004dd1c0(). If (param & 1) != 0,
 * calls FUN_004084e0(this). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd1c0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void func_005e6920(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        jz      loc_5E6938

        push    esi
        call    FUN_004084e0
        add     esp, 4

loc_5E6938:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
