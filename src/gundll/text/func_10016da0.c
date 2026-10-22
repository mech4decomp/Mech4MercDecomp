/*
 * FUN_10016DA0 (31 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x5207),
 * zeroes this->+0x24/+0x28, sets vtable ptr to 0x10049998, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10016DA0(void)
{
    __asm {
        push    esi
        push    0x5207
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x10049998
        mov     eax, esi
        pop     esi
        ret
    }
}
