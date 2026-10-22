/*
 * FUN_1000eb30 (34 B) — __fastcall.
 * Constructor: calls base ctor FUN_1001c6e0(this, 0x2104), zeroes fields,
 * sets vtable 0x100496c8, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);

__declspec(naked) void __fastcall FUN_1000eb30(void)
{
    __asm {
        push    esi
        push    0x2104
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x100496c8
        mov     eax, esi
        pop     esi
        ret
    }
}
