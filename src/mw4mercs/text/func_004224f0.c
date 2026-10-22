/*
 * FUN_004224f0 (30 B) — MLR object dtor (__thiscall, RET 0x4).
 * Calls sub-dtor FUN_00422660, then frees via operator delete
 * (FUN_004084e0) if the "delete flag" bit 0 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00422660(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void FUN_004224f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00422660
        test    byte ptr [esp + 0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
