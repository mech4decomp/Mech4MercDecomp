/*
 * FUN_006992D0 (22 B) — loads a pointer from [ecx+0x18], calls FUN_006992A0,
 * computes (st(1) / ([esi+0xc] - [esi+8])) and returns it on the FPU stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006992A0(void);

__declspec(naked) void FUN_006992D0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x18]
        push    esi
        mov     esi, dword ptr [eax+4]
        call    FUN_006992A0
        fld     dword ptr [esi+0xc]
        fsub    dword ptr [esi+8]
        pop     esi
        fdivp   st(1), st(0)
        ret
    }
}
