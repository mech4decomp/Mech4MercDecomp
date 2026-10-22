/*
 * FUN_004124d0 (66 B) — one-time initializer. Calls FUN_006f4710 (stdcall,
 * 3 args) to build a string object stored in g_007b87f0, then allocates a
 * 4-byte object via FUN_004084d0. If the allocation succeeds, constructs it
 * via FUN_00412570 (thiscall) and stores the result in g_007b87ec; otherwise
 * stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849304;
extern int g_007b87f0;
extern int g_007b87ec;
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412570(void);

__declspec(naked) void FUN_004124d0(void)
{
    __asm {
        mov     eax, dword ptr [g_00849304]
        push    eax
        push    0
        push    0x76d1e4
        call    FUN_006f4710
        push    4
        mov     dword ptr [g_007b87f0], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L1
        push    0x76b768
        mov     ecx, eax
        call    FUN_00412570
        mov     dword ptr [g_007b87ec], eax
        ret
L1:
        mov     dword ptr [g_007b87ec], 0
        ret
    }
}
