/*
 * FUN_1000d940 (30 B) - __thiscall, RET 0x4. Constructor: calls
 * FUN_1001c9e0(this, 0x1301, param_1), stores vtable 0x10049674,
 * returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9e0(void);   /* rel32 call */

__declspec(naked) void FUN_1000d940(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x1301
        mov     esi, ecx
        call    FUN_1001c9e0
        mov     dword ptr [esi], 0x10049674
        mov     eax, esi
        pop     esi
        ret     4
    }
}
