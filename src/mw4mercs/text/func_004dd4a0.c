/*
 * FUN_004DD4A0 (20 B) — Destructor: calls ~COleControlSiteOrWnd on
 * this+0x14, then calls FUN_00415380 on this.
 *
 * __fastcall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0041fc90(void);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_004dd4a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x14]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
