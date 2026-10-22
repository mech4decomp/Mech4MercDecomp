/*
 * FUN_1000f490 (30 B) - __fastcall. Ctor: calls FUN_1001c820(this, 0x2200),
 * stores vtable 0x100496ec at this+0, zeroes this+0x24, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1000f490(void)
{
    __asm {
        push    esi
        push    0x2200
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100496ec
        mov     dword ptr [esi+0x24], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}
