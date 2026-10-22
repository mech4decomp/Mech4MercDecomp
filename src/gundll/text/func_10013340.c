/*
 * FUN_10013340 (31 B) - __fastcall ctor.
 * Calls FUN_1001c9a0(this, 0x430f), zeroes +0x1c/+0x20,
 * sets vtable 0x1004986c, returns this.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10013340(void)
{
    __asm {
        push    esi
        push    0x430f
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x1004986c
        mov     eax, esi
        pop     esi
        ret
    }
}
