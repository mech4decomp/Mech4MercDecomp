/*
 * FUN_1000ff40 (23 B) - __thiscall. Constructor: calls
 * FUN_1001c9a0(this, 0x2307), stores vtable 0x10049740, returns this.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_1000ff40(void)
{
    __asm {
        push    esi
        push    0x2307
        mov     esi, ecx
        call    FUN_1001c9a0
        mov     dword ptr [esi], 0x10049740
        mov     eax, esi
        pop     esi
        ret
    }
}
