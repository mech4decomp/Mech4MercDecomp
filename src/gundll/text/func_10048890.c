/*
 * FUN_10048890 (11 B) - thiscall/fastcall dtor thunk.  Loads this from
 * [ebp-0x10] (caller's frame) into ECX, adds 0x18 (sub-object at +0x18),
 * then jumps to FUN_1002f620 (__fastcall, ecx=this).  (Transcribed from
 * reference bytes; gaptext.  Real entry after 11 int3 padding bytes at
 * 0x10048885.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002f620(void);   /* rel32 jmp (__fastcall, ecx=this) */

__declspec(naked) void FUN_10048890(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        add     ecx, 0x18
        jmp     FUN_1002f620
    }
}
