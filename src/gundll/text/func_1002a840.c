/*
 * FUN_1002a840 (34 B) - __thiscall ctor. Calls FUN_1001c9a0(this, 0x5355),
 * zeroes this+0x1c..0x24, stores vtable 0x1004ad2c, returns this.
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_1002a840(void)
{
    __asm {
        push    esi
        push    0x5355
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x1004ad2c
        mov     eax, esi
        pop     esi
        ret
    }
}
