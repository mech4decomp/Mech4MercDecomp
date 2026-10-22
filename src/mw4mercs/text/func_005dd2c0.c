/*
 * FUN_005dd2c0 (39 B) — if DAT_007f24d0 non-null, calls FUN_00652580()
 * and FUN_004084e0(ptr), then clears DAT_007f24d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00652580(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005dd2c0(void)
{
    

extern int DAT_007f24d0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f24d0]
        test    esi, esi
        jz      L_5dd2e5
        mov     ecx, esi
        call    FUN_00652580
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov dword ptr [DAT_007f24d0], 0x0
L_5dd2e5:
        pop     esi
        ret
    }


}
