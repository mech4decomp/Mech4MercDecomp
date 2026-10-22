/*
 * FUN_1001a2c0 (37 B) — __thiscall, RET 0x4.
 * Ctor: calls FUN_1001c870(this, 0x7203, param_1), sets vtable 0x10049ab8,
 * zeroes member at +0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_1001a2c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x7203
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x10049ab8
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
