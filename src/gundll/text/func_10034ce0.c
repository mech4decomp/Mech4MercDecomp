/*
 * FUN_10034ce0 (20 B) - __stdcall, RET 0x8.  Calls FUN_10034ae0
 * (thiscall) with this=arg1+4 and arg2.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_10034ae0(void);

__declspec(naked) void __stdcall FUN_10034ce0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        add     ecx, 4
        call    FUN_10034ae0
        ret     8
    }
}
