/*
 * FUN_10023B80 (30 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c6e0(this, 0x8106), sets vtable ptr 0x1004ab4c,
 * zeroes field +0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_10023B80(void)
{
    __asm {
        push    esi
        push    0x8106
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004ab4c
        mov     dword ptr [esi+0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
