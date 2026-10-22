/*
 * FUN_0060FC70 (30 B) — __thiscall scalar deleting destructor (RET 0x4).
 * Calls FUN_0060fc90 (this), then if (flags&1) operator delete(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060fc90(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0060FC70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0060fc90
        test    byte ptr [esp + 0x8], 0x1
        jz      L_88
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_88:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
