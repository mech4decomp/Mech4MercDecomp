/*
 * FUN_1001f580 (30 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c820(this, 0xc203), sets vtable ptr
 * 0x1004aa08, zeroes field +0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001f580(void)
{
    __asm {
        push    esi
        push    0xc203
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004aa08
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
