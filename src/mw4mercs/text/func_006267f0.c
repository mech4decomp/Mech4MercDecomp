/*
 * FUN_006267f0 (30 B) — __thiscall scalar deleting destructor: calls the
 * real destructor FUN_00626810, then frees via FUN_004084e0 if the
 * low bit of the flag arg is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00626810(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006267f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00626810
        test    byte ptr [esp + 0x8], 0x1
        jz      LAB_626808
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

LAB_626808:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
