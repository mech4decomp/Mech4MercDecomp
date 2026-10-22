/*
 * FUN_100246E0 (23 B) - __fastcall. Ctor: calls FUN_1001c820(0x8201),
 * stores vtable 0x1004ab88 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_100246E0(void)
{
    __asm {
        push    esi
        push    0x8201
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004ab88
        mov     eax, esi
        pop     esi
        ret
    }
}
