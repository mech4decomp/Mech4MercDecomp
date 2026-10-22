/*
 * FUN_005a80f0 (30 B) — Scalar deleting destructor.
 *
 * Calls destructor (FUN_004d9db0), then operator delete (FUN_004084e0)
 * if the flag parameter (bit 0) is set.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: delete flag).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d9db0(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005a80f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004d9db0
        test    byte ptr [esp + 0x8], 1
        jz      label_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
label_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
