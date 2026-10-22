/*
 * FUN_10011880 (31 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x4200),
 * zeroes fields +0x24/+0x28, sets vtable 0x100497d0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10011880(void)
{
    __asm {
        push    esi
        push    0x4200
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x100497d0
        mov     eax, esi
        pop     esi
        ret
    }
}
