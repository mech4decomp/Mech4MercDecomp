/*
 * FUN_004a1bc0 (39 B) — MLR particle/shrapnel: singleton teardown. If global
 * 0x7da978 is set, calls FUN_00415200 then frees via FUN_004084e0; clears
 * the global. __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern void *g_7da978;

__declspec(naked) void FUN_004a1bc0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_7da978]
        test    esi, esi
        jz      L1bdb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1bdb:
        mov     dword ptr [g_7da978], 0x0
        pop     esi
        ret
    }
}
