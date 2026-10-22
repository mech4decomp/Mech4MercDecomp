/*
 * FUN_00706B4C (21 B) — __stdcall: calls FUN_00707E90, then stores the FPU
 * top-of-stack (qword) to arg->0x20, returns 1.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_00707E90(void);

__declspec(naked) void FUN_00706B4C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        call    FUN_00707E90
        mov     eax, dword ptr [esp + 4]
        fstp    qword ptr [eax + 0x20]
        mov     al, 1
        ret     4
    }
}
