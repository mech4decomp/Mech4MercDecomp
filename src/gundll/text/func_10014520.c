/*
 * FUN_10014520 (30 B) - __thiscall, RET 0x4.
 * Ctor: calls FUN_1001c720(this, 0x5107, param_1), stores vtable
 * 0x100498cc at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call */

__declspec(naked) void FUN_10014520(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5107
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x100498cc
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
