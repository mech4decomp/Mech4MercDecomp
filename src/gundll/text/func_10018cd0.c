/*
 * FUN_10018cd0 (30 B) - __fastcall. Ctor: calls FUN_1001c9a0(this, 0x5316),
 * stores vtable 0x10049a4c at this+0, zeroes this+0x1c, returns this.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10018cd0(void)
{
    __asm {
        push    esi
        push    0x5316
        mov     esi, ecx
        call    FUN_1001c9a0
        mov     dword ptr [esi], 0x10049a4c
        mov     dword ptr [esi + 0x1c], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
