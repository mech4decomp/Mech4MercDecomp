/*
 * FUN_100283a0 (30 B) - __thiscall, RET 0x4. Ctor: calls FUN_1001c870
 * (this, 0x5250, param_1), then sets vtable ptr 0x1004ac6c.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call (thiscall, ecx=this) */

__declspec(naked) void FUN_100283a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x5250
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004ac6c
        mov     eax, esi
        pop     esi
        ret     4
    }
}
