/*
 * FUN_10010820 (23 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x4103),
 * stores vtable 0x1004977c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10010820(void)
{
    __asm {
        push    esi
        push    0x4103
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004977c
        mov     eax, esi
        pop     esi
        ret
    }
}
