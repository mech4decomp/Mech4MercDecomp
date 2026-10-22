/*
 * FUN_10012240 (30 B) - __thiscall, RET 0x4.
 * Ctor: calls FUN_1001c870(this, 0x4205, param_1), stores vtable
 * 0x1004980c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_10012240(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x4205
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004980c
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
