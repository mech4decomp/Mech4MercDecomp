/*
 * FUN_10034670 (16 B) - __stdcall, RET 0x4.  Loads this->+0x14 into ecx,
 * rewrites the stack arg to this, then tail-jmps FUN_10032730
 * (thiscall).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10032730(void);

__declspec(naked) void __stdcall FUN_10034670(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 4], eax
        jmp     FUN_10032730
    }
}
