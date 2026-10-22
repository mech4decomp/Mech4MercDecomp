/*
 * FUN_005fc970 (30 B) — __thiscall destructor wrapper. Calls FUN_005fc990
 * (this), then if the "delete" flag (arg & 1) is set, frees via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005fc990(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005fc970(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005fc990
        test    byte ptr [esp+0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
