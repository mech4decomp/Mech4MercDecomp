/*
 * FUN_10018ec0 (41 B) — __thiscall, RET 0x4. Ctor.
 * Calls base ctor FUN_1001c9e0(this, 0x5317, param_1), zeroes
 * +0x1c/+0x20/+0x24, sets vtable 0x10049a58, returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c9e0(void);

__declspec(naked) void FUN_10018ec0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5317
        mov     esi, ecx
        call    FUN_1001c9e0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x10049a58
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
