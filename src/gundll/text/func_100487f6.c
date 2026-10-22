/*
 * FUN_100487f6 (8 B) - __thiscall thunk.  Loads `this` from [ebp-0x10],
 * tail-jumps into FUN_100068d0.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_100068d0(void);   /* rel32 tail call */

__declspec(naked) void __cdecl FUN_100487f6(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_100068d0
    }
}
