/*
 * FUN_100159f0 (41 B) — __thiscall, RET 0x4. Ctor.
 * Calls base ctor FUN_1001c720(this, 0x510f, param_1), zeroes
 * +0x20/+0x24/+0x28, sets vtable 0x1004992c, returns this.
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c720(void);

__declspec(naked) void FUN_100159f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x510f
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x1004992c
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
