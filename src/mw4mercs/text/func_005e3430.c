/*
 * FUN_005e3430 (27 B) — Constructor.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Calls FUN_005e6da0(this, param), then FUN_005e33f0(this, param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e6da0(void);
extern void FUN_005e33f0(void);

__declspec(naked) void __stdcall FUN_005e3430(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, ecx
        push    edi
        call    FUN_005e6da0
        push    edi
        mov     ecx, esi
        call    FUN_005e33f0
        pop     edi
        pop     esi
        ret     0x4
    }
}
