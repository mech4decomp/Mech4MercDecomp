/*
 * FUN_005e20c0 (39 B) — Destroys the object in DAT_007f2538 (calls
 * FUN_00501b40 then frees via FUN_004084e0) and clears DAT_007f2538.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void FUN_005e20c0(void)
{
    

extern int DAT_007f2538;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2538]
        test    esi, esi
        jz      L_20db
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_20db:
        mov dword ptr [DAT_007f2538], 0x0
        pop     esi
        ret
    }


}
