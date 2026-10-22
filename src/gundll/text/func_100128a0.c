/*
 * FUN_100128A0 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x420a),
 * stores vtable 0x10049830 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100128A0(void)
{
    __asm {
        push    esi
        push    0x420a
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x10049830
        mov     eax, esi
        pop     esi
        ret
    }
}
