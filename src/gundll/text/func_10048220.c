/*
 * FUN_10048220 (8 B) - __fastcall.  Thunk: loads this from [ebp-0x10] into
 * ECX, tail-jumps to FUN_1001c8a0.  (Transcribed from reference bytes;
 * gaptext.  Candidate VA 0x10048212 had 14 leading int3 pads.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10048220(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c8a0
    }
}
