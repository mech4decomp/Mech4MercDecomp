/*
 * FUN_100485E0 (8 B) - __fastcall.  Dtor thunk: loads `this` from the
 * caller's frame slot [ebp-0x10] into ECX, then tail-jumps into the shared
 * dtor FUN_1001c750.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_100485E0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
