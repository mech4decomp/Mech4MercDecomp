/*
 * FUN_1000d110 (37 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c6e0, zeroes fields 0x20-0x2c, sets vtable ptr.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_1000d110(void)
{
    __asm {
        push    esi
        push    0x1103
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi+0x2c], eax
        mov     dword ptr [esi], 0x10049650
        mov     eax, esi
        pop     esi
        ret
    }
}
