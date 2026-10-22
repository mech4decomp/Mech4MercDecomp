/*
 * FUN_00661e60 (15 B) — __thiscall. Calls FUN_00707e70 (stdcall, pops its 1
 * arg), then subtracts [this+0x4] from ST(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00661e60(void)
{
    __asm {
        push    esi
        push    0
        mov     esi, ecx
        call    FUN_00707e70
        fsub    dword ptr [esi + 0x4]
        pop     esi
        ret
    }
}
