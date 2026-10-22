/*
 * FUN_10013110 (37 B) - __thiscall, RET 0x4.
 * Constructor: calls FUN_1001c9e0(this, 0x430e, param_1), sets vtable
 * 0x10049860 and field +0x1c = 0. Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9e0(void);   /* rel32 call */

__declspec(naked) void FUN_10013110(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x430e
        mov     esi, ecx
        call    FUN_1001c9e0
        mov     dword ptr [esi], 0x10049860
        mov     dword ptr [esi + 0x1c], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
