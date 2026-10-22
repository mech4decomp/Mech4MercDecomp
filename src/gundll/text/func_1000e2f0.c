/*
 * FUN_1000e2f0 (44 B) — __thiscall, RET 0x4.
 * Constructor: FUN_1001c720(this, 0x2102, param_1), zero fields 0x20-0x2c,
 * set vtable 0x100496b0, return this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_1000e2f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x2102
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 100496b0h
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
