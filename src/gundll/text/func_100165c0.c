/*
 * FUN_100165C0 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x5202),
 * sets vtable ptr to 0x1004995c, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_100165C0(void)
{
    __asm {
        push    esi
        push    0x5202
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004995c
        mov     eax, esi
        pop     esi
        ret
    }
}
