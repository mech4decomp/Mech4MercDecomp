/*
 * FUN_100105f0 (37 B) - __thiscall, RET 0x4.
 * Constructor: calls FUN_1001c720(this, 0x4102, param_1), sets vtable
 * 0x10049770 and field +0x20 = 0. Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call */

__declspec(naked) void FUN_100105f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x4102
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x10049770
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
