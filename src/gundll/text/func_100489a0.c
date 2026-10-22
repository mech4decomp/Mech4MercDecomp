/*
 * FUN_100489A0 (9 B) - thiscall dtor thunk.  Loads this (at [ebp-0x10]),
 * adds 0x44, and tail-jumps to FUN_10031250 (__fastcall).  (Transcribed from
 * reference bytes; gaptext.  Real entry after 11 int3 pads at 0x10048995.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10031250(void);   /* rel32 jmp (__fastcall, this in ecx) */

__declspec(naked) void FUN_100489A0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        add     ecx, 0x44
        jmp     FUN_10031250
    }
}
