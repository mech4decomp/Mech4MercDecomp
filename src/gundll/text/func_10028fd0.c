/*
 * FUN_10028fd0 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x5257),
 * stores vtable 0x1004acc0 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10028fd0(void)
{
    __asm {
        push    esi
        push    0x5257
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004acc0
        mov     eax, esi
        pop     esi
        ret
    }
}
