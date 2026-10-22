/*
 * FUN_0049ca60 (816 B) — MLR debris-cloud particle update (__thiscall, RET 0x10).
 * Evaluates a curve, transforms a particle, integrates velocity/position.
 * FPU heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;
extern int g_007b8d68;
extern int g_007b8d6c;
extern int g_007b8d70;
extern void FUN_00495e60(void);
extern void FUN_0041afd0(void);
extern void FUN_004206b0(void);
extern void FUN_0041c6e0(void);
extern void FUN_0041c680(void);
extern void FUN_0040c9e0(void);
extern void FUN_0041b140(void);
extern void FUN_0041b320(void);
extern void FUN_0041b680(void);
extern void FUN_0041a160(void);

__declspec(naked) void FUN_0049ca60(void)
{
    __asm {
        sub     esp, 0xc0
        mov     eax, dword ptr [esp+0xc4]
        push    ebx
        mov     ebx, ecx
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*2]
        mov     eax, dword ptr [ebx+0xa0]
        fld     dword ptr [eax+edx*8+0x30]
        mov     ecx, dword ptr [eax+edx*8+0x38]
        push    esi
        fst     dword ptr [esp+0xc]
        fcomp   dword ptr [g_0076d064]
        lea     esi, [eax+edx*8]
        push    edi
        mov     edi, dword ptr [ebx+0x10]
        mov     dword ptr [esp+0x14], ecx
        __emit 0xDF /* fnstsw ax (no-WAIT DF E0 form) */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x1 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x01
        jnz     L_caaf
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0xc0
        ret     0x10
L_caaf:
        push    ebp
        mov     ebp, dword ptr [esp+0x14]
        push    0x0
        push    ebp
        lea     ecx, [edi+0x12c]
        call    FUN_00495e60
        mov     al, byte ptr [edi+0x144]
        test    al, al
        jz      L_cade
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [edi+0x140]
        fadd    dword ptr [edi+0x13c]
        fmulp   st(1), st(0)
L_cade:
        fstp    dword ptr [esi+0x54]
        mov     ecx, dword ptr [esi+0x2c]
        mov     edx, dword ptr [esi+0xc]
        mov     eax, dword ptr [esi+0x1c]
        mov     dword ptr [esp+0x24], ecx
        push    esi
        lea     ecx, [esp+0x54]
        mov     dword ptr [esp+0x20], edx
        mov     dword ptr [esp+0x24], eax
        call    FUN_0041afd0
        push    0x0
        push    ebp
        lea     ecx, [edi+0x10c]
        call    FUN_00495e60
        fst     dword ptr [esp+0x10]
        mov     al, byte ptr [edi+0x124]
        test    al, al
        pop     ebp
        jz      L_cb35
        mov     edx, dword ptr [esp+0x14]
        fstp    st(0)
        push    0x0
        push    edx
        lea     ecx, [edi+0x118]
        call    FUN_00495e60
        fmul    dword ptr [esp+0xc]
L_cb35:
        fchs
        fst     dword ptr [esp+0xc]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax (no-WAIT DF E0 form) */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x41
        jnz     L_cb50
        mov     dword ptr [esp+0xc], 0x0
L_cb50:
        mov     dword ptr [esp+0x5c], 0x0
        fld     dword ptr [edi+0xcc]
        mov     al, byte ptr [edi+0xdc]
        test    al, al
        jz      L_cb7a
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edi+0xd8]
        fadd    dword ptr [edi+0xd4]
        fmulp   st(1), st(0)
L_cb7a:
        mov     eax, dword ptr [g_007b8d68]
        fstp    dword ptr [esp+0x60]
        mov     ecx, dword ptr [g_007b8d6c]
        mov     edx, dword ptr [g_007b8d70]
        mov     dword ptr [esp+0x24], eax
        lea     eax, [ebx+0x28]
        mov     dword ptr [esp+0x28], ecx
        push    eax
        lea     ecx, [esp+0xa0]
        mov     dword ptr [esp+0x68], 0x0
        mov     dword ptr [esp+0x30], edx
        call    FUN_004206b0
        lea     ecx, [esp+0x9c]
        push    ecx
        lea     edx, [esp+0x60]
        push    edx
        lea     ecx, [esp+0x70]
        call    FUN_0041c6e0
        fld     dword ptr [esi+0x48]
        fsub    dword ptr [esp+0x68]
        fld     dword ptr [esi+0x4c]
        fsub    dword ptr [esp+0x6c]
        fstp    dword ptr [esp+0x40]
        fld     dword ptr [esi+0x50]
        mov     dword ptr [esp+0x74], 0x0
        fsub    dword ptr [esp+0x70]
        fstp    dword ptr [esp+0x44]
        fmul    dword ptr [esp+0xc]
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [esp+0x40]
        fmul    dword ptr [esp+0xc]
        fstp    dword ptr [esp+0x28]
        fld     dword ptr [esp+0x44]
        fmul    dword ptr [esp+0xc]
        fstp    dword ptr [esp+0x2c]
        mov     al, byte ptr [edi+0x104]
        test    al, al
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edi+0xf0]
        fadd    dword ptr [edi+0xf4]
        fmul    dword ptr [esp+0x10]
        fadd    dword ptr [edi+0xec]
        fmul    dword ptr [esp+0x10]
        fadd    dword ptr [edi+0xe8]
        jz      L_cc4e
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edi+0x100]
        fadd    dword ptr [edi+0xfc]
        fmulp   st(1), st(0)
L_cc4e:
        lea     eax, [esp+0x9c]
        fstp    dword ptr [esp+0x78]
        push    eax
        lea     ecx, [esp+0x78]
        push    ecx
        lea     ecx, [esp+0x88]
        mov     dword ptr [esp+0x84], 0x0
        call    FUN_0041c680
        lea     edx, [esp+0x80]
        push    edx
        lea     eax, [esp+0x28]
        push    eax
        lea     ecx, [esp+0x2c]
        call    FUN_0040c9e0
        fld     qword ptr [esp+0xd8]
        fsub    qword ptr [ebx+0x88]
        lea     eax, [esp+0x30]
        fld     dword ptr [esp+0x24]
        push    eax
        __emit 0xD8
        __emit 0xC9
        fadd    dword ptr [esi+0x48]
        fstp    dword ptr [esi+0x48]
        mov     ecx, dword ptr [esi+0x3c]
        fld     dword ptr [esp+0x2c]
        __emit 0xD8
        __emit 0xC9
        fadd    dword ptr [esi+0x4c]
        fstp    dword ptr [esi+0x4c]
        fld     dword ptr [esp+0x30]
        __emit 0xD8
        __emit 0xC9
        fadd    dword ptr [esi+0x50]
        fstp    dword ptr [esi+0x50]
        fld     st(0)
        fmul    dword ptr [esi+0x48]
        fadd    dword ptr [esp+0x1c]
        fstp    dword ptr [esp+0x1c]
        fld     st(0)
        fmul    dword ptr [esi+0x4c]
        fadd    dword ptr [esp+0x20]
        fstp    dword ptr [esp+0x20]
        fld     st(0)
        fmul    dword ptr [esi+0x50]
        mov     dword ptr [esp+0x34], ecx
        mov     edx, dword ptr [esi+0x40]
        mov     dword ptr [esp+0x38], edx
        fadd    dword ptr [esp+0x24]
        lea     ecx, [esp+0x90]
        fstp    dword ptr [esp+0x24]
        fld     dword ptr [esi+0x44]
        fld     dword ptr [esp+0x34]
        __emit 0xD8
        __emit 0xCA
        fstp    dword ptr [esp+0x34]
        fld     dword ptr [esp+0x38]
        __emit 0xD8
        __emit 0xCA
        fstp    dword ptr [esp+0x38]
        __emit 0xD8
        __emit 0xC9
        fstp    dword ptr [esp+0x3c]
        fstp    st(0)
        call    FUN_0041b140
        mov     edx, dword ptr [esp+0x50]
        mov     ecx, dword ptr [esp+0x4c]
        mov     eax, dword ptr [esp+0x54]
        mov     dword ptr [esp+0x3c], ecx
        mov     ecx, dword ptr [esp+0x58]
        mov     dword ptr [esp+0x40], edx
        lea     edx, [esp+0x3c]
        mov     dword ptr [esp+0x44], eax
        push    edx
        lea     eax, [esp+0x90]
        mov     dword ptr [esp+0x4c], ecx
        push    eax
        lea     ecx, [esp+0x54]
        call    FUN_0041b320
        lea     ecx, [esp+0x4c]
        call    FUN_0041b680
        lea     ecx, [esp+0x4c]
        push    ecx
        mov     ecx, esi
        call    FUN_0041a160
        mov     edx, dword ptr [esp+0x18]
        mov     eax, dword ptr [esp+0x1c]
        mov     dword ptr [esi+0xc], edx
        mov     ecx, dword ptr [esp+0x20]
        mov     dword ptr [esi+0x1c], eax
        pop     edi
        mov     dword ptr [esi+0x2c], ecx
        pop     esi
        mov     al, 0x1
        pop     ebx
        add     esp, 0xc0
        ret     0x10
    }
}
