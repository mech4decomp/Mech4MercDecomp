/*
 * FUN_005aada0 (30 B) — __thiscall, RET 4.
 *
 * Destructor: calls FUN_005aadc0(this), and if (flags & 1) frees this
 * via FUN_004084e0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005aadc0(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void FUN_005aada0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005aadc0
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
