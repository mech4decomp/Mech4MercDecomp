/*
 * FUN_004FA0A0 (15 B) — Thunk: saves ECX, loads global pointer from
 * 0x007DD230 into ECX, and calls FUN_0050B8E0.
 *
 * __stdcall, RET 4 (one DWORD param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0050b8e0(void);

extern int DAT_007dd230;   /* g_global (0x007DD230) */

__declspec(naked) void __stdcall FUN_004fa0a0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [DAT_007dd230]   ; mov ecx, [0x007DD230]
        call    FUN_0050b8e0
        ret     4
    }
}
