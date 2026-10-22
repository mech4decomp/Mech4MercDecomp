/*
 * FUN_005a8f90 (109 B) — __thiscall, 2 stack args (RET 8). Weapon heat/cooldown
 * update: if weapon type 8 and heat threshold exceeded, add heat and reset
 * timestamp, then forward args to FUN_005ec250.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076d3c8;
extern void __cdecl FUN_00707e70(int v);
extern void FUN_005ec250(void);

__declspec(naked) void FUN_005a8f90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xe0]
        cmp     dword ptr [eax+0x14], 8
        jnz     L_8fe8
        fld     qword ptr [esp+0x8]
        fsub    qword ptr [esi+0xec]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF               /* fnstsw ax: MSVC6 adds 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6               /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_8fe8
        fld     dword ptr [esi+0x244]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF               /* fnstsw ax: MSVC6 adds 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6               /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_8fe8
        fld     dword ptr [esi+0x244]
        push    0
        fadd    dword ptr [g_0076d3c8]
        fstp    dword ptr [esi+0x244]
        call    FUN_00707e70
        fstp    qword ptr [esi+0xec]
L_8fe8:
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x8]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005ec250
        pop     esi
        ret     8
    }
}
