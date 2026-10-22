/*
 * FUN_10048853 (8 B) - thiscall dtor thunk.  Loads this from [ebp-0x10]
 * (caller's frame) into ECX, then jumps to FUN_10006480 (thiscall, ecx=this).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10006480(void);   /* rel32 jmp (thiscall, ecx=this) */

__declspec(naked) void FUN_10048853(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_10006480
    }
}
