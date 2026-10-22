/*
 * FUN_005aacf0 (39 B) — __cdecl, RET.
 *
 * If global 0x007f20ac is non-null, calls FUN_00501b40() then frees it
 * via FUN_004084e0, then clears 0x007f20ac to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void FUN_005aacf0(void)
{
    

extern int DAT_007f20ac;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20ac]
        test    esi, esi
        jz      L_done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_done:
        mov dword ptr [DAT_007f20ac], 0x0
        pop     esi
        ret
    }


}
