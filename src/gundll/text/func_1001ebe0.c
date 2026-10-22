/*
 * FUN_1001ebe0 (53 B) - __thiscall, RET 0x4. Constructor: calls FUN_1001c720,
 * zeroes 7 dwords at +0x20..+0x38, sets vtable 0x1004a9d8, returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call */

__declspec(naked) void FUN_1001ebe0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0xc106
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi + 0x38], eax
        mov     dword ptr [esi], 0x1004a9d8
        mov     eax, esi
        pop     esi
        ret     4
    }
}
