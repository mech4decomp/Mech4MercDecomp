/*
 * FUN_006822b0 (20 B) — HUD element destructor: calls FUN_005c6bd0 on the
 * object at this+0x4, zeroes this+0x8. __thiscall, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c6bd0(void);

__declspec(naked) void FUN_006822b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0x4]
        call    FUN_005c6bd0
        mov     dword ptr [esi+0x8], 0x0
        pop     esi
        ret
    }
}
