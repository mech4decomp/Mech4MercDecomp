/*
 * FUN_00486f70 (317 B) - MLR strided matrix-vector transform (__thiscall).
 * Transforms a strided batch of 3-vectors by a 4x4 matrix, writing 4-float
 * results into the global vertex pool.
 *
 * CFLAGS: /O1
 */

extern int g_007da718;

__declspec(naked) void FUN_00486f70(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        mov     eax, dword ptr [ebp + 0x8]
        mov     edx, ecx
        xor     ecx, ecx
        push    ebx
        xor     ebx, ebx
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0xc], ecx
        jle     L_4870a6
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        push    edi
        lea     edi, [esi + esi*0x2]
        shl     edi, 0x2
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x1c], edi
L_486f9f:
        mov     eax, dword ptr [edx + 0x18]
        test    byte ptr [eax + ecx*0x1], 0x2
        jz      L_48708b
        lea     eax, [ebx + esi*0x1]
        cmp     ebx, eax
        jge     L_48708b
        mov     edi, dword ptr [ebp - 0x4]
        mov     esi, ebx
        lea     ecx, [edx + 0x54]
        shl     esi, 0x4
        sub     eax, ebx
        mov     dword ptr [ebp - 0x18], ecx
        mov     ecx, eax
        jmp     L_486fce
L_486fcb:
        mov     edx, dword ptr [ebp - 0x8]
L_486fce:
        mov     edx, dword ptr [edx + 0x10]
        add     edx, edi
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [g_007da718]
        mov     eax, esi
        add     eax, dword ptr [edx]
        mov     dword ptr [ebp - 0x10], eax
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x14]
        fld     dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x10]
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
        add     edi, 0xc
        add     esi, 0x10
        dec     ecx
        jnz     L_486fcb
        mov     esi, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ebp - 0x1c]
L_48708b:
        mov     eax, dword ptr [ebp - 0x4]
        add     eax, edi
        inc     ecx
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ebp + 0x8]
        add     ebx, esi
        cmp     ecx, eax
        mov     dword ptr [ebp - 0xc], ecx
        jl      L_486f9f
        pop     edi
        pop     esi
L_4870a6:
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
