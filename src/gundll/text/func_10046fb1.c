/*
 * FUN_10046FB1 (8 B) - tail-call thunk.  Sets ecx = [ebp+4] (a stack-local
 * object pointer) and tail-jumps to FUN_10006480 (__fastcall, this in ecx).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10006480(void);   /* rel32 call (thiscall, ecx=this) */

__declspec(naked) void __cdecl FUN_10046FB1(void)
{
    __asm {
        mov     ecx, dword ptr [ebp + 4]
        jmp     FUN_10006480
    }
}
