/*
 * FUN_10018e70 (34 B) - __fastcall. Ctor: calls FUN_1001c9a0(this, 0x5317),
 * zeroes this+0x1c, this+0x20 and this+0x24, stores vtable 0x10049a58 at
 * this+0, returns this.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10018e70(void)
{
    __asm {
        push    esi
        push    0x5317
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x10049a58
        mov     eax, esi
        pop     esi
        ret
    }
}
