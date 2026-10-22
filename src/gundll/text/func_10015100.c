/*
 * FUN_10015100 (31 B) — __fastcall ctor.
 * Calls FUN_1001c6e0(this, 0x510c), zeroes +0x20/+0x24, sets vtable 0x10049908.
 */

extern void __fastcall FUN_1001c6e0(void);

__declspec(naked) void __fastcall FUN_10015100(void)
{
    __asm {
        push    esi
        push    0x510c
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x10049908
        mov     eax, esi
        pop     esi
        ret
    }
}
