/*
 * FUN_005c14a0 (30 B) — __thiscall (ECX = this), RET 4. Calls FUN_005c1520
 * (destructor), then frees via FUN_004084e0 if the flag param bit 0 is set.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c1520(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_005c14a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005c1520
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
