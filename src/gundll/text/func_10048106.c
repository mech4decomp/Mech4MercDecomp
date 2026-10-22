/*
 * FUN_10048106 (8 B) - __thiscall thunk.  Loads `this` from the caller's
 * saved frame slot [ebp+4] into ECX, then tail-jumps to FUN_10006480.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10006480(void);   /* __thiscall (ECX=this) */

__declspec(naked) void FUN_10048106(void)
{
    __asm {
        mov     ecx, dword ptr [ebp + 4]
        jmp     FUN_10006480
    }
}
