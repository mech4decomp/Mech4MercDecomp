/*
 * FUN_1000c960 (27 B) - __thiscall, RET 0x4. Constructor: calls
 * FUN_10008900(this), sets this->0x10 = param_1, sets vtable
 * 0x10049620, returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10008900(void);   /* rel32 call */

__declspec(naked) void FUN_1000c960(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10008900
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi], 0x10049620
        mov     eax, esi
        pop     esi
        ret     4
    }
}
