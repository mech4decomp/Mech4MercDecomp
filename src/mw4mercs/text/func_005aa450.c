/*
 * FUN_005aa450 (30 B) — Destructor (__thiscall, RET 4).
 *
 * Calls FUN_005aa470(this), and if (flags & 1) frees this via
 * FUN_004084e0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005aa470(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void FUN_005aa450(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005aa470
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
