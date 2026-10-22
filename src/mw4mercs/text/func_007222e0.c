/*
 * FUN_007222E0 (74 B) — teardown helper: drains a linked list rooted at
 * DAT_00896cc0 (calling FUN_0072f660 + FUN_004084e0 per node), then calls
 * FUN_00722330, frees DAT_00857f40 via FUN_00740db0, and zeroes it.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00722470(void);
extern void __cdecl FUN_0072f660(void);
extern void __cdecl FUN_004084e0(void *param);
extern void __cdecl FUN_00722330(void);
extern void __cdecl FUN_00740db0(void *param);
extern int g_896cc0;
extern int g_857f40;

__declspec(naked) void __cdecl FUN_007222e0(void)
{
    __asm {
        push    esi
        call    FUN_00722470
        mov     esi, dword ptr [g_896cc0]
        test    esi, esi
        jz      L1
L0:
        mov     ecx, esi
        call    FUN_0072f660
        push    esi
        call    FUN_004084e0
        mov     esi, dword ptr [g_896cc0]
        add     esp, 0x4
        test    esi, esi
        jnz     L0
L1:
        call    FUN_00722330
        mov     eax, dword ptr [g_857f40]
        test    eax, eax
        pop     esi
        jz      L2
        push    eax
        call    FUN_00740db0
L2:
        mov     dword ptr [g_857f40], 0
        ret
    }
}
