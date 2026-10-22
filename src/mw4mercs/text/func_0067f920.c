/*
 * FUN_0067f920 (26 B) — HUD object constructor. Sets vtable pointer
 * (0x798818), calls member ctor on [this+0x10], then FUN_00415380.
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fc90(void);
extern void FUN_00415380(void);

__declspec(naked) void FUN_0067f920(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi+0x10]
        mov     dword ptr [esi], 0x798818
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
