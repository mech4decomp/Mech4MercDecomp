/*
 * FUN_004bd530 (712 B) — MLR object method (__thiscall). Performs a 3x3
 * matrix multiply (FPU) into [ebx+0x80] (or dword copy if [ebx+0x18]&1),
 * then a second matrix multiply from [ebx+0x80] into [ebx+0xb0]/[ebx+0xf0],
 * then iterates a sub-object array calling virtual method (vtable+0x1c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004bd530(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        test    byte ptr [ebx + 0x18], 1
        push    esi
        push    edi
        jnz     L_bd6e1
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, 0x80
        mov     dword ptr [ebp - 8], eax
        lea     ecx, [ebx + 0x50]
        lea     eax, [ebx + 0x80]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 4], eax
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 8]
        mov     eax, dword ptr [ebp - 4]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        jmp     L_bd6f7
L_bd6e1:
        mov     esi, dword ptr [ebx + 0x10]
        lea     edi, [ebx + 0x80]
        add     esi, 0x80
        mov     ecx, 0xc
        rep movsd
L_bd6f7:
        lea     eax, [ebx + 0x80]
        lea     edi, [ebx + 0xb0]
        lea     ecx, [ebx + 0xf0]
        mov     dword ptr [ebp - 4], eax
        mov     dword ptr [ebp - 8], edi
        mov     dword ptr [ebp - 0xc], ecx
        mov     edx, dword ptr [ebp - 4]
        push    esi
        mov     esi, dword ptr [ebp - 8]
        mov     eax, dword ptr [ebp - 0xc]
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fadd    dword ptr [edx + 0xc]
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x2c]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fadd    dword ptr [edx + 0x2c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        pop     esi
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        mov     edx, dword ptr [edi + 0x3c]
        xor     eax, eax
        mov     ax, word ptr [ebx + 0x150]
        mov     dword ptr [ecx + 0x3c], edx
        mov     edi, dword ptr [ebx + 0x148]
        mov     esi, eax
        and     esi, 0xffff
        cmp     esi, edi
        jnc     L_bd7b8
        mov     eax, dword ptr [ebx + 0x144]
        mov     ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        jz      L_bd7f1
        call    dword ptr [ecx + 0x1c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_bd7b8:
        test    al, 0xf0
        jz      L_bd7f1
        mov     eax, esi
        and     eax, 0xf
        cmp     eax, edi
        jnc     L_bd7d7
        mov     ecx, dword ptr [ebx + 0x144]
        mov     eax, dword ptr [ecx + eax*4]
        test    eax, eax
        jz      L_bd7d7
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
L_bd7d7:
        shr     esi, 4
        and     esi, 0xf
        cmp     esi, edi
        jnc     L_bd7f1
        mov     edx, dword ptr [ebx + 0x144]
        mov     ecx, dword ptr [edx + esi*4]
        test    ecx, ecx
        jz      L_bd7f1
        call    dword ptr [ecx + 0x1c]
L_bd7f1:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
