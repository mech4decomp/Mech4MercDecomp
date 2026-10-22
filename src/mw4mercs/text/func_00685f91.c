/*
 * FUN_00685f91 (extent 0x685f91-0x6863af) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00798bd8;
extern float  g_00798be0;
extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005cbb20(void);
extern void __cdecl FUN_005d8270(void);
extern void __cdecl FUN_005d9500(void);
extern void __cdecl FUN_00685730(void);
extern void __cdecl FUN_00685a90(void);
extern void __cdecl FUN_00685b20(void);
extern void __cdecl FUN_00685c10(void);
extern void __cdecl FUN_00686140(void);
extern void __cdecl FUN_00687e90(void);
extern void __cdecl FUN_0068f370(void);
extern void __cdecl FUN_0068f730(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00685f91(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x28]
        mov    edx, dword ptr [edi]
        mov    eax, dword ptr [edi + 4]
        push    0
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_00687e90
        mov    dword ptr [edi + 4], eax
        mov    al, byte ptr [esi + 0x3c]
        add    esp, 0x14
        test    al, al
        je    L_612c
        mov    ebp, dword ptr [esi + 0x54]
        mov    ebx, dword ptr [esi + 0x60]
        cmp    ebx, ebp
        mov    dword ptr [esp + 0x1c], ebp
        jne    L_5feb
        mov    eax, dword ptr [esi + 0x64]
        test    eax, eax
        je    L_612c
L_5feb:
        mov    eax, dword ptr [g_007f2464]
        push    eax
        call    FUN_006f4950
        mov    esi, dword ptr [esi + 0x64]
        test    esi, esi
        je    L_6005
        push    edi
        mov    ecx, esi
        call    FUN_0068f730
L_6005:
        cmp    ebx, ebp
        mov    dword ptr [esp + 0x14], ebx
        je    L_6127
L_6011:
        mov    esi, dword ptr [edi + 4]
        cmp    esi, dword ptr [edi + 8]
        je    L_6038
        test    esi, esi
        je    L_602d
        mov    ecx, dword ptr [ebx]
        mov    edx, dword ptr [ebx + 4]
        mov    eax, dword ptr [ebx + 8]
        mov    dword ptr [esi], ecx
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], eax
L_602d:
        add    esi, 0xc
        mov    dword ptr [edi + 4], esi
        jmp    L_6118
L_6038:
        mov    ebp, dword ptr [edi]
        mov    ecx, esi
        sub    ecx, ebp
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        cmp    edx, 1
        mov    dword ptr [esp + 0x10], 1
        mov    dword ptr [esp + 0x18], edx
        lea    eax, [esp + 0x10]
        jb    L_6067
        lea    eax, [esp + 0x18]
L_6067:
        mov    eax, dword ptr [eax]
        add    eax, edx
        mov    dword ptr [esp + 0x18], eax
        je    L_6086
        lea    edx, [eax + eax*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x10], eax
        jmp    L_608e
L_6086:
        mov    dword ptr [esp + 0x10], 0
L_608e:
        cmp    ebp, esi
        mov    edi, dword ptr [esp + 0x10]
        je    L_60b0
        mov    ebx, ebp
L_6098:
        push    ebx
        push    edi
        call    FUN_005cbb20
        add    ebx, 0xc
        add    esp, 8
        add    edi, 0xc
        cmp    ebx, esi
        jne    L_6098
        mov    ebx, dword ptr [esp + 0x14]
L_60b0:
        test    edi, edi
        je    L_60c4
        mov    eax, dword ptr [ebx]
        mov    ecx, dword ptr [ebx + 4]
        mov    edx, dword ptr [ebx + 8]
        mov    dword ptr [edi], eax
        mov    dword ptr [edi + 4], ecx
        mov    dword ptr [edi + 8], edx
L_60c4:
        add    edi, 0xc
        cmp    esi, esi
        mov    ebx, edi
        je    L_60e3
        mov    edi, esi
L_60cf:
        push    edi
        push    ebx
        call    FUN_005cbb20
        add    edi, 0xc
        add    esp, 8
        add    ebx, 0xc
        cmp    edi, esi
        jne    L_60cf
L_60e3:
        test    ebp, ebp
        mov    dword ptr [esp + 0x20], ebp
        je    L_60f4
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_60f4:
        mov    eax, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [esp + 0x1c]
        lea    ecx, [ecx + ecx*2]
        mov    dword ptr [eax], edx
        lea    edx, [edx + ecx*4]
        mov    dword ptr [eax + 4], ebx
        mov    ebx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 8], edx
        mov    edi, eax
L_6118:
        add    ebx, 0x18
        cmp    ebx, ebp
        mov    dword ptr [esp + 0x14], ebx
        jne    L_6011
L_6127:
        call    FUN_006f49a0
L_612c:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
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
        sub    esp, 0x18
        push    ebx
        push    ebp
        mov    eax, 0xbf800000
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x40]
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x20], eax
        mov    eax, dword ptr [esp + 0x3c]
        xor    ebx, ebx
        mov    byte ptr [eax], bl
        cmp    dword ptr [esi + 0x68], 7
        push    edi
        mov    byte ptr [ecx], bl
        je    L_63a5
        mov    edi, dword ptr [esi + 0x38]
        cmp    edi, ebx
        je    L_6203
        cmp    byte ptr [edi + 0xc], bl
        je    L_62ad
        cmp    edi, ebx
        mov    ebp, dword ptr [edi + 0x14]
        mov    dword ptr [edi + 0x14], ebx
        mov    dword ptr [esi + 0x64], ebp
        je    L_61a0
        mov    ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_61a0:
        cmp    byte ptr [ebp + 0x24], bl
        mov    dword ptr [esi + 0x38], ebx
        jne    L_61e7
        mov    edx, dword ptr [esi + 0x60]
        mov    eax, dword ptr [edx + 0x14]
        cmp    eax, -1
        je    L_61bc
        mov    ecx, dword ptr [esi + 0x34]
        push    eax
        call    FUN_005d8270
L_61bc:
        cmp    ebp, ebx
        je    L_61d0
        mov    ecx, ebp
        call    FUN_0068f370
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_61d0:
        pop    edi
        mov    dword ptr [esi + 0x64], ebx
        mov    byte ptr [esi + 0x3c], bl
        mov    dword ptr [esi + 0x68], 7
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    0x1c
L_61e7:
        cmp    byte ptr [ebp + 0x26], bl
        je    L_6203
        cmp    ebp, ebx
        je    L_6200
        mov    ecx, ebp
        call    FUN_0068f370
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_6200:
        mov    dword ptr [esi + 0x64], ebx
L_6203:
        mov    ebp, dword ptr [esp + 0x3c]
        push    ebp
        mov    ecx, esi
        mov    dword ptr [esi + 0x68], 5
        call    FUN_00685730
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        call    FUN_00685b20
        mov    ecx, dword ptr [eax]
        mov    edi, dword ptr [esp + 0x2c]
        fld    dword ptr [edi]
        mov    dword ptr [esp + 0x10], ecx
        fsubr    dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax + 4]
        mov    ecx, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x14], edx
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x18], eax
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x24], ecx
        fsub    dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x14], 0
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x38]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [esp + 0x38]
        fmul    qword ptr [esp + 0x30]
        fnstsw  ax
        mov    al, byte ptr [esi + 0x40]
        fmul    qword ptr [g_00798be0]
        test    ah, 1
        cmp    al, bl
        je    L_62f3
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        mov    ecx, esi
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    byte ptr [esi + 0x40], bl
        call    FUN_00685a90
        test    al, al
        jne    L_62be
        pop    edi
        mov    dword ptr [esi + 0x68], 7
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    0x1c
L_62ad:
        pop    edi
        mov    dword ptr [esi + 0x68], 6
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    0x1c
L_62be:
        cmp    byte ptr [esi + 0x3c], bl
        je    L_63a5
        mov    edx, dword ptr [esp + 0x44]
        mov    eax, dword ptr [esp + 0x40]
        mov    ecx, dword ptr [esp + 0x38]
        push    edx
        mov    edx, dword ptr [esp + 0x38]
        push    eax
        mov    eax, dword ptr [esp + 0x38]
        push    ebp
        push    ecx
        push    edx
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00686140
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    0x1c
L_62f3:
        fld    st(1)
        mov    bl, 1
        fcomp    qword ptr [g_00798bd8]
        fnstsw  ax
        test    ah, bl
        jne    L_6328
        fld    st(0)
        fmul st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, bl
        jne    L_632c
        lea    ecx, [esp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00685c10
        test    al, al
        je    L_632f
        jmp    L_632c
L_6328:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_632c:
        mov    byte ptr [esi + 0x40], bl
L_632f:
        lea    edx, [esp + 0x1c]
        push    edx
        mov    ecx, esi
        call    FUN_00685b20
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esi + 0x18], ecx
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0x1c], edx
        mov    dword ptr [esi + 0x20], eax
        call    FUN_00685b20
        mov    edx, dword ptr [eax]
        mov    dword ptr [esp + 0x10], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x14], ecx
        mov    edx, dword ptr [eax + 8]
        push    ebp
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x18], 0
        call    FUN_00685730
        mov    eax, dword ptr [esi + 0x60]
        mov    esi, dword ptr [esi + 0x54]
        cmp    eax, esi
        mov    ecx, eax
        je    L_638b
        add    ecx, 0x18
L_638b:
        mov    eax, dword ptr [eax + 0xc]
        mov    edx, dword ptr [esp + 0x40]
        and    al, bl
        cmp    ecx, esi
        mov    byte ptr [edx], al
        je    L_63a5
        test    byte ptr [ecx + 0xc], bl
        je    L_63a5
        mov    eax, dword ptr [esp + 0x44]
        mov    byte ptr [eax], bl
L_63a5:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    0x1c
    }
}
