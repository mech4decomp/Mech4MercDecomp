/*
 * FUN_006611e0 (64 B) — __thiscall constructor.
 *
 * Calls FUN_006a22e0 on this+0x38, this+0x28, this+0x1c, this+0xc,
 * and this, then if (param & 1) calls FUN_004084e0(this). Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006a22e0(void);
extern void FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_006611e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x38]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x28]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x1c]
        call    FUN_006a22e0
        lea     ecx, [esi + 0xc]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_006a22e0
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
