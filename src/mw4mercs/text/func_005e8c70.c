/*
 * FUN_005e8c70 (39 B) - Destructor/cleanup for the BeamEntity subsystem.
 * If DAT_007f257c != 0, calls FUN_00501b40 (thiscall) then frees via
 * FUN_004084e0, then zeroes DAT_007f257c.
 *
 * No params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void FUN_005e8c70(void)
{
    

extern int DAT_007f257c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f257c]
        test    esi, esi
        jz      L_005e8c8b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_005e8c8b:
        mov dword ptr [DAT_007f257c], 0x0
        pop     esi
        ret
    }


}
