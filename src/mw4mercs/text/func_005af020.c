/*
 * FUN_005af020 (39 B) — __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00501b40(void *ecx);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005af020(void)
{
    

extern int DAT_007f20dc;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20dc]
        test    esi, esi
        jz      skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov dword ptr [DAT_007f20dc], 0x0
        pop     esi
        ret
    }


}
