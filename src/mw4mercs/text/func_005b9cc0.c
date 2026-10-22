/*
 * FUN_005b9cc0 (33 B) — __thiscall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b9800(void);
extern void __stdcall FUN_00707e70(void);

__declspec(naked) void __stdcall FUN_005b9cc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x180], 0x0
        call    FUN_005b9800
        push    0x0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1b0]
        pop     esi
        ret
    }
}
