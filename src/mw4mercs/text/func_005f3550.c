/*
 * FUN_005f3550 (39 B) — Destructor/cleanup for a global object at 0x007f25c0.
 *
 * If the global is non-null, calls FUN_00501b40 (thiscall on it) then
 * FUN_004084e0 (free), then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f25c0;
extern void FUN_00501b40(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005f3550(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007f25c0]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov     dword ptr [DAT_007f25c0], 0
        pop     esi
        ret
    }
}
