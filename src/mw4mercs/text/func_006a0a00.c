/*
 * FUN_006a0a00 (30 B) — __thiscall scalar-deleting destructor RET 0x4.
 * Calls FUN_006a0a40 (dtor), then if (arg0 & 1) operator delete(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a0a40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006a0a00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a0a40
        test    byte ptr [esp + 0x8], 0x1
        jz      L0A18
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L0A18:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
