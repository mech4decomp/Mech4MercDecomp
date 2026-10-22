/*
 * FUN_00699280 (22 B) — loads a pointer from [ecx+0x18], calls FUN_00699250,
 * computes (st(1) / ([esi+0xc] - [esi+8])) and returns it on the FPU stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00699250(void);

__declspec(naked) void FUN_00699280(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x18]
        push    esi
        mov     esi, dword ptr [eax+4]
        call    FUN_00699250
        fld     dword ptr [esi+0xc]
        fsub    dword ptr [esi+8]
        pop     esi
        fdivp   st(1), st(0)
        ret
    }
}
