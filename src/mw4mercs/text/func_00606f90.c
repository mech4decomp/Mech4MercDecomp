/*
 * FUN_00606f90 (29 B) — __thiscall constructor: sets the vtable pointer
 * (0x78bae8), constructs the sub-object at +0x1e4 (FUN_00417980), and
 * calls FUN_004e23c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004e23c0(void);

__declspec(naked) void FUN_00606f90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi+0x1e4]
        mov     dword ptr [esi], 0x78bae8
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004e23c0
        pop     esi
        ret
    }
}
