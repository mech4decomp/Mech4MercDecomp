/*
 * FUN_005f0670 (39 B) — Destructor/cleanup for a global object at 0x007f25b4.
 *
 * If the global is non-null, calls FUN_00501b40 (thiscall on it) then
 * FUN_004084e0 (free), then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void FUN_005f0670(void)
{
    

extern int DAT_007f25b4;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f25b4]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov dword ptr [DAT_007f25b4], 0x0
        pop     esi
        ret
    }


}
