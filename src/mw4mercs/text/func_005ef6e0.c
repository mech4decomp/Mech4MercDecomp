/*
 * FUN_005ef6e0 (29 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Dispatches through virtual method this+0xc0 with the stack param, then
 * calls FUN_005efd60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005efd60(void);

__declspec(naked) void __stdcall FUN_005ef6e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xc0]
        mov     ecx, esi
        call    FUN_005efd60
        pop     esi
        ret     0x4
    }
}
