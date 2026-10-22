/*
 * FUN_10013ee0 (31 B) — __fastcall ctor.
 * Calls FUN_1001c6e0(this, 0x5105), zeroes +0x20/+0x24, sets vtable 0x100498b4.
 */

extern void __fastcall FUN_1001c6e0(void);

__declspec(naked) void __fastcall FUN_10013ee0(void)
{
    __asm {
        push    esi
        push    0x5105
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x100498b4
        mov     eax, esi
        pop     esi
        ret
    }
}
