/*
 * FUN_10048B20 (10 B) - thiscall/fastcall dtor thunk.  Loads this from
 * [ebp-0x10] (caller's frame) into ECX, adds 0x18 (sub-object at +0x18),
 * then jumps to FUN_10031050 (__fastcall, ecx=this).  (Transcribed from
 * reference bytes; gaptext.  Real entry after 11 int3 padding bytes at
 * 0x10048b15.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10031050(void);   /* rel32 jmp (__fastcall, ecx=this) */

__declspec(naked) void FUN_10048B20(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        add     ecx, 0x18
        jmp     FUN_10031050
    }
}
