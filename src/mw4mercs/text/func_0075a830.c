/*
 * FUN_0075A830 (30 B) — __thiscall method: calls FUN_0075A8C0(this),
 * then if (flags & 1) calls FUN_004084E0(this); returns this.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_0075A8C0(void);
extern void __cdecl FUN_004084E0(void *this);

__declspec(naked) void FUN_0075A830(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0075A8C0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_a848
        push    esi
        call    FUN_004084E0
        add     esp, 0x4
    L_a848:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
