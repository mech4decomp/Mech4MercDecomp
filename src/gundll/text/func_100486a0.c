/*
 * FUN_100486A0 (8 B) - __thiscall.  Dtor thunk: loads `this` from
 * [ebp-0x10], then jumps to FUN_1001c8a0.  (Transcribed from reference
 * bytes; gaptext.  Real entry at 0x100486a0, after int3 padding at
 * 0x10048692.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void FUN_100486A0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c8a0
    }
}
