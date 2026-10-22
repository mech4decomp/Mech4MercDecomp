/*
 * FUN_0068d570 (24 B) — copies 6 dwords (24 bytes) from param_2 into
 * param_1 if param_1 is non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0068d570(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 0x8]
        test    edi, edi
        jz      skip
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, 0x6
        rep movsd
        pop     esi
skip:
        pop     edi
        ret
    }
}
