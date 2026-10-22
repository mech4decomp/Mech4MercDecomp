/*
 * FUN_005b3870 (24 B) — __thiscall, RET 0.
 *
 * Calls a virtual method, then calls FUN_005b00b0 on [ESI+0x35c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b00b0(void);

__declspec(naked) void __stdcall FUN_005b3870(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov     ecx, dword ptr [esi + 0x35c]
        call    FUN_005b00b0
        pop     esi
        ret
    }
}
