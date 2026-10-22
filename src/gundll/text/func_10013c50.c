/*
 * FUN_10013c50 (30 B) - __thiscall, RET 0x4.
 * Ctor: calls FUN_1001c720(this, 0x5103, param_1), stores vtable
 * 0x1004989c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call */

__declspec(naked) void FUN_10013c50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5103
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x1004989c
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
