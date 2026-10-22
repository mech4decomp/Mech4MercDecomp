/*
 * FUN_00660690 (40 B) — __thiscall constructor/destructor wrapper.
 *
 * Saves this (ECX) in ESI, calls FUN_006a22e0 on this+0x24,
 * calls FUN_00661e50 on this, then if (param & 1) calls
 * FUN_004084e0(this). Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006a22e0(void);
extern void FUN_00661e50(void);
extern void FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_00660690(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x24]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_00661e50
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
