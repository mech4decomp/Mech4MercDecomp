/*
 * FUN_10017080 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x5208),
 * stores vtable 0x100499a4 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10017080(void)
{
    __asm {
        push    esi
        push    0x5208
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100499a4
        mov     eax, esi
        pop     esi
        ret
    }
}
