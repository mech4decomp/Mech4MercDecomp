/*
 * FUN_100179f0 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x520d),
 * then sets vtable ptr to 0x100499ec and returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100179f0(void)
{
    __asm {
        push    esi
        push    0x520d
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100499ec
        mov     eax, esi
        pop     esi
        ret
    }
}
