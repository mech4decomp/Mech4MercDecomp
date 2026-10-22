/*
 * FUN_00408c30 (34 B) — __fastcall destructor. Tears down the three nested
 * sub-objects (at +0x20, +0x10, and the base) and resets the vtable pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004155f0(int);
extern void __cdecl FUN_00415380(int);

__declspec(naked) void FUN_00408c30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi], 0x76cd6c
        call    FUN_004155f0
        lea     ecx, [esi + 0x10]
        call    FUN_004155f0
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
