/*
 * FUN_005abbb0 (39 B) — __cdecl, no args.
 *
 * Cleanup routine: destroys the HeatSink object at global 0x007f20c4 and
 * zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005abbb0(void)
{
    

extern int DAT_007f20c4;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20c4]
        test    esi, esi
        jz      L_abbcb
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_abbcb:
        mov dword ptr [DAT_007f20c4], 0x0
        pop     esi
        ret
    }


}
