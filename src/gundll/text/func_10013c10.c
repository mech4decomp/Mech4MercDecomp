/*
 * FUN_10013c10 (23 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x5103),
 * stores vtable 0x1004989c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10013c10(void)
{
    __asm {
        push    esi
        push    0x5103
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004989c
        mov     eax, esi
        pop     esi
        ret
    }
}
