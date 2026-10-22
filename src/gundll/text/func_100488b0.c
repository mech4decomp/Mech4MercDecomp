/*
 * FUN_100488B0 (6 B) - __fastcall thunk.  Loads this from [ebp+4] (caller's
 * frame) into ECX, then jumps to FUN_1002f360 (__fastcall, ecx=this;
 * InterlockedExchange(*this, 0)).  (Transcribed from reference bytes;
 * gaptext.  Real entry after 11 int3 padding bytes at 0x100488a5.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002f360(void);   /* rel32 jmp (__fastcall, ecx=this) */

__declspec(naked) void FUN_100488B0(void)
{
    __asm {
        lea     ecx, [ebp + 4]
        jmp     FUN_1002f360
    }
}
