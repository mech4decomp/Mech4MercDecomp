/*
 * FUN_10048A20 (8 B) - thiscall dtor thunk.  Loads this (at [ebp-0x74]) into
 * ECX and tail-jumps to FUN_100322b0.  (Transcribed from reference bytes;
 * gaptext.  Real entry after 3 int3 pads at 0x10048a1d.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100322b0(void);   /* rel32 jmp */

__declspec(naked) void FUN_10048A20(void)
{
    __asm {
        lea     ecx, [ebp - 0x74]
        jmp     FUN_100322b0
    }
}
