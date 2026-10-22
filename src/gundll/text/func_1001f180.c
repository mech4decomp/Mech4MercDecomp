/*
 * FUN_1001f180 (23 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c820(this, 0xc201), sets vtable ptr
 * 0x1004a9f0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001f180(void)
{
    __asm {
        push    esi
        push    0xc201
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004a9f0
        mov     eax, esi
        pop     esi
        ret
    }
}
