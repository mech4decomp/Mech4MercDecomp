/*
 * FUN_100487c6 (8 B) - __thiscall thunk.  Loads `this` from [ebp+8],
 * tail-jumps into FUN_10006480.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10006480(void);   /* rel32 jmp (thiscall, ecx=this) */

__declspec(naked) void __cdecl FUN_100487c6(void)
{
    __asm {
        mov     ecx, dword ptr [ebp + 8]
        jmp     FUN_10006480
    }
}
