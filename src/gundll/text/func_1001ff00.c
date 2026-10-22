/*
 * FUN_1001FF00 (40 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0xc206),
 * zeroes fields +0x24..+0x34, sets vtable 0x1004aa2c, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1001FF00(void)
{
    __asm {
        push    esi
        push    0xc206
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi], 0x1004aa2c
        mov     eax, esi
        pop     esi
        ret
    }
}
