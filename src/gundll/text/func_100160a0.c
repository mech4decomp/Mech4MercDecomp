/*
 * FUN_100160A0 (37 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x5200),
 * zeroes fields +0x24/+0x28/+0x2c/+0x30, sets vtable 0x10049944, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100160A0(void)
{
    __asm {
        push    esi
        push    0x5200
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi], 0x10049944
        mov     eax, esi
        pop     esi
        ret
    }
}
