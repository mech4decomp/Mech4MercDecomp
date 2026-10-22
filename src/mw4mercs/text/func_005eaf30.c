/*
 * FUN_005eaf30 (312 B) — __thiscall, RET 0x4 (one stack param, a float*).
 *
 * Picks a source pointer from this+0x188/0x18c/0x180, copies 0xc dwords
 * from (*(src)+0xd8)+0x80 to a local, then performs a series of matrix
 * transforms (FUN_00428730, FUN_00419480, FUN_0040ca40, FUN_0040c9e0)
 * and FPU distance/angle math, storing a result to this+0x1cc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00428730(void);
extern void __stdcall FUN_00419480(void);
extern void __stdcall FUN_0040ca40(void);
extern void __stdcall FUN_0040c9e0(void);
extern void __stdcall FUN_005eaf10(void);

/* absolute-memory operand (extern symbol -> correct opcode + masked reloc) */
extern float DAT_0076d064;

__declspec(naked) void __stdcall FUN_005eaf30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x58
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x188]
        test    eax, eax
        push    esi
        push    edi
        jnz     L_AF5D
        mov     eax, dword ptr [ebx + 0x18c]
        test    eax, eax
        jnz     L_AF5D
        mov     eax, dword ptr [ebx + 0x180]
        test    eax, eax
        jz      L_B05F
L_AF5D:
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [ebp - 0x58]
        lea     eax, [ebp - 0x1c]
        rep movsd
        push    eax
        lea     ecx, [ebp - 0x58]
        call    FUN_00428730
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x10], ecx
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     ecx, [ebp - 0x28]
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x8], eax
        call    FUN_00419480
        mov     esi, dword ptr [ebp + 0x8]
        fld     dword ptr [ebp - 0x28]
        fsub    dword ptr [esi]
        fld     dword ptr [ebp - 0x24]
        fsub    dword ptr [esi + 0x4]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [esi + 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        lea     eax, [ebp - 0x10]
        fstp    dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x10]
        call    FUN_0040ca40
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     ecx, [ebp - 0x28]
        call    FUN_00419480
        lea     edx, [ebp - 0x28]
        push    edx
        lea     eax, [ebp - 0x10]
        push    eax
        lea     ecx, [ebp - 0x10]
        call    FUN_0040c9e0
        fld     dword ptr [esi + 0x4]
        fsub    dword ptr [ebp - 0xc]
        fabs
        fdiv    dword ptr [ebp + 0x8]
        fptan
        fstp    st(0)
        fst     dword ptr [ebp + 0x8]
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_B02F
        mov     dword ptr [ebp + 0x8], 0x3f800000
L_B02F:
        mov     ecx, ebx
        call    FUN_005eaf10
        fmul    dword ptr [ebp + 0x8]
        fst     dword ptr [ebx + 0x1cc]
        fld     dword ptr [esi + 0x4]
        fcomp   dword ptr [ebp - 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_B05D
        pop     edi
        fchs
        pop     esi
        fstp    dword ptr [ebx + 0x1cc]
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_B05D:
        fstp    st(0)
L_B05F:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
