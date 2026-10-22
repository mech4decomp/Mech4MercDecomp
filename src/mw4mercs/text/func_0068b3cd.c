/*
 * FUN_0068b3cd (extent 0x68b3cd-0x68b50f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00786350;
extern void __cdecl FUN_006b0790(void);

__declspec(naked) void FUN_0068b3cd(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 0x18
        push    ebx
        mov    ebx, dword ptr [esp + 0x20]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_006b0790
        mov    al, byte ptr [esi + 0x30]
        test    al, al
        jne    L_b4f5
        push    ebp
        push    edi
        mov    edi, dword ptr [ebx + 0x35c]
        mov    eax, dword ptr [edi + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        lea    ecx, [edi + 0x78]
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esp + 0x18], eax
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x40]
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ebp, eax
        mov    eax, dword ptr [esi]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x2c]
        fld    dword ptr [eax]
        fsub    dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x24], eax
        fld    dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x18]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edi + 0x42c]
        fmul    dword ptr [ebp + 0x2bc]
        fld    st(1)
        fcomp    qword ptr [g_00786350]
        fnstsw  ax
        test    ah, 1
        jne    L_b489
        fld    st(0)
        fmul st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        je    L_b4b9
        jmp    L_b48d
L_b489:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_b48d:
        mov    eax, dword ptr [esi + 0x40]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        lea    edi, [eax + 1]
        call    dword ptr [edx + 0x30]
        cmp    eax, edi
        jle    L_b4a3
        mov    dword ptr [esi + 0x40], edi
        jmp    L_b4b9
L_b4a3:
        mov    ecx, dword ptr [esp + 0x34]
        mov    edx, dword ptr [esp + 0x30]
        mov    eax, dword ptr [ebx]
        push    0
        push    ecx
        push    edx
        mov    ecx, ebx
        call    dword ptr [eax + 0x15c]
L_b4b9:
        mov    ecx, dword ptr [esi + 0x40]
        mov    eax, dword ptr [esi]
        mov    edi, dword ptr [ebx]
        push    0
        inc    ecx
        push    ecx
        lea    edx, [esp + 0x24]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x2c]
        push    eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    eax, dword ptr [esi + 0x40]
        mov    edx, dword ptr [esi]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x2c]
        push    eax
        mov    ecx, ebx
        call    dword ptr [edi + 0x1d0]
        pop    edi
        pop    ebp
L_b4f5:
        pop    esi
        pop    ebx
        add    esp, 0x18
        ret    0xc
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx]
        lea    eax, [eax + eax*2]
        lea    eax, [ecx + eax*4]
        ret    4
    }
}
