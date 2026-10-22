/*
 * FUN_00428850 (22 B) — MLR copy 12 dwords (48 bytes) from [ESP+4] to this.
 * __thiscall, RET 0x4. Uses rep movsd.
 *
 * CFLAGS: /O1
 * Match: target
 */

__declspec(naked) void FUN_00428850(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     eax, ecx
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        pop     edi
        pop     esi
        ret     0x4
    }
}
