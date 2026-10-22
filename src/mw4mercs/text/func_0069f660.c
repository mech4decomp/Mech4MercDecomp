/*
 * FUN_0069f660 (32 B) — __fastcall, ECX = this.
 *
 * Constructor: calls FUN_006a01e0 (base ctor), sets this[0x10]=-2,
 * this[0x14]=0, installs vtable 0x799bd0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a01e0(void);

__declspec(naked) void FUN_0069f660(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a01e0
        mov     dword ptr [esi + 0x10], 0xfffffffe
        mov     dword ptr [esi + 0x14], 0x0
        mov     dword ptr [esi], 0x799bd0
        mov     eax, esi
        pop     esi
        ret
    }
}
