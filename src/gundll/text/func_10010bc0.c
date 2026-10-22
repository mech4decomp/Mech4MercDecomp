/*
 * FUN_10010bc0 (30 B) - __fastcall. Constructor: calls FUN_1001c6e0(this,0x4105),
 * sets vtable 0x10049794, zeroes this->0x20, returns this.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10010bc0(void)
{
    __asm {
        push    esi
        push    0x4105
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x10049794
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
