/*
 * FUN_100120C0 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x4204),
 * stores vtable 0x10049800 at this+0, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100120C0(void)
{
    __asm {
        push    esi
        push    0x4204
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x10049800
        mov     eax, esi
        pop     esi
        ret
    }
}
