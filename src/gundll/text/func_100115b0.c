/*
 * FUN_100115b0 (31 B) — __fastcall ctor.
 * Calls FUN_1001c6e0(this, 0x410b), zeroes +0x20/+0x24, sets vtable 0x100497c4.
 */

extern void __fastcall FUN_1001c6e0(void);

__declspec(naked) void __fastcall FUN_100115b0(void)
{
    __asm {
        push    esi
        push    0x410b
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x100497c4
        mov     eax, esi
        pop     esi
        ret
    }
}
