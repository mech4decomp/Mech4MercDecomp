/*
 * FUN_1000f9f0 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x2204),
 * stores vtable 0x1004971c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1000f9f0(void)
{
    __asm {
        push    esi
        push    0x2204
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004971c
        mov     eax, esi
        pop     esi
        ret
    }
}
