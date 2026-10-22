/*
 * FUN_10023EA0 (37 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c6e0(0x810c), zeroes fields 0x20-0x2c,
 * sets vtable ptr 0x1004ab64.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_10023EA0(void)
{
    __asm {
        push    esi
        push    0x810c
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi+0x2c], eax
        mov     dword ptr [esi], 0x1004ab64
        mov     eax, esi
        pop     esi
        ret
    }
}
