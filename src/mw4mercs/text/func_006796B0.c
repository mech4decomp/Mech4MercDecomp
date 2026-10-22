/*
 * FUN_006796B0 (18 B) — loads [ecx+0x50] into ecx, pushes 0,0,0x76B768,
 * calls FUN_00560420, returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00560420(void);

__declspec(naked) void FUN_006796B0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x50]
        push    0
        push    0
        push    0x76b768
        call    FUN_00560420
        ret
    }
}
