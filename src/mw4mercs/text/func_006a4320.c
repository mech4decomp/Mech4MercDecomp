/*
 * FUN_006a4320 (26 B) — __thiscall ABL object constructor. Calls base
 * constructor FUN_006a22a0, zeroes fields at +0x8 (dword) and +0xc (byte),
 * installs vtable 0x00799dfc, returns `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22a0(void);

__declspec(naked) void FUN_006a4320(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22a0
        xor     eax, eax
        mov     dword ptr [esi + 0x8], eax
        mov     byte ptr [esi + 0xc], al
        mov     dword ptr [esi], 0x799dfc
        mov     eax, esi
        pop     esi
        ret
    }
}
