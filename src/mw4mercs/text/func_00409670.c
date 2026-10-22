/*
 * FUN_00409670 (46 B) — __fastcall destructor. Sets vtables, destroys
 * sub-objects at +0x24 and +0x10 via FUN_00416320, then calls
 * FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00409670(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi+0x24]
        mov     dword ptr [esi], 0x76ce00
        mov     dword ptr [ecx], 0x76ce04
        call    FUN_00416320
        lea     ecx, [esi+0x10]
        mov     dword ptr [ecx], 0x76ce04
        call    FUN_00416320
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
