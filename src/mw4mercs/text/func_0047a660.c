/*
 * FUN_0047a660 (30 B) — MLR PMesh destructor (__thiscall, RET 0x4).
 * Calls base dtor FUN_0047ab90, then frees the object if the
 * "delete flag" (arg & 1) is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047ab90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0047a660(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0047ab90
        test    byte ptr [esp+0x8], 0x1
        jz      L_47a678
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_47a678:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
