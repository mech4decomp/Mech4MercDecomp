/*
 * FUN_006a3590 (50 B) - __thiscall constructor. Calls FUN_006a24c0, sets
 * this->0 = 0x7952d0 (vtable), calls FUN_006a2800(0x40000000, 0x42340000)
 * on this+0xc, calls FUN_006a28d0 on this+0x1c, then sets this->0 =
 * 0x799db0 (vtable) and returns this.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a24c0(void);
extern void __cdecl FUN_006a2800(void);
extern void __cdecl FUN_006a28d0(void);

__declspec(naked) void __stdcall FUN_006a3590(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a24c0
        push    0x42340000
        push    0x40000000
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esi], 0x7952d0
        call    FUN_006a2800
        lea     ecx, [esi + 0x1c]
        call    FUN_006a28d0
        mov     dword ptr [esi], 0x799db0
        mov     eax, esi
        pop     esi
        ret
    }
}
