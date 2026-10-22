/*
 * FUN_0047cfe0 (513 B) — MLR vertex-list bounds/self-intersection test
 * (RET 0). Heavy FPU; counts vertices outside clip bounds, then runs a
 * segment self-intersection check. Sets g_007da5c0..cc on failure.
 *
 * CFLAGS: /O1
 */

extern float g_0076d070;
extern float g_0076df00;
extern float g_0076c5b0;
extern int g_007da5c0;
extern int g_007da5c4;
extern int g_007da5c8;
extern int g_007da5cc;
extern void __cdecl FUN_0047ec00(void);

__declspec(naked) void FUN_0047cfe0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x24]
        push    esi
        xor     ebx, ebx
        push    edi
        xor     esi, esi
        xor     edi, edi
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x10], ebx
        jle     L_47d04c
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax]
        mov     edx, ebp
L_47d001:
        fld     dword ptr [ecx + 0x4]
        fcomp   dword ptr [g_0076d070]
        __emit 0xDF   /* fnstsw ax - MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah, imm8 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_47d012
        inc     esi
L_47d012:
        fld     dword ptr [ecx + 0x4]
        fcomp   dword ptr [g_0076df00]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_47d023
        inc     edi
L_47d023:
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076d070]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_47d036
        inc     dword ptr [esp + 0x10]
L_47d036:
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076df00]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_47d046
        inc     ebx
L_47d046:
        add     ecx, 0x8
        dec     edx
        jnz     L_47d001
L_47d04c:
        cmp     esi, ebp
        jz      L_47d19b
        cmp     edi, ebp
        jz      L_47d19b
        cmp     ebx, ebp
        jz      L_47d19b
        cmp     dword ptr [esp + 0x10], ebp
        jz      L_47d19b
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ecx]
        fld     dword ptr [edx + ebp*8 - 0x4]
        mov     dword ptr [esp + 0x2c], 0xbf800000
        fsub    dword ptr [edx + 0x4]
        fld     dword ptr [edx + 0x8]
        fsub    dword ptr [edx]
        fmulp   st(1), st(0)
        fld     dword ptr [edx + ebp*8 - 0x8]
        fsub    dword ptr [edx]
        fld     dword ptr [edx + 0xc]
        fsub    dword ptr [edx + 0x4]
        fmulp   st(1), st(0)
        fcompp
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_47d0a9
        mov     dword ptr [esp + 0x2c], 0x3f800000
L_47d0a9:
        test    ebp, ebp
        jle     L_47d15f
        mov     edi, 0x1
        mov     ecx, edx
L_47d0b8:
        xor     eax, eax
        cmp     edi, ebp
        setge   al
        dec     eax
        and     eax, edi
        mov     esi, eax
        fld     dword ptr [edx + esi*8]
        lea     ebx, [edx + esi*8 + 0x4]
        fmul    dword ptr [ecx + 0x4]
        fld     dword ptr [ecx]
        fmul    dword ptr [ebx]
        fstp    dword ptr [esp + 0x28]
        fld     st(0)
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x2c]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_47d14e
        fld     dword ptr [ebx]
        fld     dword ptr [ecx + 0x4]
        fld     dword ptr [edx + esi*8]
        fld     dword ptr [ecx]
        fld     st(1)
        fmul    st(0), st(2)
        fld     dword ptr [ecx]
        fmul    dword ptr [edx + esi*8]
        fadd    st(0), st(0)
        fsubp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fld     st(4)
        fmul    st(0), st(5)
        fld     dword ptr [ebx]
        fmul    dword ptr [ecx + 0x4]
        fadd    st(0), st(0)
        fsubp   st(1), st(0)
        fld     st(4)
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fld     st(5)
        fmul    st(0), st(6)
        fld     dword ptr [esp + 0x28]
        fmul    st(0), st(7)
        fadd    st(0), st(0)
        fsubp   st(1), st(0)
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        faddp   st(1), st(0)
        fadd    st(0), st(0)
        fcompp
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        __emit 0xDF
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        fstp    st(0)
        jz      L_47d169
        jmp     L_47d150
L_47d14e:
        fstp    st(0)
L_47d150:
        inc     edi
        lea     eax, [edi - 0x1]
        add     ecx, 0x8
        cmp     eax, ebp
        jl      L_47d0b8
L_47d15f:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x14
        ret
L_47d169:
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_007da5c0], 0x0
        mov     dword ptr [g_007da5c4], 0x3f000000
        mov     dword ptr [g_007da5c8], 0x0
        mov     dword ptr [g_007da5cc], 0x3f800000
        xor     al, al
        pop     ebx
        add     esp, 0x14
        ret
L_47d19b:
        push    0x0
        push    0x3f000000
        push    0x3f000000
        lea     ecx, [esp + 0x20]
        call    FUN_0047ec00
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_007da5c8], eax
        mov     dword ptr [g_007da5c0], ecx
        mov     dword ptr [g_007da5c4], edx
        mov     dword ptr [g_007da5cc], 0x3f800000
        xor     al, al
        pop     ebx
        add     esp, 0x14
        ret
    }
}
