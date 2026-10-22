/*
 * FUN_10047B50 (8 B) - __fastcall.  Thunk: loads this from stack slot
 * [ebp-0x10] into ECX, tail-jumps into FUN_1001c8a0.  (Transcribed from
 * reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10047B50(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c8a0
    }
}
