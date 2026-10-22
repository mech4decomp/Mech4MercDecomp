/*
 * FUN_10012b60 (38 B) -- __thiscall ctor.
 * Calls FUN_1001c9e0(this, 0x430c, param_1), zeroes +0x1c/+0x20,
 * sets vtable 0x10049848, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9e0(void);

__declspec(naked) void FUN_10012b60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x430c
        mov     esi, ecx
        call    FUN_1001c9e0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x10049848
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
