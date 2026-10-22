/*
 * FUN_10048B40 (10 B) - thiscall/fastcall dtor thunk.  Loads this from
 * [ebp-0x10] (caller's frame) into ECX, adds 0x54 (sub-object at +0x54),
 * then jumps to FUN_10034DB0 (__fastcall, ecx=this).  (Transcribed from
 * reference bytes; gaptext.  Real entry after 11 int3 padding bytes at
 * 0x10048b35.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10034DB0(void);   /* rel32 jmp (__fastcall, ecx=this) */

__declspec(naked) void FUN_10048B40(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        add     ecx, 0x54
        jmp     FUN_10034DB0
    }
}
