/*
 * FUN_10016460 (37 B) — __thiscall, RET 0x4.
 * Ctor: calls FUN_1001c870(this, 0x5201, param_1), sets vtable 0x10049950,
 * zeroes member at +0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_10016460(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5201
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x10049950
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
