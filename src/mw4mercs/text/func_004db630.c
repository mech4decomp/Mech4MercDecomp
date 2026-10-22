/*
 * FUN_004DB630 (15 B) — Thunk: reads field at +0x30 from the input
 * struct and passes it to FUN_004084E0.
 *
 * __stdcall, RET 0 (one DWORD param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_004db630(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x30]
        push    ecx
        call    FUN_004084e0
        pop     ecx
        ret
    }
}
