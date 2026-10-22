/*
 * FUN_0067fb00 (30 B) — HUD object destructor. Calls FUN_0067fb20 (base
 * ctor), then frees `this` if the flag bit is set. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0067fb20(void);
extern void FUN_004084e0(void *);

__declspec(naked) void FUN_0067fb00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0067fb20
        test    byte ptr [esp+0x8], 0x1
        jz      loc_fb18
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_fb18:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
