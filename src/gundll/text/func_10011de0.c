/*
 * FUN_10011DE0 (31 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x4203),
 * zeroes fields +0x24/+0x28, sets vtable 0x100497f4, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10011DE0(void)
{
    __asm {
        push    esi
        push    0x4203
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x100497f4
        mov     eax, esi
        pop     esi
        ret
    }
}
