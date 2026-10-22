/*
 * FUN_00414b80 (389 B) — archive/database subsystem one-time initializer.
 *
 * Sets terminate handler, builds the "Stuff" context strings, initializes
 * the context stack, allocates the archive object, and registers a series
 * of "Libraries\Stuff\..." string tables via FUN_0070f090.
 *
 * Calling convention: __cdecl, 4 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   set_terminate (IAT 0x0076b2b8)
 *   FUN_006f4710 / FUN_006f4950 / FUN_006f49a0 — context/string helpers
 *   FUN_004124d0 / FUN_004150e0 / FUN_004152f0 / FUN_0041fba0 /
 *   FUN_00417810 / FUN_004173b0 / FUN_00412e80 / FUN_00414f10 /
 *   FUN_0041e620 / FUN_0041ddb0 / FUN_0041aee0 / FUN_0070f090
 *   FUN_004084d0 — alloc
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void *g_0076b2b8;            /* IAT: set_terminate */
extern int   g_00849304;
extern int   g_007b8814;
extern int   g_007b8810;
extern int   g_007b87f4;
extern char  g_007b21f8;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004124d0(void);
extern void __cdecl FUN_004150e0(void);
extern void __cdecl FUN_004152f0(void);
extern void __cdecl FUN_0041fba0(void);
extern void __cdecl FUN_00417810(void);
extern void __cdecl FUN_004173b0(void);
extern void __cdecl FUN_00412e80(void);
extern void __cdecl FUN_00414f10(void);
extern void __cdecl FUN_0041e620(void);
extern void __cdecl FUN_0041ddb0(void);
extern void __cdecl FUN_0041aee0(void);
extern void __cdecl FUN_0070f090(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void func_00414b80(void)
{
    __asm {
        push    0x414b60
        call    dword ptr [g_0076b2b8]   ; set_terminate(&LAB_00414b60)
        mov     eax, dword ptr [g_00849304]
        add     esp, 4
        push    eax
        push    0
        push    0x76d3bc                ; "Stuff(All)"
        call    FUN_006f4710
        push    eax
        push    0
        push    0x76d3b4                ; "Stuff"
        mov     dword ptr [g_007b8814], eax
        call    FUN_006f4710
        push    eax
        mov     dword ptr [g_007b8810], eax
        call    FUN_006f4950
        call    FUN_004124d0
        mov     ecx, [esp+0x10]
        push    ecx
        call    FUN_004150e0
        call    FUN_004152f0
        mov     edx, [esp+0x8]
        push    edx
        call    FUN_0041fba0
        mov     eax, [esp+0x10]
        push    eax
        call    FUN_00417810
        mov     ecx, [esp+0x18]
        push    ecx
        call    FUN_004173b0
        push    0x10
        call    FUN_004084d0            ; alloc(0x10)
        add     esp, 0x14
        test    eax, eax
        jz      set_zero
        mov     ecx, eax
        call    FUN_00412e80
        mov     dword ptr [g_007b87f4], eax
        jmp     after_alloc
    set_zero:
        mov     dword ptr [g_007b87f4], 0
    after_alloc:
        call    FUN_00414f10
        call    FUN_0041e620
        call    FUN_0041ddb0
        call    FUN_0041aee0
        push    0
        push    0x414db0
        push    0x414d60
        push    0x414d10
        push    0x76d394                ; "Libraries\Stuff\Armor Level 0"
        call    FUN_0070f090
        push    0
        push    0x414db0
        push    0x414d70
        push    0x414d20
        push    0x76d374                ; "Libraries\Stuff\Armor Level 1"
        call    FUN_0070f090
        push    0
        push    0x414db0
        push    0x414d80
        push    0x414d30
        push    0x76d354                ; "Libraries\Stuff\Armor Level 2"
        call    FUN_0070f090
        push    0
        push    0x414db0
        push    0x414d90
        push    0x414d40
        push    0x76d334                ; "Libraries\Stuff\Armor Level 3"
        call    FUN_0070f090
        push    0
        push    0x414db0
        push    0x414da0
        push    0x414d50
        push    0x76d314                ; "Libraries\Stuff\Armor Level 4"
        call    FUN_0070f090
        push    0
        push    0
        push    0x414e20
        push    0x414dc0
        push    0x76d2fc                ; "Libraries\Stuff\4hz min"
        call    FUN_0070f090
        push    0
        push    0
        push    0x414e40
        push    0x414de0
        push    0x76d2e0                ; "Libraries\Stuff\40hz min"
        call    FUN_0070f090
        push    0
        push    0
        push    0x414e60
        push    0x414e00
        push    0x76d2c4                ; "Libraries\Stuff\400hz min"
        call    FUN_0070f090
        call    FUN_006f49a0
        mov     byte ptr [g_007b21f8], 1
        ret
    }
}
