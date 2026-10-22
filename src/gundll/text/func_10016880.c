/*
 * FUN_10016880 (38 B) — __thiscall ctor, RET 0x4.
 * Calls FUN_1001c870(this, 0x5204, param_1), zeroes +0x24/+0x28,
 * sets vtable 0x10049974, returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c870(void);

__declspec(naked) void FUN_10016880(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5204
        mov     esi, ecx
        call    FUN_1001c870
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x10049974
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
