/*
 * FUN_10016C60 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x5206),
 * sets vtable ptr to 0x1004998c, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10016C60(void)
{
    __asm {
        push    esi
        push    0x5206
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004998c
        mov     eax, esi
        pop     esi
        ret
    }
}
