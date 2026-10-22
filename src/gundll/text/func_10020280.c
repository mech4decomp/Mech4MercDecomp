/*
 * FUN_10020280 (34 B) - __thiscall ctor.  Calls FUN_1001c6e0(this, 0xa100),
 * zeroes fields +0x20..+0x28, sets vtable 0x1004aa38, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void FUN_10020280(void)
{
    __asm {
        push    esi
        push    0xa100
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x1004aa38
        mov     eax, esi
        pop     esi
        ret
    }
}
