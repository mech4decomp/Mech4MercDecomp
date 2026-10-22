/*
 * FUN_006a0a8f (extent 0x6a0a8f-0x6a0d65) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00799c90;
extern float  g_00799c94;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f268c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005c6e40(void);
extern void __cdecl FUN_005dd1d0(void);
extern void __cdecl FUN_0065ae10(void);
extern void __cdecl FUN_006a0db0(void);
extern void __cdecl FUN_006a0ec0(void);
extern void __cdecl FUN_006a1140(void);
extern void __cdecl FUN_006a1860(void);
extern void __cdecl FUN_006a21e0(void);

__declspec(naked) void FUN_006a0a8f(void)
{
    __asm {
        nop    
        cmp    byte ptr [ecx + 0x24], 1
        push    esi
        push    edi
        je    L_0af0
        mov    edi, dword ptr [esp + 0xc]
        lea    esi, [ecx + 0x14]
        cmp    edi, esi
        je    L_0af0
        mov    eax, dword ptr [esi]
        mov    ecx, eax
        and    ecx, 1
        cmp    cl, 1
        jne    L_0ae7
        mov    edx, eax
        and    edx, 2
        cmp    dl, 2
        jne    L_0ad7
        and    eax, 0xfffffffc
        mov    dword ptr [esi], eax
        je    L_0ae7
        mov    edx, dword ptr [eax]
        push    3
        mov    ecx, eax
        call    dword ptr [edx + 0xc]
        mov    eax, dword ptr [edi]
        mov    dword ptr [esi], eax
        and    eax, 0xfffffffe
        mov    dword ptr [edi], eax
        pop    edi
        pop    esi
        ret    4
L_0ad7:
        and    eax, 0xfffffffc
        mov    dword ptr [esi], eax
        je    L_0ae7
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx + 0xc]
L_0ae7:
        mov    eax, dword ptr [edi]
        mov    dword ptr [esi], eax
        and    eax, 0xfffffffe
        mov    dword ptr [edi], eax
L_0af0:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x14]
        test    eax, 0xfffffffc
        je    L_0b4e
        mov    ecx, eax
        and    eax, 1
        cmp    al, 1
        jne    L_0b47
        mov    edx, ecx
        and    edx, 2
        cmp    dl, 2
        jne    L_0b38
        and    ecx, 0xfffffffc
        mov    dword ptr [esi + 0x14], ecx
        je    L_0b47
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax + 0xc]
        mov    dword ptr [esi + 0x14], 0
        pop    esi
        ret    
L_0b38:
        and    ecx, 0xfffffffc
        mov    dword ptr [esi + 0x14], ecx
        je    L_0b47
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0xc]
L_0b47:
        mov    dword ptr [esi + 0x14], 0
L_0b4e:
        pop    esi
        ret    
        sub    esp, 0x1c
        push    esi
        mov    esi, ecx
        cmp    byte ptr [esi + 0x24], 1
        je    L_0d60
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x2c]
        cmp    al, 1
        je    L_0d60
        push    ebx
        mov    ebx, dword ptr [esi + 4]
        push    edi
        push    1
        mov    ecx, ebx
        call    FUN_005dd1d0
        mov    edi, dword ptr [esi + 0x14]
        test    edi, 0xfffffffc
        je    L_0d50
        and    edi, 0xfffffffc
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        cmp    al, 1
        jne    L_0c6a
        mov    ecx, dword ptr [esi + 0x14]
        mov    eax, ecx
        and    eax, 1
        cmp    al, 1
        jne    L_0bd2
        mov    edx, ecx
        and    edx, 2
        cmp    dl, 2
        jne    L_0bc3
        and    ecx, 0xfffffffc
        mov    dword ptr [esi + 0x14], ecx
        je    L_0bd2
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax + 0xc]
        jmp    L_0bd2
L_0bc3:
        and    ecx, 0xfffffffc
        mov    dword ptr [esi + 0x14], ecx
        je    L_0bd2
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0xc]
L_0bd2:
        mov    ecx, esi
        mov    dword ptr [esi + 0x14], 0
        call    FUN_006a0db0
        mov    edi, eax
        test    edi, edi
        je    L_0d50
        mov    ebx, dword ptr [esi + 4]
        mov    eax, dword ptr [ebx + 0x170]
        mov    ecx, dword ptr [edi + 0x30]
        cmp    ecx, dword ptr [eax + 0x30]
        jne    L_0c1a
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x2c]
        xor    ecx, 0x85739531
        mov    edi, dword ptr [ecx + 0x384]
L_0c1a:
        test    edi, edi
        je    L_0d50
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_0d50
        mov    edx, dword ptr [esi + 0x10]
        push    ebp
        mov    ebp, dword ptr [esi]
        push    1
        push    edx
        push    edi
        push    ebx
        lea    eax, [esp + 0x20]
        push    0x1388
        push    eax
        call    FUN_0065ae10
        add    esp, 0x18
        push    eax
        mov    ecx, esi
        call    dword ptr [ebp + 0xc]
        lea    ecx, [esp + 0x10]
        call    FUN_006a21e0
        pop    ebp
        jmp    L_0d50
L_0c6a:
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x1c]
        cmp    al, 1
        jne    L_0d50
        test    dword ptr [ebx + 0x4e0], 0xfffffffc
        je    L_0d49
        lea    edi, [ebx + 0x1c8]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_0d3e
        mov    ecx, dword ptr [g_00799c90]
        push    ecx
        mov    ecx, ebx
        call    FUN_005c6e40
        cmp    al, 1
        je    L_0d3e
        mov    ecx, edi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        mov    ecx, dword ptr [ebx + 0x170]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x24], eax
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        fsubrp st(1), st(0)
        mov    dword ptr [esp + 0x20], edx
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x14], edx
        fld    dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x20]
        mov    dword ptr [esp + 0x18], eax
        fld    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x24]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00799c94]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jne    L_0d49
L_0d3e:
        push    0
        mov    ecx, ebx
        call    FUN_005c1720
        jmp    L_0d50
L_0d49:
        mov    ecx, esi
        call    FUN_006a1140
L_0d50:
        mov    ecx, esi
        call    FUN_006a0ec0
        mov    ecx, esi
        call    FUN_006a1860
        pop    edi
        pop    ebx
L_0d60:
        pop    esi
        add    esp, 0x1c
        ret    
    }
}
