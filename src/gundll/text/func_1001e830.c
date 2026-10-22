/*
 * FUN_1001e830 (40 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c6e0(this, 0xc105), zeroes fields 0x20-0x30,
 * sets vtable ptr 0x1004a9cc, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_1001e830(void)
{
    __asm {
        push    esi
        push    0xc105
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi+0x2c], eax
        mov     dword ptr [esi+0x30], eax
        mov     dword ptr [esi], 0x1004a9cc
        mov     eax, esi
        pop     esi
        ret
    }
}
