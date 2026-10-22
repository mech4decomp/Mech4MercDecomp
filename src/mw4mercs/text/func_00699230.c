/*
 * FUN_00699230 (22 B) — __thiscall: calls FUN_006991D0, then computes
 * (esi->0xc - esi->8) / st(0) and returns it on the FPU stack.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_006991D0(void);

__declspec(naked) void FUN_00699230(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        push    esi
        mov     esi, dword ptr [eax + 4]
        call    FUN_006991D0
        fld     dword ptr [esi + 0xc]
        fsub    dword ptr [esi + 8]
        pop     esi
        fdivp   st(1), st(0)
        ret
    }
}
