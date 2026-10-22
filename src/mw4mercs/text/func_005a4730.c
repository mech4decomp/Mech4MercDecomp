/*
 * FUN_005a4730 (39 B) — Cleanup/destructor function.
 *
 * Loads global DAT_007f204c, calls FUN_00501b40 on it,
 * frees with FUN_004084e0, sets global to 0.
 *
 * __cdecl, no params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void *this);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005a4730(void)
{
    

extern int DAT_007f204c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f204c]
        test    esi, esi
        jz      skip_free
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip_free:
        mov dword ptr [DAT_007f204c], 0x0
        pop     esi
        ret
    }


}
