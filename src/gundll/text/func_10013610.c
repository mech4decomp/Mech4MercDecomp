/*
 * FUN_10013610 (23 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x5100),
 * stores vtable 0x10049878 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10013610(void)
{
    __asm {
        push    esi
        push    0x5100
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x10049878
        mov     eax, esi
        pop     esi
        ret
    }
}
