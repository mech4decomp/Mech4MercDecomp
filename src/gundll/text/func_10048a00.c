/*
 * FUN_10048A00 (8 B) - thiscall dtor thunk.  Loads this (at [ebp-0x70]) into
 * ECX and tail-jumps to FUN_100322b0.  (Transcribed from reference bytes;
 * gaptext.  Real entry after 11 int3 pads at 0x100489f5.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100322b0(void);   /* rel32 jmp */

__declspec(naked) void FUN_10048A00(void)
{
    __asm {
        lea     ecx, [ebp - 0x70]
        jmp     FUN_100322b0
    }
}
