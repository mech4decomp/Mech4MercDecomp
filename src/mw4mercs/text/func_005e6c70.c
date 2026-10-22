/*
 * FUN_005e6c70 (39 B) — Global object teardown helper.
 *
 * If the global at 0x007f2560 is non-null, calls FUN_00501b40 (thiscall,
 * ECX = obj) then frees it via FUN_004084e0, then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void FUN_005e6c70(void)
{
    

extern int DAT_007f2560;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2560]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov dword ptr [DAT_007f2560], 0x0
        pop     esi
        ret
    }


}
