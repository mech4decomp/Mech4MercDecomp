/*
 * FUN_004a0ea0 (44 B) — MLR particle/shrapnel: resets a ring-buffer slot's
 * scale to 1.0 and clears the "last" index if it matches. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004a0ea0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, dword ptr [ecx+0xbc]
        lea     edx, [eax+eax*8]
        mov     dword ptr [esi+edx*8+0x3c], 0x3f800000
        cmp     eax, dword ptr [ecx+0xa8]
        pop     esi
        jnz     L0ec9
        mov     dword ptr [ecx+0xa8], 0xffffffff
L0ec9:
        ret     0x4
    }
}
