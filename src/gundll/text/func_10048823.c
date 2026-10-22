/*
 * FUN_10048823 (8 B) - __thiscall thunk.  Loads `this` from [ebp-0x10],
 * tail-jumps into FUN_10006480.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10006480(void);   /* rel32 jmp (thiscall, ecx=this) */

__declspec(naked) void __cdecl FUN_10048823(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_10006480
    }
}
