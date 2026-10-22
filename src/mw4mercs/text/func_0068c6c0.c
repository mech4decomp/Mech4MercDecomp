/*
 * FUN_0068c6c0 (440 B) — __thiscall physics/position update. Clamps
 * input coordinates, computes a displacement vector, and either applies
 * a scaled velocity update or copies a fallback vector.
 *
 * __thiscall (ECX = this), RET 0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0080da60;
extern float g_0077de8c;
extern float g_0080da5c;
extern float g_0080da58;
extern float g_0080da54;
extern float g_0076c5b0;
extern float g_007880f8;
extern float g_0078815c;
extern float g_0076d064;
extern int g_007b8d68;
extern int g_007b8d6c;
extern int g_007b8d70;

__declspec(naked) int __cdecl FUN_0068c6c0(void)
{
    __asm {
        fld     dword ptr [g_0080da60]
        sub     esp, 0x18
        fadd    dword ptr [g_0077de8c]
        fld     dword ptr [esp + 0x1c]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 1
        jz      L_6e2
        fstp    dword ptr [esp + 0x1c]
        jmp     L_6e4
L_6e2:
        fstp    st(0)
L_6e4:
        fld     dword ptr [g_0080da5c]
        fadd    dword ptr [g_0077de8c]
        fld     dword ptr [esp + 0x24]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 1
        jz      L_703
        fstp    dword ptr [esp + 0x24]
        jmp     L_705
L_703:
        fstp    st(0)
L_705:
        fld     dword ptr [g_0080da58]
        fsub    dword ptr [g_0077de8c]
        fld     dword ptr [esp + 0x1c]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_724
        fstp    dword ptr [esp + 0x1c]
        jmp     L_726
L_724:
        fstp    st(0)
L_726:
        fld     dword ptr [g_0080da54]
        fsub    dword ptr [g_0077de8c]
        fld     dword ptr [esp + 0x24]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_745
        fstp    dword ptr [esp + 0x24]
        jmp     L_747
L_745:
        fstp    st(0)
L_747:
        fld     dword ptr [esp + 0x1c]
        xor     edx, edx
        fsub    dword ptr [ecx]
        mov     dword ptr [ecx + 4], edx
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [ecx + 8]
        fst     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0x4]
        fadd    dword ptr [esp + 0x8]
        /* __emit: MSVC6 drops the 00 disp byte for fstp [esp] (D9 1C 24 vs ref D9 5C 24 00) */
        __emit 0xD9
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fld     dword ptr [esp + 0x28]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x2c]
        fnstsw  ax
        fld     st(0)
        fmul    dword ptr [g_007880f8]
        test    ah, 1
        /* __emit: MSVC6 drops the 00 disp byte for fld [esp] (D9 04 24 vs ref D9 44 24 00) */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [g_0078815c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_829
        fld     st(0)
        fmul    st(0), st(1)
        /* __emit: MSVC6 drops the 00 disp byte for fld [esp] (D9 04 24 vs ref D9 44 24 00) */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        jnz     L_82b
        fld     dword ptr [esp + 0x4]
        mov     dword ptr [esp + 0x20], edx
        fadd    dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x10], edx
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     dword ptr [esp + 0xc]
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx + 0xc], eax
        fmul    dword ptr [esp + 0x14]
        xor     al, al
        fst     dword ptr [ecx + 0x14]
        fld     dword ptr [esp + 0x1c]
        fmul    st(0), st(2)
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x20]
        fmul    st(0), st(2)
        fstp    dword ptr [esp + 0x20]
        fmulp   st(1), st(0)
        fld     dword ptr [esp + 0x1c]
        fadd    dword ptr [ecx]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [ecx + 4]
        fstp    dword ptr [ecx + 4]
        fadd    dword ptr [ecx + 8]
        fstp    dword ptr [ecx + 8]
        add     esp, 0x18
        ret     0x14
L_829:
        fstp    st(0)
L_82b:
        mov     eax, dword ptr [esp + 0x1c]
        fstp    st(0)
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [g_007b8d68]
        mov     dword ptr [ecx + 8], edx
        mov     edx, dword ptr [g_007b8d6c]
        mov     dword ptr [ecx + 0xc], eax
        mov     eax, dword ptr [g_007b8d70]
        mov     dword ptr [ecx + 0x10], edx
        mov     edx, dword ptr [g_007b8d68]
        mov     dword ptr [ecx + 0x14], eax
        mov     eax, dword ptr [g_007b8d6c]
        mov     dword ptr [ecx + 0x18], edx
        mov     edx, dword ptr [g_007b8d70]
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ecx + 0x20], edx
        mov     al, 1
        add     esp, 0x18
        ret     0x14
    }
}
