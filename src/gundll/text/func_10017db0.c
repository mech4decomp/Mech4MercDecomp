/*
 * FUN_10017db0 (31 B) - __thiscall ctor.  Calls FUN_1001c9a0(this, 0x5311),
 * zeroes this->+0x1c and +0x20, sets vtable ptr to 0x10049a10, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_10017db0(void)
{
    __asm {
        push    esi
        push    0x5311
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x10049a10
        mov     eax, esi
        pop     esi
        ret
    }
}
