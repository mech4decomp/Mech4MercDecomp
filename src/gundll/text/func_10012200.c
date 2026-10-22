/*
 * FUN_10012200 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x4205),
 * stores vtable 0x1004980c at this+0, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10012200(void)
{
    __asm {
        push    esi
        push    0x4205
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004980c
        mov     eax, esi
        pop     esi
        ret
    }
}
