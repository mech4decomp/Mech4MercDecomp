/*
 * FUN_004ebc50 (75 B) — teardown. Destroys the two objects created by
 * FUN_004ebbd0: g_007dc7d0 (via FUN_00415200 + free FUN_004084e0) and
 * g_007dc7d4 (via FUN_00415e30 + free), then zeroes both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00415e30(void);

extern int g_007dc7d0;
extern int g_007dc7d4;

__declspec(naked) void FUN_004ebc50(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007dc7d0]
        test    esi, esi
        jz      L_second
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_second:
        mov     esi, dword ptr [g_007dc7d4]
        test    esi, esi
        mov     dword ptr [g_007dc7d0], 0
        jz      L_done
        mov     ecx, esi
        call    FUN_00415e30
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_done:
        mov     dword ptr [g_007dc7d4], 0
        pop     esi
        ret
    }
}
