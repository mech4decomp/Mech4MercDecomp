/*
 * FUN_005E43D0 (40 B) - Missile object destructor (__fastcall, ECX=this).
 *
 * Sets vtable 0x788FE8, destroys sub-objects at +0x260 and +0x258 via
 * FUN_0041FC90, then calls base destructor FUN_005ED0B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_005ed0b0(void);

__declspec(naked) void __fastcall FUN_005e43d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x260]
        mov     dword ptr [esi], 0x788fe8
        call    FUN_0041fc90
        lea     ecx, [esi + 0x258]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005ed0b0
        pop     esi
        ret
    }
}
