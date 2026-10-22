/*
 * FUN_10024B80 (34 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x8203),
 * zeroes fields +0x24/+0x28/+0x2c, sets vtable 0x1004aba0, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10024B80(void)
{
    __asm {
        push    esi
        push    0x8203
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x1004aba0
        mov     eax, esi
        pop     esi
        ret
    }
}
