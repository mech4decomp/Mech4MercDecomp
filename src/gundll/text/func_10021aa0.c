/*
 * FUN_10021aa0 (30 B) — __thiscall, RET 0x4. Ctor: calls shared ctor
 * FUN_1001c870(this, 0xa204, param_1), then sets vtable 0x1004aab0.
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_10021aa0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0xa204
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004aab0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
