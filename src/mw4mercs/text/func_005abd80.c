/*
 * FUN_005abd80 (39 B) — __cdecl HeatManager singleton teardown.
 *
 * If DAT_007f20c8 != 0, calls FUN_004d5d20() (thiscall) then
 * FUN_004084e0() (delete). Clears DAT_007f20c8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d5d20(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __cdecl FUN_005abd80(void)
{
    

extern int DAT_007f20c8;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20c8]
        test    esi, esi
        jz      clear
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
clear:
        mov dword ptr [DAT_007f20c8], 0x0
        pop     esi
        ret
    }


}
