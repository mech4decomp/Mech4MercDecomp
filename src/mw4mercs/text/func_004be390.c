/*
 * FUN_004be390 (594 B) — MLR object method (__thiscall). Performs a 3x3
 * matrix multiply (FPU) into [ebx+0x80] (or dword copy if [ebx+0x18]&1),
 * then calls FUN_00417d80([ebx+0x80],[ebx+0xb0],[ebx+0xf0]), then iterates
 * a sub-object array calling virtual method (vtable+0x1c) on selected
 * entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00417d80(void);

__declspec(naked) void FUN_004be390(void)
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
        jnz     L_be541
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
        jmp     L_be557
L_be541:
        mov     esi, dword ptr [ebx + 0x10]
        lea     edi, [ebx + 0x80]
        add     esi, 0x80
        mov     ecx, 0xc
        rep movsd
L_be557:
        lea     eax, [ebx + 0x80]
        push    eax
        lea     edx, [ebx + 0xb0]
        push    edx
        lea     ecx, [ebx + 0xf0]
        call    FUN_00417d80
        mov     edi, dword ptr [ebx + 0x148]
        xor     eax, eax
        mov     ax, word ptr [ebx + 0x150]
        mov     esi, eax
        and     esi, 0xffff
        cmp     esi, edi
        jnc     L_be5a2
        mov     eax, dword ptr [ebx + 0x144]
        mov     ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        jz      L_be5db
        call    dword ptr [ecx + 0x1c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_be5a2:
        test    al, 0xf0
        jz      L_be5db
        mov     eax, esi
        and     eax, 0xf
        cmp     eax, edi
        jnc     L_be5c1
        mov     ecx, dword ptr [ebx + 0x144]
        mov     eax, dword ptr [ecx + eax*4]
        test    eax, eax
        jz      L_be5c1
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
L_be5c1:
        shr     esi, 4
        and     esi, 0xf
        cmp     esi, edi
        jnc     L_be5db
        mov     edx, dword ptr [ebx + 0x144]
        mov     ecx, dword ptr [edx + esi*4]
        test    ecx, ecx
        jz      L_be5db
        call    dword ptr [ecx + 0x1c]
L_be5db:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
