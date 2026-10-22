/*
 * FUN_10034b90 (16 B) - __stdcall, RET 0x4.  Loads this->+0x10 into ecx,
 * rewrites the stack arg to this, then tail-jmps FUN_10036330
 * (thiscall).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10036330(void);

__declspec(naked) void __stdcall FUN_10034b90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 4], eax
        jmp     FUN_10036330
    }
}
