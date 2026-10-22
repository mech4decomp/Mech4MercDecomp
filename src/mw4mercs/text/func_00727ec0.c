/*
 * FUN_00727ec0 (extent 0x727ec0-0x7283c2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076dd60;
extern float  g_0076f5d8;
extern float  g_00770168;
extern float  g_007a5640;
extern float  g_007b7118;
extern int    g_008816c8;
extern int    g_008816cc;
extern float  g_008816d8;
extern char   g_008816dc;
extern char   g_008816e4;
extern char   g_008816e5;
extern char   g_008816e7;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006fbc60(void);

__declspec(naked) void FUN_00727ec0(void)
{
    __asm {
        mov    dl, byte ptr [esp + 0xc]
        cmp    dl, 0x20
        mov    ecx, dword ptr [g_008816cc]
        push    esi
        push    edi
        jb    L_7ee7
        mov    eax, dword ptr [esp + 0x14]
        mov    edi, dword ptr [ecx + 0x114]
        mov    esi, eax
        and    esi, 0xff
        cmp    esi, edi
        jl    L_7ef1
L_7ee7:
        mov    dl, 0x40
        mov    byte ptr [esp + 0x14], dl
        mov    eax, dword ptr [esp + 0x14]
L_7ef1:
        push    ebx
        mov    bl, byte ptr [g_008816dc]
        test    bl, bl
        pop    ebx
        je    L_801c
        fld    dword ptr [g_008816d8]
        mov    edi, dword ptr [esp + 0x10]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x14]
        and    esi, 0x7fffff
        sub    esi, 0x400000
        cmp    dl, 0x20
        mov    dword ptr [edi], esi
        jne    L_7f8f
        fild    dword ptr [ecx + 0x124]
        mov    al, byte ptr [g_008816e4]
        test    al, al
        fmul    dword ptr [g_007b7118]
        je    L_7f6a
        fmul    dword ptr [g_0076d070]
        mov    ecx, dword ptr [esp + 0xc]
        pop    edi
        pop    esi
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0xc]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        mov    dword ptr [ecx], eax
        ret    0xc
L_7f6a:
        mov    eax, dword ptr [esp + 0xc]
        fadd    dword ptr [g_0076dd60]
        pop    edi
        pop    esi
        fstp    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        mov    dword ptr [eax], edx
        ret    0xc
L_7f8f:
        mov    dl, byte ptr [g_008816e4]
        test    dl, dl
        je    L_7fd8
        and    eax, 0xff
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx + 0x1f8]
        mov    eax, dword ptr [esp + 0xc]
        inc    edx
        mov    dword ptr [esp + 0x14], edx
        fild    dword ptr [esp + 0x14]
        fmul    dword ptr [g_007b7118]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x14]
        and    ecx, 0x7fffff
        sub    ecx, 0x400000
        mov    dword ptr [eax], ecx
        jmp    L_8004
L_7fd8:
        fild    dword ptr [ecx + 0x124]
        mov    eax, dword ptr [esp + 0xc]
        fmul    dword ptr [g_007b7118]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        mov    dword ptr [eax], edx
L_8004:
        mov    cl, byte ptr [g_008816e5]
        test    cl, cl
        je    L_8093
        mov    ecx, dword ptr [eax]
        inc    ecx
        pop    edi
        mov    dword ptr [eax], ecx
        pop    esi
        ret    0xc
L_801c:
        cmp    dl, 0x20
        mov    esi, dword ptr [ecx + 0x128]
        mov    edi, dword ptr [esp + 0x10]
        mov    dword ptr [edi], esi
        jne    L_805a
        mov    al, byte ptr [g_008816e4]
        test    al, al
        je    L_8049
        mov    eax, dword ptr [ecx + 0x124]
        mov    ecx, dword ptr [esp + 0xc]
        sar    eax, 1
        pop    edi
        mov    dword ptr [ecx], eax
        pop    esi
        ret    0xc
L_8049:
        mov    edx, dword ptr [ecx + 0x124]
        mov    eax, dword ptr [esp + 0xc]
        pop    edi
        mov    dword ptr [eax], edx
        pop    esi
        ret    0xc
L_805a:
        mov    dl, byte ptr [g_008816e4]
        test    dl, dl
        je    L_807b
        and    eax, 0xff
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx + 0x1f8]
        mov    eax, dword ptr [esp + 0xc]
        inc    edx
        mov    dword ptr [eax], edx
        jmp    L_8087
L_807b:
        mov    ecx, dword ptr [ecx + 0x124]
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [eax], ecx
L_8087:
        mov    cl, byte ptr [g_008816e5]
        test    cl, cl
        je    L_8093
        inc    dword ptr [eax]
L_8093:
        pop    edi
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x200
        mov    al, byte ptr [g_008816e7]
        test    al, al
        push    ebx
        push    esi
        push    edi
        jne    L_83b7
        mov    esi, dword ptr [ebp + 8]
        cmp    byte ptr [esi], 0x2f
        jne    L_83b7
        mov    al, byte ptr [esi + 1]
        cmp    al, 0x2f
        lea    edi, [esi + 1]
        jne    L_80dd
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_80dd:
        mov    ebx, dword ptr [g_0076b2b0]
        push    6
        push    edi
        push    0x7a5748
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_8102
        pop    edi
        pop    esi
        mov    eax, 0xf
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_8102:
        push    5
        push    edi
        push    0x7a5740
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_8121
        pop    edi
        pop    esi
        mov    eax, 7
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_8121:
        push    0xd
        push    edi
        push    0x7a5730
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_8140
        pop    edi
        pop    esi
        mov    eax, 0xf
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_8140:
        push    7
        push    edi
        push    0x7a5728
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_815f
        pop    edi
        pop    esi
        mov    eax, 9
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_815f:
        push    5
        push    edi
        push    0x7a5720
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_829d
        mov    edi, 6
        mov    al, byte ptr [esi + edi]
        add    esi, edi
        xor    cl, cl
        cmp    al, 0x3c
        jne    L_818c
        mov    cl, 1
        inc    esi
        mov    edi, 7
L_818c:
        mov    al, byte ptr [esi]
        xor    bl, bl
        cmp    al, 0x2d
        jne    L_8198
        inc    esi
        mov    bl, 1
        inc    edi
L_8198:
        xor    eax, eax
        mov    al, byte ptr [esi]
        sub    eax, 0x30
        mov    dword ptr [ebp + 8], eax
        fild    dword ptr [ebp + 8]
        xor    eax, eax
        mov    al, byte ptr [esi + 1]
        inc    esi
        fstp    dword ptr [g_008816d8]
        add    eax, -0x30
        test    eax, eax
        mov    dword ptr [ebp + 8], eax
        jl    L_81d7
        cmp    eax, 9
        jg    L_81d7
        fld    dword ptr [g_008816d8]
        inc    esi
        fmul    dword ptr [g_00770168]
        inc    edi
        fiadd    dword ptr [ebp + 8]
        fstp    dword ptr [g_008816d8]
L_81d7:
        test    cl, cl
        je    L_81f5
        cmp    byte ptr [esi], 0x3e
        je    L_81f4
        push    0x7a56f4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_81f5
        int 3    
        jmp    L_81f5
L_81f4:
        inc    edi
L_81f5:
        mov    eax, dword ptr [g_008816cc]
        test    eax, eax
        jne    L_8215
        push    0x7a56c0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8210
        int 3    
L_8210:
        mov    eax, dword ptr [g_008816cc]
L_8215:
        test    bl, bl
        mov    ecx, dword ptr [eax + 0x75c]
        je    L_8251
        test    ecx, ecx
        jne    L_8243
        fild    dword ptr [eax + 0x128]
        fld    st(0)
        fmul    dword ptr [g_007a5640]
        fdiv    dword ptr [g_008816d8]
        fdivr st(0), st(1)
        fstp    dword ptr [g_008816d8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_8265
L_8243:
        fld    dword ptr [g_008816d8]
        fmul    dword ptr [g_0076f5d8]
        jmp    L_825f
L_8251:
        fild    dword ptr [eax + 0x128]
        test    ecx, ecx
        fmul    dword ptr [g_008816d8]
L_825f:
        fstp    dword ptr [g_008816d8]
L_8265:
        fild    dword ptr [eax + 0x128]
        mov    byte ptr [g_008816dc], 1
        fdivr    dword ptr [g_008816d8]
        fst    dword ptr [g_007b7118]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x40
        je    L_8292
        mov    byte ptr [g_008816dc], 0
L_8292:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_829d:
        push    5
        push    edi
        push    0x7a56b8
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_83b7
        mov    al, byte ptr [esi + 6]
        add    esi, 6
        cmp    al, 0x3c
        lea    edi, [ebp - 0x100]
        je    L_82d6
        push    0x7a5698
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_82d7
        int 3    
        jmp    L_82d7
L_82d6:
        inc    esi
L_82d7:
        mov    al, byte ptr [esi]
        test    al, al
        je    L_82eb
L_82dd:
        cmp    al, 0x3e
        je    L_82eb
        inc    esi
        mov    byte ptr [edi], al
        mov    al, byte ptr [esi]
        inc    edi
        test    al, al
        jne    L_82dd
L_82eb:
        cmp    byte ptr [esi], 0x3e
        mov    byte ptr [edi], 0
        je    L_8305
        push    0x7a567c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8305
        int 3    
L_8305:
        lea    ecx, [ebp - 0x100]
        push    ecx
        lea    edx, [ebp - 0x200]
        push    edx
        call    FUN_006fbc60
        mov    esi, dword ptr [g_008816c8]
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [ebp - 0x200]
        repne scasb
        not    ecx
        dec    ecx
        test    esi, esi
        mov    dword ptr [ebp + 8], ecx
        je    L_838a
L_8335:
        mov    eax, dword ptr [ebp + 8]
        push    eax
        lea    ecx, [ebp - 0x200]
        push    ecx
        lea    ebx, [esi + 0xc]
        push    ebx
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        test    eax, eax
        je    L_8380
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [ebp - 0x100]
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        lea    edx, [ebp - 0x100]
        push    edx
        push    ebx
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        test    eax, eax
        je    L_8380
        mov    esi, dword ptr [esi + 4]
        test    esi, esi
        jne    L_8335
        jmp    L_838a
L_8380:
        test    esi, esi
        mov    dword ptr [g_008816cc], esi
        jne    L_839c
L_838a:
        push    0x7a5658
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_839c
        int 3    
L_839c:
        or    ecx, 0xffffffff
        xor    eax, eax
        lea    edi, [esi + 0xc]
        repne scasb
        not    ecx
        dec    ecx
        pop    edi
        mov    eax, ecx
        pop    esi
        add    eax, 7
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_83b7:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
