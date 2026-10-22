/*
 * FUN_00490600 (21 B) — __thiscall, RET 4 (1 stack param).
 * Copies 0xc dwords (48 bytes) from source to this+0x18 using rep movsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00490600(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        lea     edi, [ecx + 0x18]
        mov     ecx, 0xc
        rep movsd
        pop     edi
        pop     esi
        ret     0x4
    }
}
