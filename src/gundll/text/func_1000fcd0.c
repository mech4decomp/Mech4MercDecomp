/*
 * FUN_1000fcd0 (30 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x2206),
 * stores vtable 0x10049734 at this+0, zeroes this+0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1000fcd0(void)
{
    __asm {
        push    esi
        push    0x2206
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x10049734
        mov     dword ptr [esi+0x24], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}
