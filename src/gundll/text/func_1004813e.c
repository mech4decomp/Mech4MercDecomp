/*
 * FUN_1004813E (8 B) - __fastcall.  Thunk: loads arg2 from [ebp+0xc] into
 * ECX, tail-jumps to FUN_10006240.  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_10006240(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1004813E(void)
{
    __asm {
        mov     ecx, dword ptr [ebp + 0xc]
        jmp     FUN_10006240
    }
}
