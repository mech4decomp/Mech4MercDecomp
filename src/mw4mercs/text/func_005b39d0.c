/*
 * FUN_005b39d0 (39 B) — If 0x007f20fc != 0, call FUN_004dd340() then
 * FUN_004084e0(ptr); then store 0 at 0x007f20fc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd340(void);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void FUN_005b39d0(void)
{
    

extern int DAT_007f20fc;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20fc]
        test    esi, esi
        jz      skip
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov dword ptr [DAT_007f20fc], 0x0
        pop     esi
        ret
    }


}
