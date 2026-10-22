/*
 * FUN_1000f8b0 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x2203),
 * stores vtable 0x10049710 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1000f8b0(void)
{
    __asm {
        push    esi
        push    0x2203
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x10049710
        mov     eax, esi
        pop     esi
        ret
    }
}
