/*
 * FUN_10048070 (8 B) - __thiscall dtor thunk.  Loads `this` from the
 * caller's saved frame slot [ebp-0x10] into ECX, then tail-jumps to
 * FUN_1001c8a0 (shared destructor).  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c8a0(void);   /* __thiscall (ECX=this) */

__declspec(naked) void FUN_10048070(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c8a0
    }
}
