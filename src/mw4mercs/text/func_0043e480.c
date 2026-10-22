/*
 * FUN_0043e480 (50 B) — MLR mesh constructor (__thiscall, RET 0x4).
 * Calls FUN_00442180, then sets vtable 0x76e610 and initializes the
 * buffer pair at this+0x88.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00442180(void);

__declspec(naked) void FUN_0043e480(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00442180
        lea     eax, [esi + 0x88]
        mov     dword ptr [eax], 0x0
        mov     dword ptr [esi + 0x90], eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [esi], 0x76e610
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
