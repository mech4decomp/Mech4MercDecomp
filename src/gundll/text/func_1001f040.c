/*
 * FUN_1001f040 (23 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c820(this, 0xc200), sets vtable ptr
 * 0x1004a9e4, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001f040(void)
{
    __asm {
        push    esi
        push    0xc200
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004a9e4
        mov     eax, esi
        pop     esi
        ret
    }
}
