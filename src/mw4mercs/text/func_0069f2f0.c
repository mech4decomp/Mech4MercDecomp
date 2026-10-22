/*
 * FUN_0069f2f0 (30 B) — __thiscall, ECX = this, 1 param (RET 0x4).
 *
 * Calls FUN_006b07b0 (base ctor), then if (param_1 & 1) frees via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b07b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0069f2f0(int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006b07b0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_308
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_308:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
