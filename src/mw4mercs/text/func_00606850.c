/*
 * FUN_00606850 (30 B) — __thiscall scalar-deleting destructor
 * (COleControlSiteOrWnd). Calls FUN_0041fc90 (real dtor), then frees via
 * FUN_004084e0 if flag bit 0 set. Returns this; RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00606850(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        jz      L_ret
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_ret:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
