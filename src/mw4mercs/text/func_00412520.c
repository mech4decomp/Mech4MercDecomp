/*
 * FUN_00412520 (80 B) — teardown/cleanup. If g_007b87ec is non-null, decref
 * its owned buffer ([obj]) and free the object. Then calls FUN_006f4850
 * (stdcall, 2 args) to release the string object in g_007b87f0, and clears
 * both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b87ec;
extern int g_007b87f0;
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_00412520(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b87ec]
        test    esi, esi
        jz      L1
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L2
        push    eax
        call    FUN_004084e0
        add     esp, 4
L2:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, dword ptr [g_007b87f0]
        push    1
        push    eax
        mov     dword ptr [g_007b87ec], 0
        call    FUN_006f4850
        mov     dword ptr [g_007b87f0], 0
        pop     esi
        ret
    }
}
