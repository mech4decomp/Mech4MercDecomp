/*
 * FUN_1001eb90 (46 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c6e0(this, 0xc106), zeroes fields 0x20-0x38,
 * sets vtable ptr 0x1004a9d8, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_1001eb90(void)
{
    __asm {
        push    esi
        push    0xc106
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi+0x2c], eax
        mov     dword ptr [esi+0x30], eax
        mov     dword ptr [esi+0x34], eax
        mov     dword ptr [esi+0x38], eax
        mov     dword ptr [esi], 0x1004a9d8
        mov     eax, esi
        pop     esi
        ret
    }
}
