/*
 * FUN_100288f0 (30 B) -- __thiscall, RET 0x4. Ctor.
 * Calls FUN_1001c870(this, 0x5254, param_1); sets vtable 0x1004ac9c.
 * Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_100288f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5254
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004ac9c
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
