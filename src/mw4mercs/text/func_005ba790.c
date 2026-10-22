/*
 * FUN_005ba790 (30 B) — scalar deleting destructor, __thiscall (ECX = this),
 * RET 4. Calls FUN_0041fc90 (destructor), then if (flags & 1) frees via
 * FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_005ba790(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 0x8], 0x1
        jz      L_7a8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_7a8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
