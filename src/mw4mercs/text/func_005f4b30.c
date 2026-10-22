/*
 * FUN_005f4b30 (430 B) — __thiscall (ECX = this), RET 4 (1 float param).
 * Animation/rotation update: clamps a heading angle, applies a switch on a
 * mode byte, computes a sin-based correction, and updates this->0x440/0x444.
 *
 * CFLAGS: /O1
 */

extern float DAT_0076c5b0;
extern float g_770168;   /* 0x00770168 */
extern float g_76d040;   /* 0x0076d040 */
extern float g_77016c;   /* 0x0077016c */
extern float g_77de8c;   /* 0x0077de8c */
extern float g_78096c;   /* 0x0078096c */
extern float g_7b4384;   /* 0x007b4384 */
extern float g_76d070;   /* 0x0076d070 */
extern float g_77d0fc;   /* 0x0077d0fc */
extern char  g_5f4cf4;   /* 0x005f4cf4 switch lookup table */
extern int   g_5f4ce0;   /* 0x005f4ce0 switch jump table */

__declspec(naked) void __fastcall FUN_005f4b30(void)
{
    __asm {
        fld     dword ptr [ecx + 0x440]
        push    esi
        fcomp   dword ptr [DAT_0076c5b0]
        xor     esi, esi
        mov     dword ptr [ecx + 0x42c], esi
        mov     dword ptr [ecx + 0x448], esi
        mov     dword ptr [ecx + 0x430], esi
        fnstsw  ax
        mov     dword ptr [ecx + 0x43c], esi
        test    ah, 0x40
        jz      l_switch
        mov     dword ptr [ecx + 0x448], esi
        mov     dword ptr [ecx + 0x444], esi
        pop     esi
        ret     4
    l_switch:
        fld     dword ptr [g_770168]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x4bc]
        add     eax, -2
        cmp     eax, 0x19
        ja      l_common
        xor     edx, edx
        mov     dl, byte ptr [eax + g_5f4cf4]
        jmp     dword ptr [edx*4 + g_5f4ce0]
    case_1:
        fstp    st(0)
        fld     dword ptr [g_76d040]
        jmp     l_common
    case_2:
        fstp    st(0)
        fld     dword ptr [g_77016c]
        jmp     l_common
    case_3:
        fstp    st(0)
        fld     dword ptr [g_77de8c]
        jmp     l_common
    case_4:
        fstp    st(0)
        fld     dword ptr [g_78096c]
    l_common:
        mov     eax, dword ptr [ecx + 0xd8]
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        fld     dword ptr [eax + 0x18]
        fld     dword ptr [eax + 0x28]
        fmul    dword ptr [ecx + 0x49c]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x498]
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [ecx + 0x494]
        faddp   st(1), st(0)
        fcomp   dword ptr [DAT_0076c5b0]
        fld     dword ptr [ecx + 0x484]
        fnstsw  ax
        fcomp   dword ptr [DAT_0076c5b0]
        test    ah, 0x1
        fnstsw  ax
        jz      l_else
        test    ah, 0x41
        fld     dword ptr [ecx + 0x484]
        jz      l_sin1
        fchs
    l_sin1:
        fsin
        fmul    dword ptr [g_7b4384]
        fadd    st(0), st(0)
        faddp   st(1), st(0)
        jmp     l_clamp
    l_else:
        test    ah, 0x41
        fld     dword ptr [ecx + 0x484]
        jz      l_sin2
        fchs
    l_sin2:
        fsin
        fmul    dword ptr [g_7b4384]
        fadd    st(0), st(0)
        fsubp   st(1), st(0)
    l_clamp:
        fcom    dword ptr [g_76d070]
        fnstsw  ax
        test    ah, 0x1
        jz      l_clamp2
        fstp    st(0)
        fld     dword ptr [g_76d070]
        jmp     l_apply
    l_clamp2:
        fcom    dword ptr [g_78096c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_apply
        fstp    st(0)
        fld     dword ptr [g_78096c]
    l_apply:
        fld     dword ptr [ecx + 0x440]
        fcomp   dword ptr [DAT_0076c5b0]
        fmul    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x1
        jz      l_sub
        fadd    dword ptr [ecx + 0x440]
        fst     dword ptr [ecx + 0x440]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_store
        jmp     l_zero
    l_sub:
        fsubr   dword ptr [ecx + 0x440]
        fst     dword ptr [ecx + 0x440]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_store
    l_zero:
        mov     dword ptr [ecx + 0x440], esi
    l_store:
        fld     dword ptr [ecx + 0x440]
        mov     eax, dword ptr [ecx + 0x440]
        fmul    dword ptr [g_77d0fc]
        mov     dword ptr [ecx + 0x448], esi
        mov     dword ptr [ecx + 0x170], eax
        pop     esi
        fstp    dword ptr [ecx + 0x444]
        ret     4
    }
}
