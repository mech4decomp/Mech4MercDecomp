/*
 * FUN_00414e80 (136 B) — archive/database subsystem teardown.
 *
 * Releases the archive object (FUN_00412ea0 + free), clears the global
 * archive pointer, tears down the registered subsystems, and pops the
 * "Stuff" context stack via FUN_006f4850.
 *
 * Calling convention: __cdecl, 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_0041af60 / FUN_0041de00 / FUN_0041e660 / FUN_00414f40 /
 *   FUN_00412ea0 / FUN_004084e0 / FUN_00417400 / FUN_00417860 /
 *   FUN_0041fbf0 / FUN_00415340 / FUN_00415140 / FUN_00412520 /
 *   FUN_006f4850
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern int  g_007b87f4;
extern int  g_007b8810;
extern int  g_007b8814;

extern void __cdecl FUN_0041af60(void);
extern void __cdecl FUN_0041de00(void);
extern void __cdecl FUN_0041e660(void);
extern void __cdecl FUN_00414f40(void);
extern void __cdecl FUN_00412ea0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417400(void);
extern void __cdecl FUN_00417860(void);
extern void __cdecl FUN_0041fbf0(void);
extern void __cdecl FUN_00415340(void);
extern void __cdecl FUN_00415140(void);
extern void __cdecl FUN_00412520(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void func_00414e80(void)
{
    __asm {
        push    esi
        call    FUN_0041af60
        call    FUN_0041de00
        call    FUN_0041e660
        call    FUN_00414f40
        mov     esi, dword ptr [g_007b87f4]
        test    esi, esi
        jz      clear_archive
        mov     ecx, esi
        call    FUN_00412ea0
        push    esi
        call    FUN_004084e0            ; free(esi)
        add     esp, 4
    clear_archive:
        mov     dword ptr [g_007b87f4], 0
        call    FUN_00417400
        call    FUN_00417860
        call    FUN_0041fbf0
        call    FUN_00415340
        call    FUN_00415140
        call    FUN_00412520
        mov     eax, dword ptr [g_007b8810]
        push    1
        push    eax
        call    FUN_006f4850            ; pop_ctx(g_007b8810, 1)
        mov     ecx, dword ptr [g_007b8814]
        push    1
        push    ecx
        mov     dword ptr [g_007b8810], 0
        call    FUN_006f4850            ; pop_ctx(g_007b8814, 1)
        mov     dword ptr [g_007b8814], 0
        pop     esi
        ret
    }
}
