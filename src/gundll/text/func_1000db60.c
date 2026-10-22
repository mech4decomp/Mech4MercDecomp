/*
 * FUN_1000db60 (30 B) - __fastcall. Ctor: calls FUN_1001c820(this, 0x3200),
 * stores vtable 0x1004968c at this+0, zeroes this+0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1000db60(void)
{
    __asm {
        push    esi
        push    0x3200
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004968c
        mov     dword ptr [esi+0x24], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}
