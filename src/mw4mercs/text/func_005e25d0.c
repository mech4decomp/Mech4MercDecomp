/*
 * FUN_005e25d0 (30 B) — __thiscall destructor (RET 4, one byte param).
 *
 * Calls FUN_005e25f0(this), then if (param & 1) frees this via
 * FUN_004084e0(this). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e25f0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005e25d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e25f0
        test    byte ptr [esp + 0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
