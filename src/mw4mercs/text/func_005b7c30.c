/*
 * FUN_005b7c30 (11 B) — __thiscall (ECX = this). Sets vtable pointer
 * 0x7868f0 then tail-jumps to FUN_004d9db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d9db0(void);

__declspec(naked) void __fastcall FUN_005b7c30(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7868f0
        jmp     FUN_004d9db0
    }
}
