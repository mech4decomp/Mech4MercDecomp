/*
 * FUN_100236C0 (30 B) - __fastcall, RET.
 * Constructor: calls FUN_1001c6e0(this, 0x8109), sets vtable ptr 0x1004ab34,
 * zeroes field +0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_100236C0(void)
{
    __asm {
        push    esi
        push    0x8109
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004ab34
        mov     dword ptr [esi+0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
