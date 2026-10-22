/*
 * FUN_00419ea0 (22 B) — copy 0xc dwords (48 B) from [ESP+4] to ECX (this).
 * __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00419ea0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        mov     eax, ecx
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        pop     edi
        pop     esi
        ret     4
    }
}
