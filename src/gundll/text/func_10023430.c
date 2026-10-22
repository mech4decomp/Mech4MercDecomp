/*
 * FUN_10023430 (41 B) — __thiscall, RET 0x4.
 * Ctor: calls FUN_1001c720(this, 0x8105, param_1), zeroes +0x20/+0x24/+0x28,
 * sets vtable 0x1004ab28, returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c720(void);

__declspec(naked) void FUN_10023430(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x8105
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x1004ab28
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
