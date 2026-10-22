/*
 * FUN_006120a0 (30 B) — __thiscall destructor: calls FUN_00613480,
 * then if the low bit of the flags arg is set, frees `this` via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00613480(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006120a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00613480
        test    byte ptr [esp+8], 1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
