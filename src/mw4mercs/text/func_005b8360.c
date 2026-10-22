/*
 * FUN_005b8360 (30 B) — Scalar-deleting destructor. Calls FUN_004dd1c0();
 * if (param1 & 1) frees this via FUN_004084e0(); returns this.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd1c0(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005b8360(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 0x8], 1
        jz      L_78
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_78:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
