/*
 * FUN_1001edc0 (44 B) - __cdecl (1 arg). CRT onexit registration: if the
 * onexit table is uninitialized (-1) use _onexit, else __dllonexit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1001edc0 (44 B, __cdecl, 1 arg) - CRT onexit registration wrapper.
 * If the onexit table pointer (g_100275c0) is still the uninitialized
 * sentinel (-1), route through the IAT _onexit; otherwise call the
 * __dllonexit helper FUN_1001f008(func, &g_100275c0, &g_100275bc).
 * CFLAGS: /O1 (recorded in cpp/opts.txt; deviates from module default /O2)
 */

extern int g_100275c0;          /* DAT_100275c0 */
extern char g_100275bc;         /* DAT_100275bc */
extern void *g_100210cc;        /* IAT: _onexit */
extern void __cdecl FUN_1001f008(void);

__declspec(naked) void __cdecl FUN_1001edc0(void)
{
    __asm {
        cmp     dword ptr [g_100275c0], -1
        jnz     L_edd5
        push    dword ptr [esp + 0x4]
        call    dword ptr [g_100210cc]
        pop     ecx
        ret
L_edd5:
        push    offset g_100275bc
        push    offset g_100275c0
        push    dword ptr [esp + 0xc]
        call    FUN_1001f008
        add     esp, 0xc
        ret
    }
}
