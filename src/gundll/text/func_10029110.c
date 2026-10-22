/*
 * FUN_10029110 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x5258),
 * stores vtable 0x1004accc at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10029110(void)
{
    __asm {
        push    esi
        push    0x5258
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004accc
        mov     eax, esi
        pop     esi
        ret
    }
}
