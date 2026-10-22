/*
 * FUN_005ea120 (39 B) — RET 0. Destroys the Torso object at 0x007f2584.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void *param);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005ea120(void)
{
    

extern int DAT_007f2584;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2584]
        test    esi, esi
        jz      L_A13B
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_A13B:
        mov dword ptr [DAT_007f2584], 0x0
        pop     esi
        ret
    }


}
