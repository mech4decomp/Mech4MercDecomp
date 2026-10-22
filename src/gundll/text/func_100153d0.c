/*
 * FUN_100153d0 (31 B) — __fastcall ctor.
 * Calls FUN_1001c6e0(this, 0x510e), zeroes +0x20/+0x24, sets vtable 0x10049914.
 */

extern void __fastcall FUN_1001c6e0(void);

__declspec(naked) void __fastcall FUN_100153d0(void)
{
    __asm {
        push    esi
        push    0x510e
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x10049914
        mov     eax, esi
        pop     esi
        ret
    }
}
