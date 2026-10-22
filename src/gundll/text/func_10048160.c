/*
 * FUN_10048160 (8 B) - __thiscall.  Thunk: loads this from [ebp-0x10] into
 * ECX, tail-jumps to FUN_1001cb00.  (Transcribed from reference bytes;
 * gaptext.  Candidate VA 0x10048158 had 8 leading int3 pads.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001cb00(void);   /* __thiscall (ECX=this), rel32 jmp */

__declspec(naked) void FUN_10048160(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001cb00
    }
}
