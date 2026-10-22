/*
 * FUN_00422fb0 (30 B) — __thiscall scalar-deleting destructor.
 * Calls FUN_00422fd0 (vtable init), then if the flag arg (bit 0 of the
 * stack arg) is set, frees the object via operator delete. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00422fd0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00422fb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00422fd0
        test    byte ptr [esp+0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
