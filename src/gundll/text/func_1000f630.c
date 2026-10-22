/*
 * FUN_1000f630 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x2201),
 * stores vtable 0x100496f8 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1000f630(void)
{
    __asm {
        push    esi
        push    0x2201
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100496f8
        mov     eax, esi
        pop     esi
        ret
    }
}
