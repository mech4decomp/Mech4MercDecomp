/*
 * FUN_100130D0 (30 B) - __thiscall ctor.  Calls FUN_1001c9a0(this, 0x430e),
 * stores vtable 0x10049860 at this+0, zeroes this+0x1c, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_100130D0(void)
{
    __asm {
        push    esi
        push    0x430e
        mov     esi, ecx
        call    FUN_1001c9a0
        mov     dword ptr [esi], 0x10049860
        mov     dword ptr [esi + 0x1c], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
