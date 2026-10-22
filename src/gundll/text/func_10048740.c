/*
 * FUN_10048740 (8 B) - __thiscall dtor thunk.  Loads `this` from [ebp-0x10],
 * tail-jumps into FUN_1001ca00.  (Transcribed from reference bytes; gaptext.
 * Leading 14 int3 padding bytes at 0x10048732 skipped.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca00(void);   /* rel32 jmp */

__declspec(naked) void __cdecl FUN_10048740(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001ca00
    }
}
