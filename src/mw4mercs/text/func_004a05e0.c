/*
 * FUN_004a05e0 (224 B) — MLR particle/shrapnel: computes a fragment's
 * speed/scale via polynomial evaluation, clamps it, writes it into the
 * ring buffer slot, copies the transform matrix, and calls FUN_004a0500.
 * __thiscall, RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_00415020(void);
extern void __cdecl FUN_004a0500(int idx);
extern float g_0076c5b0;
extern float g_0076d064;
extern float g_00770264;

__declspec(naked) void FUN_004a05e0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, ecx
        fld     dword ptr [ebx+0x90]
        mov     ecx, dword ptr [ebx+0xbc]
        fld     st(0)
        push    ebp
        mov     ebp, dword ptr [esp+0x10]
        mov     edx, dword ptr [ebx+0x90]
        push    esi
        mov     esi, dword ptr [ebx+0x10]
        fmul    dword ptr [esi+0x2c]
        lea     eax, [ebp+ebp*8]
        push    edi
        lea     edi, [ecx+eax*8]
        fadd    dword ptr [esi+0x30]
        mov     dword ptr [edi+0x3c], 0x0
        mov     dword ptr [esp+0x18], edx
        fmul    st(0), st(1)
        fadd    dword ptr [esi+0x28]
        fmul    st(0), st(1)
        fadd    dword ptr [esi+0x24]
        fstp    dword ptr [esp+0x10]
        fstp    st(0)
        call    FUN_00415020
        fld     dword ptr [esp+0x18]
        fmul    dword ptr [esi+0x40]
        fadd    dword ptr [esi+0x44]
        fmul    dword ptr [esp+0x18]
        fadd    dword ptr [esi+0x3c]
        fmul    dword ptr [esp+0x18]
        fadd    dword ptr [esi+0x38]
        fsub    dword ptr [esp+0x10]
        fmulp   st(1), st(0)
        fadd    dword ptr [esp+0x10]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L0668
        fstp    st(0)
        fld     dword ptr [g_0076c5b0]
        jmp     L067d
L0668:
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L067d
        fstp    st(0)
        fld     dword ptr [g_0076d064]
L067d:
        fstp    dword ptr [edi+0x44]
        fld     dword ptr [esi+0x6c]
        fcom    dword ptr [g_00770264]
        fnstsw  ax
        test    ah, 0x1
        jz      L0698
        fstp    st(0)
        fld     dword ptr [g_00770264]
L0698:
        fld     dword ptr [g_0076d064]
        mov     esi, dword ptr [esp+0x1c]
        fdiv    st(0), st(1)
        mov     ecx, 0xc
        push    ebp
        fstp    dword ptr [edi+0x40]
        rep movsd
        fstp    st(0)
        mov     ecx, ebx
        call    FUN_004a0500
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
