/*
 * FUN_10019c50 (37 B) — __fastcall, RET.
 * Ctor: calls FUN_1001c6e0(this, 0x7105), zeroes members at +0x20..+0x2c,
 * sets vtable 0x10049aa0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);

__declspec(naked) void __fastcall FUN_10019c50(void)
{
    __asm {
        push    esi
        push    0x7105
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x10049aa0
        mov     eax, esi
        pop     esi
        ret
    }
}
