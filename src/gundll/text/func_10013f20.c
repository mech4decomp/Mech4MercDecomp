/*
 * FUN_10013f20 (38 B) — __thiscall ctor, RET 0x4.
 * Calls FUN_1001c720(this, 0x5105, param_1), zeroes +0x20/+0x24,
 * sets vtable 0x100498b4, returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c720(void);

__declspec(naked) void FUN_10013f20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5105
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x100498b4
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
