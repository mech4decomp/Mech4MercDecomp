/*
 * FUN_0060FB50 (30 B) — __thiscall scalar deleting destructor (RET 0x4).
 * Calls FUN_0041fc90 (this), then if (flags&1) operator delete(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0060FB50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 0x8], 0x1
        jz      L_68
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_68:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
