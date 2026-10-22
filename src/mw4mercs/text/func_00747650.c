/*
 * FUN_00747650 (27 B) — Calls FUN_00747210(0x7b76a4, 0x8b27f0) via
 * ECX/EDX, then calls the IAT function at 0x0076b1bc with 0x7472a0.
 *
 * Match: target 100%
 */

extern void __fastcall FUN_00747210(int a, int b);
extern void (__stdcall *g_76b1bc)(int);   /* 0x0076b1bc IAT */

__declspec(naked) void FUN_00747650(void)
{
    __asm {
        mov     edx, 0x8b27f0
        mov     ecx, 0x7b76a4
        call    FUN_00747210
        push    0x7472a0
        call    dword ptr [g_76b1bc]
        ret
    }
}
