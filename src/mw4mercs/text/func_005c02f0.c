/*
 * FUN_005c02f0 (39 B) — destructor/cleanup.
 *
 * If [0x007f22bc] is non-null, calls FUN_00501b40(this) then frees it via
 * FUN_004084e0, then stores 0 to [0x007f22bc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005c02f0(void)
{
    

extern int DAT_007f22bc;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f22bc]
        test    esi, esi
        jz      L_30b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_30b:
        mov dword ptr [DAT_007f22bc], 0x0
        pop     esi
        ret
    }


}
