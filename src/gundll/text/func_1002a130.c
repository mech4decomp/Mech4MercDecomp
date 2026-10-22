/*
 * FUN_1002a130 (31 B) - __thiscall ctor. Calls FUN_1001c9a0(this, 0x5353),
 * zeroes this+0x1c and this+0x20, stores vtable 0x1004ad14, returns this.
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_1002a130(void)
{
    __asm {
        push    esi
        push    0x5353
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x1004ad14
        mov     eax, esi
        pop     esi
        ret
    }
}
