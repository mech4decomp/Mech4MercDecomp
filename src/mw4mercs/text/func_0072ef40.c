/*
 * FUN_0072ef40 (12 B) — __stdcall(1 arg): loads this from stack into ECX,
 * calls FUN_0072f740 (thiscall), RET 0x4.
 *
 *   MOV ECX,dword ptr [ESP+0x4]
 *   CALL FUN_0072f740
 *   RET 0x4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0072f740(void);

__declspec(naked) void __stdcall FUN_0072ef40(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        call    FUN_0072f740
        ret     4
    }
}
