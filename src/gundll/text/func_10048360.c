/*
 * FUN_10048360 (8 B) - __thiscall dtor thunk.  Loads `this` from the caller's
 * local [ebp-0x10] into ECX, tail-jumps into shared dtor FUN_1001ca00.
 * (Transcribed from reference bytes; gaptext.  Leading int3 padding at
 * 0x10048352 skipped.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca00(void);   /* rel32 jmp */

__declspec(naked) void FUN_10048360(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001ca00
    }
}
