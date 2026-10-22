/*
 * FUN_005c03b0 (30 B) — __thiscall destructor (ECX = this, one flags dword
 * param, RET 4).
 *
 * Calls FUN_005c03d0(this); if (flags & 1) frees this via FUN_004084e0;
 * returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c03d0(void);
extern void FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005c03b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005c03d0
        test    byte ptr [esp + 8], 1
        jz      L_c8
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_c8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
