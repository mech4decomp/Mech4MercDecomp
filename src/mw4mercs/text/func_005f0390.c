/*
 * FUN_005f0390 (39 B) — Cleanup/shutdown of a global object pointer at
 * 0x007f25b0. If non-null, calls FUN_004dd340 (thiscall on the object) then
 * frees it via FUN_004084e0, then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *DAT_007f25b0;

extern void FUN_004dd340(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void FUN_005f0390(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007f25b0]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     dword ptr [DAT_007f25b0], 0
        pop     esi
        ret
    }
}
