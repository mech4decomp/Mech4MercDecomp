/*
 * FUN_100277A0 (40 B) - __fastcall, RET.  Constructor: calls
 * FUN_1001c6e0(this, 0x5158), zeroes fields 0x20-0x30, sets vtable ptr
 * 0x1004ac48.  Returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void *this, int a);

__declspec(naked) void __fastcall FUN_100277A0(void)
{
    __asm {
        push    esi
        push    0x5158
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi], 0x1004ac48
        mov     eax, esi
        pop     esi
        ret
    }
}
