/*
 * FUN_005EB100 (342 B) — __thiscall (ECX = this).
 *
 * State-machine update on this+0x1e8/0x1e4/0x1ec, then a float
 * accumulator update driven by this+0x1e0 (0/4/other). Calls
 * FUN_00707e70(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00707e70(int param);

/* extern data symbols for absolute-address FPU operands */
extern float DAT_00789868;
extern float DAT_007899ec;
extern float DAT_0076d070;
extern float DAT_0076c5b0;
extern float DAT_007899e8;

__declspec(naked) void __fastcall FUN_005eb100(void *param)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x1e0]
        mov     ecx, 0x3
        cmp     ebx, ecx
        jz      L_ret
        mov     eax, dword ptr [esi + 0x1e8]
        cmp     eax, 0x2
        jz      L1
        cmp     eax, 0x1
        jnz     L2
L1:
        fld     dword ptr [esi + 0x1f0]
        mov     dword ptr [esi + 0x1e8], ecx
        fsub    dword ptr [esi + 0x1fc]
        fstp    dword ptr [esi + 0x1fc]
L2:
        mov     eax, dword ptr [esi + 0x1e4]
        cmp     eax, 0x2
        jz      L3
        cmp     eax, 0x1
        jnz     L4
L3:
        fld     dword ptr [esi + 0x1f0]
        mov     dword ptr [esi + 0x1e4], ecx
        fsub    dword ptr [esi + 0x1f8]
        fstp    dword ptr [esi + 0x1f8]
L4:
        mov     eax, dword ptr [esi + 0x1ec]
        cmp     eax, 0x2
        jz      L5
        cmp     eax, 0x1
        jnz     L6
L5:
        fld     dword ptr [esi + 0x1f4]
        mov     dword ptr [esi + 0x1ec], ecx
        fsub    dword ptr [esi + 0x200]
        fstp    dword ptr [esi + 0x200]
L6:
        push    edi
        xor     edi, edi
        push    edi
        call    FUN_00707e70
        cmp     ebx, edi
        jz      L7
        cmp     ebx, 0x4
        jnz     L8
        mov     dword ptr [esi + 0x1bc], edi
L8:
        fld     dword ptr [DAT_00789868]
        fmul    dword ptr [DAT_007899ec]
        fdivr   dword ptr [esi + 0x1bc]
        fmul    dword ptr [DAT_0076d070]
        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L9
        fchs
L9:
        fadd    st(0), st(1)
        mov     dword ptr [esi + 0x1c0], edi
        mov     dword ptr [esi + 0x1e0], edi
        pop     edi
        fstp    dword ptr [esi + 0x1c4]
        pop     esi
        pop     ebx
        fstp    st(0)
        ret
L7:
        fcom    dword ptr [esi + 0x1c4]
        fnstsw  ax
        test    ah, 0x41
        jnz     L10
        mov     dword ptr [esi + 0x1bc], edi
        fstp    st(0)
        mov     dword ptr [esi + 0x1c0], edi
        mov     dword ptr [esi + 0x1e0], edi
        pop     edi
        pop     esi
        pop     ebx
        ret
L10:
        fsubr   dword ptr [esi + 0x1c4]
        fadd    st(0), st(0)
        fld     dword ptr [esi + 0x1bc]
        fcomp   dword ptr [DAT_0076c5b0]
        fld     dword ptr [DAT_00789868]
        fmul    st(0), st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L11
        fmul    dword ptr [DAT_007899ec]
        jmp     L12
L11:
        fmul    dword ptr [DAT_007899e8]
L12:
        fstp    dword ptr [esi + 0x1bc]
        mov     dword ptr [esi + 0x1c0], edi
        mov     dword ptr [esi + 0x1e0], edi
        fstp    st(0)
        pop     edi
L_ret:
        pop     esi
        pop     ebx
        ret
    }
}
