/*
 * FUN_10016420 (30 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x5201),
 * sets vtable 0x10049950, zeroes field +0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10016420(void)
{
    __asm {
        push    esi
        push    0x5201
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x10049950
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
