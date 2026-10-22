/*
 * FUN_10029010 (30 B) -- __thiscall, RET 0x4. Ctor.
 * Calls FUN_1001c870(this, 0x5257, param_1); sets vtable 0x1004acc0.
 * Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_10029010(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5257
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004acc0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
