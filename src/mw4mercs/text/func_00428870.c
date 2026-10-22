/*
 * FUN_00428870 (21 B) — __thiscall: copies 6 dwords from the argument
 * (at [esp+8] after the two pushes) into this+0x2c. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00428870(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        push    edi
        lea     edi, [ecx+0x2c]
        mov     ecx, 6
        rep movsd
        pop     edi
        pop     esi
        ret     8
    }
}
