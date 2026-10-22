/*
 * FUN_10021A60 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0xa204),
 * sets vtable 0x1004aab0, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10021A60(void)
{
    __asm {
        push    esi
        push    0xa204
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004aab0
        mov     eax, esi
        pop     esi
        ret
    }
}
