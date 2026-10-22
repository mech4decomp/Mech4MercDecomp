/*
 * FUN_100481E0 (8 B) - __fastcall.  Thunk: loads this from [ebp-0x10] into
 * ECX, tail-jumps to FUN_1001c750.  (Transcribed from reference bytes;
 * gaptext.  Candidate VA 0x100481d2 had 14 leading int3 pads.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_100481E0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
