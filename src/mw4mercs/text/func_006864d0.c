/*
 * FUN_006864d0 (368 B) — RET 0x10 (4 args). HUD aim raycast: walks a
 * line from param_2 toward param_3 in steps, testing FUN_006863b0,
 * returns hit point or -1,-1,-1. FPU + fnstsw/test-ah idiom.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006863b0(void);
extern void __cdecl FUN_0040c9e0(void);
extern float g_0077016c;
extern float g_0076d064;
extern float g_0076c5b0;
extern float g_00770168;

__declspec(naked) void FUN_006864d0(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        mov     ebx, dword ptr [esp+0x38]
        push    ebp
        mov     ebp, dword ptr [esp+0x34]
        push    esi
        mov     esi, dword ptr [esp+0x3c]
        push    edi
        xor     eax, eax
        mov     dword ptr [esi+0x4], eax
        mov     dword ptr [ebp+0x4], eax
        mov     eax, dword ptr [esi+0x8]
        push    ebx
        mov     edi, ecx
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_006863b0
        test    al, al
        jnz     L_686621
        fld     dword ptr [ebp]
        mov     dword ptr [esp+0x2c], 0x0
        fsub    dword ptr [esi]
        fld     dword ptr [ebp+0x8]
        fsub    dword ptr [esi+0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fst     dword ptr [esp+0x3c]
        fld     dword ptr [esp+0x3c]
        fcomp   dword ptr [g_0077016c]
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6                 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_686557
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
L_68653c:
        mov     eax, dword ptr [esp+0x38]
        pop     edi
        pop     esi
        mov     ecx, 0xbf800000
        pop     ebp
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], ecx
        pop     ebx
        add     esp, 0x24
        ret     0x10
L_686557:
        fsqrt
        mov     dword ptr [esp+0x14], 0x0
        mov     dword ptr [esp+0x40], 0x0
        fdivr   dword ptr [g_0076d064]
        fxch    st(2)
        fmul    st(0), st(2)
        fstp    dword ptr [esp+0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x18]
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
        fcomp   dword ptr [esp+0x3c]
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6                 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_68653c
L_686590:
        fld     dword ptr [esp+0x40]
        push    esi
        fadd    dword ptr [g_00770168]
        lea     edx, [esp+0x2c]
        push    edx
        lea     ecx, [esp+0x24]
        fstp    dword ptr [esp+0x48]
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [esp+0x48]
        fstp    dword ptr [esp+0x30]
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [esp+0x48]
        fstp    dword ptr [esp+0x34]
        fld     dword ptr [esp+0x20]
        fmul    dword ptr [esp+0x48]
        fstp    dword ptr [esp+0x38]
        call    FUN_0040c9e0
        mov     eax, dword ptr [esp+0x24]
        mov     ecx, dword ptr [esp+0x1c]
        push    ebx
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_006863b0
        test    al, al
        jnz     L_6865ff
        fld     dword ptr [esp+0x40]
        fmul    dword ptr [esp+0x40]
        fcomp   dword ptr [esp+0x3c]
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6                 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_686590
        jmp     L_68653c
L_6865ff:
        mov     eax, dword ptr [esp+0x38]
        fld     dword ptr [esp+0x1c]
        mov     edx, dword ptr [esp+0x20]
        fstp    dword ptr [eax]
        mov     ecx, dword ptr [esp+0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax+0x4], edx
        mov     dword ptr [eax+0x8], ecx
        pop     ebx
        add     esp, 0x24
        ret     0x10
L_686621:
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [esi+0x8]
        mov     eax, dword ptr [esp+0x38]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], 0x0
        mov     dword ptr [eax+0x8], ecx
        pop     ebx
        add     esp, 0x24
        ret     0x10
    }
}
