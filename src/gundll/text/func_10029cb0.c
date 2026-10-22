/*
 * FUN_10029cb0 (40 B) - __thiscall ctor. Calls FUN_1001c9a0(this, 0x5352),
 * zeroes this+0x1c..0x2c, stores vtable 0x1004ad08, returns this.
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_10029cb0(void)
{
    __asm {
        push    esi
        push    0x5352
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x1004ad08
        mov     eax, esi
        pop     esi
        ret
    }
}
