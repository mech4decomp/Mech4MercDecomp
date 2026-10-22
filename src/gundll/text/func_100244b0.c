/*
 * FUN_100244B0 (34 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c6e0(0x810e), zeroes fields 0x20-0x28,
 * sets vtable ptr 0x1004ab7c.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_100244B0(void)
{
    __asm {
        push    esi
        push    0x810e
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi], 0x1004ab7c
        mov     eax, esi
        pop     esi
        ret
    }
}
