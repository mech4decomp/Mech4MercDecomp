/*
 * FUN_10034cc0 (20 B) - __stdcall, RET 0x8.  Calls FUN_10034ab0
 * (thiscall) with this=arg1+4 and arg2.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10034ab0(void);

__declspec(naked) void __stdcall FUN_10034cc0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        add     ecx, 4
        call    FUN_10034ab0
        ret     8
    }
}
