/*
 * FUN_100148c0 (37 B) - __thiscall, RET 0x4.
 * Constructor: calls FUN_1001c720(this, 0x5109, param_1), sets vtable
 * 0x100498e4 and field +0x20 = 0. Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call */

__declspec(naked) void FUN_100148c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5109
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x100498e4
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
