/*
 * FUN_10026EF0 (34 B) - __fastcall, RET.  Constructor: calls
 * FUN_1001c6e0(this, 0x5155), zeroes fields 0x20-0x28, sets vtable ptr
 * 0x1004ac24.  Returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_10026EF0(void)
{
    __asm {
        push    esi
        push    0x5155
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x1004ac24
        mov     eax, esi
        pop     esi
        ret
    }
}
