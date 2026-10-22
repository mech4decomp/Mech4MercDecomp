/*
 * FUN_004D4610 (32 B) — Constructor.
 *
 * __thiscall (ECX = this), no stack params.
 * Sets vtable, initializes sub-object at +0x5c, calls sub-constructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416320(int this);
extern void __fastcall FUN_00491e40(int this);

__declspec(naked) void __fastcall FUN_004D4610(int this)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x5c]
        mov     dword ptr [esi], 0x00772994
        mov     dword ptr [ecx], 0x007729a0
        call    FUN_00416320
        mov     ecx, esi
        call    FUN_00491e40
        pop     esi
        ret
    }
}
