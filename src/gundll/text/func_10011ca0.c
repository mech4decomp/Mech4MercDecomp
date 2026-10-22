/*
 * FUN_10011CA0 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x4202),
 * stores vtable 0x100497e8 at this+0, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10011CA0(void)
{
    __asm {
        push    esi
        push    0x4202
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100497e8
        mov     eax, esi
        pop     esi
        ret
    }
}
