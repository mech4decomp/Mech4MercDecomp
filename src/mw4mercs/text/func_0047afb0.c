/*
 * FUN_0047afb0 (428 B) — MLR PMesh transform/lighting (__thiscall, RET 0x4).
 * Transforms vertex positions by a matrix and computes a per-vertex
 * visibility/backface bitmask.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da68c;
extern int g_007da688;
extern int g_007da600;

__declspec(naked) void FUN_0047afb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        cmp     word ptr [edi+0x56], 0x0
        mov     ebx, dword ptr [edi+0x18]
        jnz     L_47afcd
        mov     eax, dword ptr [edi]
        call    dword ptr [eax+0x98]
L_47afcd:
        test    ebx, ebx
        mov     edx, dword ptr [edi+0x14]
        mov     ecx, dword ptr [g_007da68c]
        mov     eax, dword ptr [g_007da688]
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp-0x4], edx
        mov     edx, dword ptr [g_007da600]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp-0x14], esi
        mov     dword ptr [ebp-0x8], ecx
        mov     dword ptr [ebp-0xc], eax
        jle     L_47b153
        mov     dword ptr [ebp-0x18], ebx
L_47affe:
        mov     ecx, dword ptr [ebp-0xc]
        cmp     byte ptr [ecx], 0x0
        jz      L_47b127
        mov     dword ptr [ebp-0x10], esi
        mov     edx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [ebp-0x4]
        fld     dword ptr [eax]
        fld     dword ptr [eax+0x4]
        fld     dword ptr [eax+0x8]
        mov     eax, dword ptr [ebp-0x10]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch
        fadd    dword ptr [edx+0x3c]
        fld     dword ptr [edx+0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+0xc]
        fadd    dword ptr [edx+0x1c]
        fld     dword ptr [edx+0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+0x4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+0x8]
        fadd    dword ptr [edx+0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        mov     dword ptr [ebp-0x10], 0x0
        mov     edi, dword ptr [ebp-0x14]
        xor     ecx, ecx
        xor     edx, edx
        test    dword ptr [edi], 0x80000000
        setnz   cl
        sub     edx, ecx
        and     edx, 0x8
        xor     ebx, ebx
        test    dword ptr [edi+0x4], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x2
        or      edx, ebx
        xor     ebx, ebx
        test    dword ptr [edi+0x8], 0x80000000
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x10
        or      edx, ebx
        fld     dword ptr [edi+0xc]
        xor     ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 0x1
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x4
        or      edx, ebx
        xor     ebx, ebx
        fcom    dword ptr [edi+0x4]
        fnstsw  ax
        test    ah, 0x1
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x1
        or      edx, ebx
        xor     ebx, ebx
        fcomp   dword ptr [edi+0x8]
        fnstsw  ax
        test    ah, 0x41
        setnz   cl
        sub     ebx, ecx
        and     ebx, 0x20
        or      edx, ebx
        mov     dword ptr [ebp-0x10], edx
        mov     edx, dword ptr [ebp-0x10]
        mov     eax, dword ptr [ebp-0x8]
        mov     dword ptr [eax], edx
L_47b127:
        mov     ebx, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp-0x8]
        mov     ecx, dword ptr [ebp-0xc]
        mov     eax, dword ptr [ebp-0x18]
        add     ebx, 0xc
        add     esi, 0x10
        add     edx, 0x4
        inc     ecx
        dec     eax
        mov     dword ptr [ebp-0x4], ebx
        mov     dword ptr [ebp-0x14], esi
        mov     dword ptr [ebp-0x8], edx
        mov     dword ptr [ebp-0xc], ecx
        mov     dword ptr [ebp-0x18], eax
        jnz     L_47affe
L_47b153:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
