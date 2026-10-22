/*
 * FUN_00706AF0 (17 B) — calls FUN_00707E90, stores the top of the FPU stack
 * (qword) into [arg+0x20], returns 1 (__stdcall, ret 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707E90(void);

__declspec(naked) void FUN_00706AF0(void)
{
    __asm {
        call    FUN_00707E90
        mov     eax, dword ptr [esp+4]
        fstp    qword ptr [eax+0x20]
        mov     al, 1
        ret     8
    }
}
