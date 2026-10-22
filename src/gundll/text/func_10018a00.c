/*
 * FUN_10018a00 (31 B) - __fastcall. Ctor: calls FUN_1001c9a0(this, 0x5315),
 * zeroes this+0x1c and this+0x20, stores vtable 0x10049a40 at this+0,
 * returns this.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10018a00(void)
{
    __asm {
        push    esi
        push    0x5315
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x10049a40
        mov     eax, esi
        pop     esi
        ret
    }
}
