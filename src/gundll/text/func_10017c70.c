/*
 * FUN_10017c70 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x5210),
 * then sets vtable ptr to 0x10049a04 and returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10017c70(void)
{
    __asm {
        push    esi
        push    0x5210
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x10049a04
        mov     eax, esi
        pop     esi
        ret
    }
}
