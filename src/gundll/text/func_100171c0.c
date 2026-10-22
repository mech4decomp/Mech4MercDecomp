/*
 * FUN_100171C0 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x5209),
 * stores vtable 0x100499b0 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100171C0(void)
{
    __asm {
        push    esi
        push    0x5209
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100499b0
        mov     eax, esi
        pop     esi
        ret
    }
}
