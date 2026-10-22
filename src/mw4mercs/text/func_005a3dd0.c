/*
 * FUN_005a3dd0 (39 B) — Object cleanup/destruction.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_00501b40(void);
extern int __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_005a3dd0(void)
{
    

extern int DAT_007f2044;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2044]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_skip:
        mov dword ptr [DAT_007f2044], 0x0
        pop     esi
        ret
    }


}
