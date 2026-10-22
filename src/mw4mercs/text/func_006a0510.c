/*
 * FUN_006a0510 (17 B) — __stdcall RET 0x4. Copies arg0 into a stack
 * temp and tail-calls FUN_006a0530 (thiscall-style arg forwarding).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a0530(void);

__declspec(naked) void FUN_006a0510(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], edx
        call    FUN_006a0530
        ret     0x4
    }
}
