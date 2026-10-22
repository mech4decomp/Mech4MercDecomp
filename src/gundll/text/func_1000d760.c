/*
 * FUN_1000d760 (30 B) - __fastcall. Ctor: calls FUN_1001c9a0(this, 0x1300),
 * stores vtable 0x10049668 at this+0, zeroes this+0x1c, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1000d760(void)
{
    __asm {
        push    esi
        push    0x1300
        mov     esi, ecx
        call    FUN_1001c9a0
        mov     dword ptr [esi], 0x10049668
        mov     dword ptr [esi+0x1c], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}
