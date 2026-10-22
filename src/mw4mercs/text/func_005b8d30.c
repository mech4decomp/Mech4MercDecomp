/*
 * FUN_005b8d30 (39 B) — Shutdown. If the global object at 0x007f2124 is
 * non-null, calls FUN_00501b40(this) then frees it via FUN_004084e0.
 * Zeroes the global. __cdecl, no args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void *this_);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005b8d30(void)
{
    

extern int DAT_007f2124;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2124]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
l_skip:
        mov dword ptr [DAT_007f2124], 0x0
        pop     esi
        ret
    }


}
