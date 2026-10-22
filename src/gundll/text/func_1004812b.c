/*
 * FUN_1004812B (8 B) - __fastcall.  Thunk: loads arg1 from [ebp+8] into ECX,
 * tail-jumps to FUN_100068d0.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_100068d0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1004812B(void)
{
    __asm {
        mov     ecx, dword ptr [ebp + 8]
        jmp     FUN_100068d0
    }
}
