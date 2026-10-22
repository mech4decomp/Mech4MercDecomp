/*
 * FUN_10014af0 (40 B) - __fastcall. Calls FUN_1001c6e0(this,0x510a), zeroes
 * this+0x20..0x30, sets vtable 0x100498f0, returns this.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10014af0(void)
{
    __asm {
        push    esi
        push    0x510a
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi], 0x100498f0
        mov     eax, esi
        pop     esi
        ret
    }
}
