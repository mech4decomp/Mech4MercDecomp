/*
 * FUN_005bb860 (39 B) — no args, RET.
 *
 * If global 0x7F2268 is non-null, calls FUN_004d5d20 on it and frees it
 * (FUN_004084e0). Then clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004d5d20(void);
extern void __fastcall FUN_004084e0(void);

__declspec(naked) void FUN_005bb860(void)
{
    

extern int DAT_007f2268;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2268]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov dword ptr [DAT_007f2268], 0x0
        pop     esi
        ret
    }


}
