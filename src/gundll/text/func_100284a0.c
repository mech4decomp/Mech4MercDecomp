/*
 * FUN_100284a0 (30 B) - __fastcall ctor. Calls FUN_1001c820(this, 0x5251),
 * stores vtable 0x1004ac78 at this+0 and 0 at this+0x24, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_100284a0(void)
{
    __asm {
        push    esi
        push    0x5251
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004ac78
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
