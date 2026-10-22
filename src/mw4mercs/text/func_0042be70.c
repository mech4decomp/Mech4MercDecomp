/*
 * FUN_0042be70 (30 B) — __thiscall MLR light/material dtor. Calls
 * FUN_0042bf50, then frees this if the flag bit (arg0 & 1) is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0042bf50(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0042be70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0042bf50
        test    byte ptr [esp + 0x8], 0x1
        jz      L_be88
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_be88:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
