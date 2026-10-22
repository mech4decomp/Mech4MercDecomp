/*
 * FUN_10019630 (23 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x7102),
 * stores vtable 0x10049a7c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10019630(void)
{
    __asm {
        push    esi
        push    0x7102
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x10049a7c
        mov     eax, esi
        pop     esi
        ret
    }
}
