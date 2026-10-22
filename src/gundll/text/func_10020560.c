/*
 * FUN_10020560 (30 B) - __thiscall ctor.  Calls FUN_1001c6e0(this, 0xa101),
 * sets vtable 0x1004aa44, zeroes field +0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void FUN_10020560(void)
{
    __asm {
        push    esi
        push    0xa101
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004aa44
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
