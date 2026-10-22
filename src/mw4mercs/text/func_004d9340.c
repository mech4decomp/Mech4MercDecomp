/*
 * FUN_004d9340 (86 B) — teardown/cleanup: releases a cached object and
 * frees two global handles via FUN_006f4850, then zeroes the globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc690;
extern int g_007dc68c;
extern int g_007dc688;

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_006f4850(int, int);

__declspec(naked) void FUN_004d9340(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007dc690]
        test    esi, esi
        jz      L_935b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_935b:
        mov     eax, dword ptr [g_007dc68c]
        push    1
        push    eax
        mov     dword ptr [g_007dc690], 0
        call    FUN_006f4850
        mov     ecx, dword ptr [g_007dc688]
        push    1
        push    ecx
        mov     dword ptr [g_007dc68c], 0
        call    FUN_006f4850
        mov     dword ptr [g_007dc688], 0
        pop     esi
        ret
    }
}
