/*
 * FUN_005aaa50 (39 B) — AMS subsystem shutdown.
 * Loads global 0x007F20A8; if non-null calls FUN_00501b40 (thiscall,
 * ECX=this) then frees via FUN_004084e0. Zeroes the global.
 *
 * __cdecl, no args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __cdecl FUN_005aaa50(void)
{
    

extern int DAT_007f20a8;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20a8]
        test    esi, esi
        jz      L_done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_done:
        mov dword ptr [DAT_007f20a8], 0x0
        pop     esi
        ret
    }


}
