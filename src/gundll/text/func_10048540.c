/*
 * FUN_10048540 (8 B) - __fastcall.  Dtor thunk: loads `this` from the
 * caller's frame slot [ebp-0x10] into ECX, then tail-jumps into the shared
 * dtor FUN_1001ca00.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001ca00(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10048540(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001ca00
    }
}
