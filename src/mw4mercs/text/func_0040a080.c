/*
 * FUN_0040a080 (34 B) — __fastcall-style destructor: installs vtable
 * pointer 0x76ced8, tears down sub-objects at +0x28 and +0x10, then
 * calls FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416e50(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0040a080(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi+0x28]
        mov     dword ptr [esi], 0x76ced8
        call    FUN_00416e50
        lea     ecx, [esi+0x10]
        call    FUN_00416e50
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
