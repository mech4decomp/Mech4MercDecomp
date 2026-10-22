/*
 * FUN_005a68a0 (62 B) — Destructor/cleanup function.
 *
 * Sets vtable, destroys 4 sub-objects, then calls FUN_005f07e0.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0041fc90(void *this_sub);
extern void __cdecl FUN_005f07e0(void);

__declspec(naked) void __cdecl FUN_005a68a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x19c]
        mov     dword ptr [esi], 0x784a38
        call    FUN_0041fc90
        lea     ecx, [esi + 0x194]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x18c]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x184]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005f07e0
        pop     esi
        ret
    }
}
