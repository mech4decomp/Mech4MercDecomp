/*
 * FUN_10021060 (30 B) — __thiscall, RET 0x4. Ctor: calls shared ctor
 * FUN_1001c720(this, 0xa105, param_1), then sets vtable 0x1004aa74.
 */

extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_10021060(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0xa105
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x1004aa74
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
