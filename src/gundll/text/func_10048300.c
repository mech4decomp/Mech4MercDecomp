/*
 * FUN_10048300 (8 B) - __thiscall dtor thunk.  Loads `this` from the caller's
 * local [ebp-0x10] into ECX, tail-jumps into shared dtor FUN_1001c750.
 * (Transcribed from reference bytes; gaptext.  Leading int3 padding at
 * 0x100482f2 skipped.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c750(void);   /* __thiscall (ECX=this), rel32 jmp */

__declspec(naked) void FUN_10048300(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
