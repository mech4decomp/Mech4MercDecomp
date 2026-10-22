/*
 * FUN_00660da0 (32 B) — __thiscall constructor: calls FUN_006a24c0(),
 * installs vtable 0x7952d0, calls FUN_006a28d0() on this+0xc (thiscall),
 * installs vtable 0x7953e4, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a24c0(void);
extern void __cdecl FUN_006a28d0(void);

__declspec(naked) void FUN_00660da0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a24c0
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esi], 0x7952d0
        call    FUN_006a28d0
        mov     dword ptr [esi], 0x7953e4
        mov     eax, esi
        pop     esi
        ret
    }
}
