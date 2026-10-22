/*
 * FUN_004F3F40 (22 B) — REP MOVSD copy of 0xC dwords (48 bytes).
 *
 * __thiscall (ECX = dst), RET 4 (one stack param: src).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004f3f40(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
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
