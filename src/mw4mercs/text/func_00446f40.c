/*
 * FUN_00446f40 (246 B) — MLR method (__thiscall, RET 0x8): transforms a
 * vertex array by a 4x4 matrix (FPU-heavy), writing results back.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da718;

__declspec(naked) void FUN_00446f40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 0xa0]
        mov     edx, dword ptr [eax]
        push    esi
        xor     esi, esi
        test    edx, edx
        jle     L2f
        push    ebx
        push    edi
        xor     ebx, ebx
        xor     edi, edi
L5f:
        mov     edx, dword ptr [ecx + 0x18]
        test    byte ptr [edx + esi*0x1], 0x2
        jz      L16
        mov     edx, dword ptr [ecx + 0x10]
        add     edx, edi
        lea     eax, [ecx + 0x54]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x8], edx
        mov     edx, dword ptr [g_007da718]
        mov     eax, ebx
        add     eax, dword ptr [edx]
        mov     dword ptr [ebp - 0x4], eax
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x8]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        fld     dword ptr [edx + 0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx + 0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx + 0x3c]
        fld     dword ptr [edx + 0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
L16:
        mov     eax, dword ptr [ecx + 0xa0]
        mov     edx, dword ptr [eax]
        inc     esi
        add     edi, 0xc
        add     ebx, 0x10
        cmp     esi, edx
        jl      L5f
        pop     edi
        pop     ebx
L2f:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
