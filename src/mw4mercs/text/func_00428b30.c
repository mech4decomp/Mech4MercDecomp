/*
 * FUN_00428b30 (30 B) — __thiscall scalar-deleting destructor: calls the
 * real destructor FUN_00428c00(this), and if the flag arg (byte at
 * [esp+8]) has bit 0 set, frees this via FUN_004084e0. Returns this.
 * RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00428c00(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00428b30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00428c00
        test    byte ptr [esp+8], 1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
