/*
 * FUN_10023100 (34 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c6e0(this, 0x8104), zeroes fields 0x20-0x28,
 * sets vtable ptr 0x1004ab1c.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_10023100(void)
{
    __asm {
        push    esi
        push    0x8104
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi], 0x1004ab1c
        mov     eax, esi
        pop     esi
        ret
    }
}
