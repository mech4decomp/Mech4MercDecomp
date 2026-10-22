/*
 * FUN_0040aab0 (34 B) — __fastcall destructor: sets vtable 0x76cf68, destroys
 * sub-objects at +0x24 and +0x10 via FUN_004169c0, then calls FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0040aab0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi+0x24]
        mov     dword ptr [esi], 0x76cf68
        call    FUN_004169c0
        lea     ecx, [esi+0x10]
        call    FUN_004169c0
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
