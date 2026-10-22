/*
 * FUN_00412b60 (26 B) — __fastcall destructor: sets vtable 0x76d1f0,
 * calls FUN_0041ef60() on [this+0x10], then FUN_00415380() on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00412b60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi], 0x76d1f0
        call    FUN_0041ef60
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
