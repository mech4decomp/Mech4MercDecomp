/*
 * FUN_10015410 (38 B) — __thiscall ctor, RET 0x4.
 * Calls FUN_1001c720(this, 0x510e, param_1), zeroes +0x20/+0x24,
 * sets vtable 0x10049914, returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c720(void);

__declspec(naked) void FUN_10015410(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x510e
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x10049914
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
