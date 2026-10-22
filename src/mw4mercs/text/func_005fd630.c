/*
 * FUN_005fd630 (39 B) — teardown/cleanup helper.
 *
 * If global g_007f26b0 is non-null, calls FUN_00501b40() (thiscall on it)
 * then frees it via FUN_004084e0, then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f26b0;
extern void FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void FUN_005fd630(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f26b0]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     dword ptr [g_007f26b0], 0
        pop     esi
        ret
    }
}
