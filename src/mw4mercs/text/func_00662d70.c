/*
 * FUN_00662d70 (18 B) — __stdcall RET 0x8. ABL candidate-list cleanup (callee
 * of dispatch FUN_006613f0): frees the argument via FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00662d70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_62d7f
        push    eax
        call    FUN_004084e0
        pop     ecx
L_62d7f:
        ret     0x8
    }
}
