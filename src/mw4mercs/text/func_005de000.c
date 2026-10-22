/*
 * FUN_005DE000 (37 B) — __fastcall (this in ECX). LancemateManager
 * destructor body: sets vtable 0x00788634, destroys the child list at
 * this+0x10 (FUN_004179F0 / FUN_00417980), then base dtor FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004179f0(void);
extern void __fastcall FUN_00417980(void);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_005de000(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        mov     dword ptr [esi], 0x788634
        call    FUN_004179f0
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
