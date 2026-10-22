/*
 * FUN_10016700 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x5203),
 * sets vtable ptr to 0x10049968, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10016700(void)
{
    __asm {
        push    esi
        push    0x5203
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x10049968
        mov     eax, esi
        pop     esi
        ret
    }
}
