/*
 * FUN_10048640 (8 B) - __thiscall.  Dtor thunk: loads `this` from
 * [ebp-0x10], then jumps to FUN_1001c750.  (Transcribed from reference
 * bytes; gaptext.  Real entry at 0x10048640, after int3 padding at
 * 0x10048632.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c750(void);   /* __thiscall (ECX=this) */

__declspec(naked) void FUN_10048640(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
