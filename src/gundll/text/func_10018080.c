/*
 * FUN_10018080 (31 B) - __thiscall ctor.  Calls FUN_1001c9a0(this, 0x5312),
 * zeroes this->+0x1c and +0x20, sets vtable ptr to 0x10049a1c, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_10018080(void)
{
    __asm {
        push    esi
        push    0x5312
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x10049a1c
        mov     eax, esi
        pop     esi
        ret
    }
}
