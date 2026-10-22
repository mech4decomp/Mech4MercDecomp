/*
 * FUN_10036810 (20 B) - __stdcall, RET 0x8.  Calls FUN_10034ab0 (thiscall)
 * on arg0+4 with arg1.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10034ab0(void);   /* rel32 call (thiscall, this=ecx) */

__declspec(naked) void __stdcall FUN_10036810(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        push    eax
        add     ecx, 4
        call    FUN_10034ab0
        ret     0x8
    }
}
