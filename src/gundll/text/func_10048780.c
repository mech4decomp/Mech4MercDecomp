/*
 * FUN_10048780 (8 B) - __thiscall dtor thunk.  Loads `this` from [ebp-0x10],
 * tail-jumps into FUN_1001c750.  (Transcribed from reference bytes; gaptext.
 * Leading 14 int3 padding bytes at 0x10048772 skipped.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __cdecl FUN_10048780(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
