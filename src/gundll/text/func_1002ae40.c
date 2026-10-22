/*
 * FUN_1002AE40 (23 B) - __thiscall (this in ecx).  Constructor: calls
 * FUN_1001c820(this,0x2207), sets the vtable pointer to 0x1004ad44,
 * returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call (root ctor) */

__declspec(naked) void FUN_1002AE40(void)
{
    __asm {
        push    esi
        push    0x2207
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004ad44
        mov     eax, esi
        pop     esi
        ret
    }
}
