/*
 * FUN_1001A8D0 (40 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x7205),
 * zeroes fields +0x24..+0x34, sets vtable 0x10049ad0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1001A8D0(void)
{
    __asm {
        push    esi
        push    0x7205
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi], 0x10049ad0
        mov     eax, esi
        pop     esi
        ret
    }
}
