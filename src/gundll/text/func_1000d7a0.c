/*
 * FUN_1000d7a0 (37 B) - __thiscall, RET 0x4. Constructor: calls
 * FUN_1001c9e0(this, 0x1300, param_1), stores vtable 0x10049668,
 * zeroes this+0x1c, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9e0(void);   /* rel32 call */

__declspec(naked) void FUN_1000d7a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x1300
        mov     esi, ecx
        call    FUN_1001c9e0
        mov     dword ptr [esi], 0x10049668
        mov     dword ptr [esi + 0x1c], 0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
