/*
 * FUN_00630890 (30 B) — __thiscall: calls FUN_006308b0() then, if the
 * flag arg bit 0 is set, frees the object via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006308b0(void);
extern void __cdecl FUN_004084e0(void *a);

__declspec(naked) void FUN_00630890(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006308b0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_a8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_a8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
