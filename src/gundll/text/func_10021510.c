/*
 * FUN_10021510 (41 B) — __thiscall, RET 0x4. Ctor.
 * Calls base ctor FUN_1001c870(this, 0xa201, param_1), zeroes
 * +0x24/+0x28/+0x2c, sets vtable 0x1004aa8c, returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c870(void);

__declspec(naked) void FUN_10021510(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0xa201
        mov     esi, ecx
        call    FUN_1001c870
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x1004aa8c
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
