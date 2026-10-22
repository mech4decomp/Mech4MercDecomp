/*
 * FUN_10032600 (20 B) - __stdcall, RET 0x8.  Calls FUN_10034570 (thiscall)
 * with this = arg1 + 4 and arg2 pushed.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10034570(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10032600(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        add     ecx, 4
        call    FUN_10034570
        ret     0x8
    }
}
