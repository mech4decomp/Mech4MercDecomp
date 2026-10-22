/*
 * FUN_0047ffc0 (209 B) — __thiscall matrix transform: transforms a
 * vertex array ([ECX+0x14], stride 0xc) by a 4x4 matrix (stack arg at
 * [EBP+8]) into a destination array ([0x007da68c] + i*0x10), for
 * [ECX+0x18] vertices. MLRIndexedPrimitiveBase/PMesh helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_007da68c;

__declspec(naked) void FUN_0047ffc0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [ecx+0x18]
        test    ebx, ebx
        jle     L_8008a
        push    esi
        push    edi
        xor     edi, edi
        xor     esi, esi
    L_7ffd8:
        mov     eax, dword ptr [ecx+0x14]
        add     eax, esi
        mov     dword ptr [ebp-8], eax
        mov     eax, dword ptr [g_007da68c]
        mov     edx, edi
        add     edx, dword ptr [eax]
        mov     dword ptr [ebp-4], edx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-8]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-4]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fstp    dword ptr [eax+4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+8]
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
        add     esi, 0xc
        add     edi, 0x10
        dec     ebx
        jnz     L_7ffd8
        pop     edi
        pop     esi
    L_8008a:
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
