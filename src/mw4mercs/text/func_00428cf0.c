/*
 * FUN_00428cf0 (548 B) — __thiscall MLRFootStep light/attenuation
 * update. Iterates the ring buffer of footstep lights, computes a
 * per-element attenuation factor via FPU dot products, clamps it, and
 * calls FUN_0048ca40 to submit the light. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048bca0(void);
extern void __cdecl FUN_0048ca40(void);
extern int g_007b222c;
extern int g_008bd548;
extern int g_008bd550;
extern int g_008bd554;
extern int g_008bd54c;
extern int g_007b9460;
extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) void FUN_00428cf0(void)
{
    __asm {
        sub     esp, 0xa4
        mov     eax, dword ptr [ecx+0x14]
        push    ebx
        mov     ebx, dword ptr [ecx+0x10]
        cmp     ebx, eax
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp+0x14], ecx
        jz      L_exit
        cmp     dword ptr [g_007b222c], 1
        jnz     L_exit
        mov     ebp, dword ptr [ecx+0xc]
        mov     eax, ebp
        sar     eax, 3
        mov     dword ptr [esp+0x10], eax
        fild    dword ptr [esp+0x10]
        mov     ecx, ebp
        sub     ecx, eax
        mov     dword ptr [esp+0x38], ecx
        fdivr   dword ptr [g_0076d064]
        lea     ecx, [esp+0x50]
        fstp    dword ptr [esp+0x18]
        call    FUN_0048bca0
        mov     eax, dword ptr [g_008bd548]
        mov     edx, dword ptr [g_008bd550]
        mov     dword ptr [esp+0x40], eax
        mov     eax, dword ptr [g_008bd554]
        mov     dword ptr [esp+0x48], edx
        mov     dword ptr [esp+0x4c], eax
        lea     eax, [esp+0x84]
        mov     dword ptr [esp+0x74], eax
        mov     eax, dword ptr [esp+0x14]
        mov     eax, dword ptr [eax+0x14]
        mov     ecx, 0xc
        mov     esi, offset g_007b9460
        lea     edi, [esp+0x84]
        rep movsd
        mov     ecx, dword ptr [g_008bd54c]
        lea     edx, [esp+0x84]
        mov     dword ptr [esp+0x70], edx
        xor     edx, edx
        mov     dword ptr [esp+0x44], ecx
        xor     ecx, ecx
        cmp     ebx, eax
        setg    dl
        mov     edi, ebx
        mov     dword ptr [esp+0x78], ecx
        mov     dword ptr [esp+0x6c], 0x3f
        mov     dword ptr [esp+0x7c], ecx
        imul    edx, ebp
        sub     edx, ebx
        add     edx, eax
        mov     eax, dword ptr [esp+0xbc]
        mov     esi, edx
        mov     edx, dword ptr [eax+0xc]
        fld     dword ptr [eax+0x8]
        mov     dword ptr [esp+0x1c], edx
        mov     edx, dword ptr [eax+0x1c]
        fstp    dword ptr [esp+0x28]
        fld     dword ptr [eax+0x18]
        fstp    dword ptr [esp+0x2c]
        xor     ebx, ebx
        cmp     esi, ecx
        fld     dword ptr [eax+0x28]
        mov     eax, dword ptr [eax+0x2c]
        fstp    dword ptr [esp+0x30]
        mov     dword ptr [esp+0x20], edx
        mov     dword ptr [esp+0x24], eax
        jle     L_exit
        mov     edx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [edx+0x8]
        mov     dword ptr [esp+0x3c], ecx
L_loop:
        cmp     edi, ebp
        jnz     L_skip_zero
        xor     edi, edi
L_skip_zero:
        mov     ecx, dword ptr [esp+0x3c]
        mov     eax, edi
        shl     eax, 4
        fld     dword ptr [ecx+eax+4]
        add     ecx, eax
        fsub    dword ptr [esp+0x1c]
        fld     dword ptr [ecx+8]
        fsub    dword ptr [esp+0x20]
        fld     dword ptr [ecx+0xc]
        fsub    dword ptr [esp+0x24]
        fmul    dword ptr [esp+0x30]
        fxch
        fmul    dword ptr [esp+0x2c]
        faddp   st(1), st(0)
        fxch
        fmul    dword ptr [esp+0x28]
        faddp   st(1), st(0)
        fst     dword ptr [esp+0x10]
        fcomp   dword ptr [g_0076c5b0]
        __emit  0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6        /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jnz     L_inc
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [edx+0x1c]
        __emit  0xDF        /* fnstsw ax: no-WAIT form */
        __emit  0xE0
        __emit  0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        jz      L_inc
        fld     dword ptr [esp+0x10]
        fcomp   dword ptr [edx+0x18]
        __emit  0xDF        /* fnstsw ax: no-WAIT form */
        __emit  0xE0
        __emit  0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        jnz     L_set_one
        fld     dword ptr [esp+0x10]
        fsub    dword ptr [edx+0x18]
        fmul    dword ptr [edx+0x20]
        fsubr   dword ptr [g_0076d064]
        fstp    dword ptr [esp+0x10]
        jmp     L_after_clamp
L_set_one:
        mov     dword ptr [esp+0x10], 0x3f800000
L_after_clamp:
        mov     edx, dword ptr [esp+0x38]
        mov     eax, ebx
        sub     eax, esi
        add     eax, edx
        test    eax, eax
        mov     dword ptr [esp+0x34], eax
        jle     L_fild
        fld     dword ptr [g_0076d064]
        jmp     L_after_f
L_fild:
        fild    dword ptr [esp+0x34]
        fmul    dword ptr [esp+0x18]
        fadd    dword ptr [g_0076d064]
L_after_f:
        fld     dword ptr [esp+0x10]
        fcomp
        __emit  0xDF        /* fnstsw ax: no-WAIT form */
        __emit  0xE0
        __emit  0xF6        /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L_fstp
        mov     edx, dword ptr [esp+0x10]
        fstp    st(0)
        mov     dword ptr [esp+0x4c], edx
        jmp     L_after_store
L_fstp:
        fstp    dword ptr [esp+0x4c]
L_after_store:
        lea     eax, [esp+0x40]
        mov     dword ptr [esp+0x80], eax
        mov     ecx, dword ptr [ecx]
        lea     edx, [esp+0x50]
        mov     dword ptr [esp+0x50], ecx
        mov     ecx, dword ptr [esp+0xb8]
        push    edx
        call    FUN_0048ca40
        mov     edx, dword ptr [esp+0x14]
L_inc:
        inc     ebx
        inc     edi
        cmp     ebx, esi
        jl      L_loop
L_exit:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa4
        ret     8
    }
}
