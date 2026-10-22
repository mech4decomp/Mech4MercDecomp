/*
 * FUN_100284e0 (37 B) — __thiscall ctor.
 * Calls FUN_1001c870(this, 0x5251, param_1), sets vtable 0x1004ac78,
 * zeroes field +0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_100284e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5251
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004ac78
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
