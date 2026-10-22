/*
 * FUN_1001f2c0 (31 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c820(this, 0xc202), zeroes fields +0x24/+0x28,
 * sets vtable ptr 0x1004a9fc, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001f2c0(void)
{
    __asm {
        push    esi
        push    0xc202
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x1004a9fc
        mov     eax, esi
        pop     esi
        ret
    }
}
