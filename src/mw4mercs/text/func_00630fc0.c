/*
 * FUN_00630fc0 (30 B) — __thiscall scalar deleting destructor.
 * Calls FUN_0041fc90 (destructor); if (flags & 1) operator delete(this).
 * RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00630fc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 0x8], 0x1
        jz      L_fd8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_fd8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
