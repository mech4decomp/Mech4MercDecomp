/*
 * FUN_1001a280 (30 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x7203),
 * stores vtable 0x10049ab8 at this+0, zeroes this->+0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1001a280(void)
{
    __asm {
        push    esi
        push    0x7203
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x10049ab8
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
