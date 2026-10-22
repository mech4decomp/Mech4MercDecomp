/*
 * FUN_005a8ef0 (158 B) — __thiscall, 1 stack arg (RET 4). Weapon fire/heat
 * gate: dispatches on weapon type (1/7/8) and does FPU range/heat checks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0078235c;
extern float g_007704c0;
extern double g_0076d588;
extern void FUN_005ef5a0(void);
extern void __cdecl FUN_00707e70(int v);

__declspec(naked) void FUN_005a8ef0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        call    FUN_005ef5a0
        test    al, al
        jz      L_8f87
        mov     esi, dword ptr [edi+0xe0]
        mov     eax, dword ptr [esi+0x14]
        cmp     eax, 1
        jnz     L_8f16
        pop     edi
        mov     al, al
        pop     esi
        ret     4
L_8f16:
        cmp     eax, 7
        jnz     L_8f61
        push    0
        call    FUN_00707e70
        fsub    qword ptr [edi+0xec]
        fild    dword ptr [esp+0xc]
        fmul    dword ptr [g_0078235c]
        fld     dword ptr [edi+0x1d0]
        fmul    dword ptr [g_007704c0]
        faddp   st(1), st(0)
        fsubr   dword ptr [edi+0x1d0]
        fcompp
        __emit 0xDF               /* fnstsw ax: MSVC6 adds 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6               /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_8f5a
        mov     eax, dword ptr [esi]
        push    0
        push    1
        mov     ecx, esi
        call    dword ptr [eax+0x4]
L_8f5a:
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
L_8f61:
        cmp     eax, 8
        jnz     L_8f87
        push    0
        call    FUN_00707e70
        fsub    qword ptr [edi+0x23c]
        fcomp   qword ptr [g_0076d588]
        __emit 0xDF               /* fnstsw ax: MSVC6 adds 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6               /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_8f87
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
L_8f87:
        pop     edi
        xor     al, al
        pop     esi
        ret     4
    }
}
