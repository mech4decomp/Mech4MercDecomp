/*
 * FUN_005d9940 (30 B) — __thiscall dtor, RET 4. Calls FUN_005d9960();
 * if (flags & 1) calls FUN_004084e0(this). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005d9960(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __cdecl FUN_005d9940(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005d9960
        test    byte ptr [esp + 0x8], 0x1
        jz      L_9958
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_9958:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
