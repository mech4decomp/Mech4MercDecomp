/*
 * FUN_00680b10 (21 B) — HUD element wrapper (__thiscall, RET 8).
 * Forwards two args to FUN_006805f0 with [ecx+0x18] as this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006805f0(void);

__declspec(naked) void FUN_00680b10(void)
{
    __asm {
        mov     eax, dword ptr [esp+8]
        mov     edx, dword ptr [esp+4]
        mov     ecx, dword ptr [ecx+0x18]
        push    eax
        push    edx
        call    FUN_006805f0
        ret     8
    }
}
