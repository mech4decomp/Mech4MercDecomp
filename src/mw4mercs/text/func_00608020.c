/*
 * FUN_00608020 (33 B) — __thiscall destructor (RET, no stack args) for an
 * animation-blend object. Calls FUN_00608070 (sub-destructor) then tears
 * down sub-objects at +0x28, +0x14, and this via FUN_004169c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00608070(void);
extern void __cdecl FUN_004169c0(void);

__declspec(naked) void FUN_00608020(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00608070
        lea     ecx, [esi + 0x28]
        call    FUN_004169c0
        lea     ecx, [esi + 0x14]
        call    FUN_004169c0
        mov     ecx, esi
        call    FUN_004169c0
        pop     esi
        ret
    }
}
