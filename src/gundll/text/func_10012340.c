/*
 * FUN_10012340 (31 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x4208),
 * zeroes fields +0x24/+0x28, sets vtable 0x10049818, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10012340(void)
{
    __asm {
        push    esi
        push    0x4208
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x10049818
        mov     eax, esi
        pop     esi
        ret
    }
}
