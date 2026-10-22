/*
 * FUN_10021BA0 (30 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0xa205),
 * sets vtable 0x1004aabc, zeroes field +0x24, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10021BA0(void)
{
    __asm {
        push    esi
        push    0xa205
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004aabc
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
