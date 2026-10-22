/*
 * FUN_10047CF8 (10 B) - __cdecl.  Thunk: loads data pointer 0x1004d2a0 into
 * EAX, then jumps to FUN_100375ba (exception-record wrapper).
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin.
 *
 * CFLAGS: /O1
 */

extern void *g_1004d2a0;              /* module data pointer */
extern void __cdecl FUN_100375ba(void);   /* rel32 jmp */

__declspec(naked) void __cdecl FUN_10047CF8(void)
{
    __asm {
        mov     eax, offset g_1004d2a0
        jmp     FUN_100375ba
    }
}
