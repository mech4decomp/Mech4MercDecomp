/*
 * FUN_100311D0 (20 B) - __stdcall, RET 0x8.  Calls FUN_100345A0 (thiscall)
 * with this = arg1 + 4 and arg2 pushed.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100345A0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100311D0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        push    eax
        add     ecx, 4
        call    FUN_100345A0
        ret     0x8
    }
}
