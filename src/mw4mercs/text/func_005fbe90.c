/*
 * FUN_005fbe90 (54 B) — __thiscall, RET 0x4. Compares (arg + [this+0x3b8])
 * against ([vobj+0x70] + g_0076d5ec) via FPU; returns 1 if arg+offset is
 * greater, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d5ec;

__declspec(naked) void FUN_005fbe90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x78]
        lea     ecx, [esi+0x78]
        call    dword ptr [eax+0x4]
        fld     dword ptr [esp+0x8]
        fadd    dword ptr [esi+0x3b8]
        pop     esi
        fld     dword ptr [eax+0x70]
        fadd    dword ptr [g_0076d5ec]
        fcompp
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_bec1
        mov     eax, 0x1
        ret     0x4
L_bec1:
        xor     eax, eax
        ret     0x4
    }
}
