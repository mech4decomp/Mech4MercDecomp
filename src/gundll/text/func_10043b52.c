/*
 * FUN_10043b52 (27 B) - __cdecl. Calls FUN_10043acc(param_1,param_2,param_3,
 * param_4,0) and returns param_3.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10043acc(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_10043b52(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    0
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_10043acc
        mov     eax, dword ptr [ebp + 0x10]
        pop     ebp
        ret
    }
}
