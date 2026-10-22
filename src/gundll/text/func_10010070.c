/*
 * FUN_10010070 (30 B) - __thiscall. Constructor: calls
 * FUN_1001c9a0(this, 0x2301), stores vtable 0x1004974c, zeroes this+0x1c,
 * returns this.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_10010070(void)
{
    __asm {
        push    esi
        push    0x2301
        mov     esi, ecx
        call    FUN_1001c9a0
        mov     dword ptr [esi], 0x1004974c
        mov     dword ptr [esi+0x1c], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}
