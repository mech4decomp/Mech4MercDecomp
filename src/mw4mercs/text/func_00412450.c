/*
 * FUN_00412450 (30 B) — container/loader helper (__thiscall, ECX=this).
 * Calls FUN_00411900 (this); if (param_1 & 1), frees this via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411900(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00412450(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00411900
        test    byte ptr [esp + 0x8], 0x1
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
