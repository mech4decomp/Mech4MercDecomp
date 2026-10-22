/*
 * FUN_005b10a0 (39 B) — destroys the global Helicopter object at 0x007F20F0
 * if present, then clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *obj);

__declspec(naked) void __stdcall FUN_005b10a0(void)
{
    

extern int DAT_007f20f0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20f0]
        test    esi, esi
        jz      L10BB
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L10BB:
        mov dword ptr [DAT_007f20f0], 0x0
        pop     esi
        ret
    }


}
