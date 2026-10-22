/*
 * FUN_004b49cb (extent 0x4b49cb-0x4b4d2b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007da9e8;
extern int    g_007daa00;
extern int    g_007daa04;
extern float  g_007daac8;
extern int    g_007daadc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00487e30(void);
extern void __cdecl FUN_004b32e0(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_004b49cb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        xor    ebp, ebp
        test    eax, eax
        push    edi
        je    L_4aa8
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        fld    dword ptr [ecx + 0x8c]
        mov    eax, dword ptr [eax + 0xac]
        fxch    st(1)
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [ecx + 0x9c]
        fsub st(0), st(1)
        fxch    st(1)
        mov    dword ptr [esp + 0x1c], eax
        mov    eax, dword ptr [ecx + 0xac]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x24], edx
        fsub    dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x28], eax
        fld    dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x28]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fadd    dword ptr [g_007daac8]
        fstp    dword ptr [esp + 0x30]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x30]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_4a66
        mov    dword ptr [esp + 0x30], ebp
L_4a66:
        mov    edi, dword ptr [ecx + 0x178]
        xor    esi, esi
        test    edi, edi
        jbe    L_4aa8
        mov    ebx, dword ptr [ecx + 0x17c]
        xor    edx, edx
L_4a7a:
        fld    dword ptr [ebx + edx*8]
        fcomp    dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 0x41
        je    L_4a97
        fld    dword ptr [ebx + edx*8 + 4]
        fcomp    dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 1
        je    L_4aa6
L_4a97:
        inc    esi
        mov    edx, esi
        and    edx, 0xffff
        cmp    edx, edi
        jb    L_4a7a
        jmp    L_4aa8
L_4aa6:
        mov    ebp, esi
L_4aa8:
        lea    edx, [esp + 0x10]
        push    edx
        lea    eax, [esp + 0x34]
        push    eax
        push    ebp
        call    FUN_004b32e0
        mov    eax, dword ptr [esp + 0x30]
        pop    edi
        mov    ecx, eax
        add    eax, 0x10
        dec    word ptr [eax]
        cmp    word ptr [eax], 0
        pop    esi
        pop    ebp
        pop    ebx
        jne    L_4ad8
        test    ecx, ecx
        je    L_4ad8
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_4ad8:
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 0x1c
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
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ecx, dword ptr [ebp + 0x178]
        push    esi
        push    edi
        xor    edi, edi
        test    ecx, ecx
        mov    dword ptr [esp + 0x18], ebp
        jle    L_4b62
        mov    eax, dword ptr [ebp + 0x174]
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], ecx
L_4b17:
        mov    ecx, dword ptr [eax]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + 0x1c]
        xor    esi, esi
        test    ebx, ebx
        jle    L_4b50
        mov    ebp, ecx
L_4b26:
        push    esi
        mov    ecx, ebp
        call    FUN_00487e30
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x28]
        add    edi, dword ptr [esp + 0x1c]
        inc    esi
        cmp    esi, ebx
        jl    L_4b26
        mov    eax, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [esp + 0x18]
L_4b50:
        mov    ecx, dword ptr [esp + 0x14]
        add    eax, 4
        dec    ecx
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], ecx
        jne    L_4b17
L_4b62:
        mov    esi, dword ptr [esp + 0x2c]
        mov    ebx, dword ptr [esi + 4]
        cmp    edi, ebx
        je    L_4c07
        test    edi, edi
        jbe    L_4bf3
        lea    edx, [edi + edi*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4b97
        lea    ecx, [edi - 1]
        mov    dword ptr [esp + 0x24], ecx
        mov    ecx, eax
        mov    dword ptr [esp + 0x10], ecx
        jmp    L_4ba3
L_4b97:
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
L_4ba3:
        mov    edx, dword ptr [esi]
        test    edx, edx
        je    L_4bef
        cmp    edi, ebx
        mov    eax, edi
        jb    L_4bb1
        mov    eax, ebx
L_4bb1:
        mov    ebx, eax
        dec    eax
        test    ebx, ebx
        je    L_4be0
        lea    esi, [eax + eax*2]
        mov    ebp, edx
        lea    esi, [ecx + esi*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_4bc5:
        lea    edx, [esi + ebp]
        push    edx
        mov    ecx, esi
        call    FUN_0040c410
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_4bc5
        mov    ebp, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x2c]
L_4be0:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [esp + 0x14]
        add    esp, 4
L_4bef:
        mov    dword ptr [esi], ecx
        jmp    L_4c04
L_4bf3:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], 0
L_4c04:
        mov    dword ptr [esi + 4], edi
L_4c07:
        mov    eax, dword ptr [ebp + 0x178]
        xor    ebx, ebx
        test    eax, eax
        jle    L_4cbc
        mov    ecx, dword ptr [ebp + 0x174]
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x10], eax
L_4c25:
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [edx + 0x1c]
        xor    edi, edi
        mov    ebp, eax
        test    ebp, ebp
        mov    dword ptr [esp + 0x24], ebp
        jle    L_4ca6
        mov    ecx, edx
        mov    dword ptr [esp + 0x1c], ecx
L_4c3e:
        mov    ecx, dword ptr [esp + 0x1c]
        push    edi
        call    FUN_00487e30
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x28]
        mov    ecx, dword ptr [esp + 0x18]
        xor    esi, esi
        test    ecx, ecx
        jle    L_4c9b
        mov    ecx, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [ecx]
        lea    eax, [ebx + ebx*2]
        xor    edx, edx
        lea    eax, [ecx + eax*4]
L_4c71:
        mov    ecx, dword ptr [esp + 0x20]
        mov    ebp, dword ptr [ecx + edx]
        add    ecx, edx
        mov    dword ptr [eax], ebp
        mov    ebp, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], ebp
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0x18]
        inc    esi
        add    edx, 0xc
        add    eax, 0xc
        cmp    esi, ecx
        jl    L_4c71
        mov    ebp, dword ptr [esp + 0x24]
L_4c9b:
        add    ebx, ecx
        inc    edi
        cmp    edi, ebp
        jl    L_4c3e
        mov    ecx, dword ptr [esp + 0x14]
L_4ca6:
        mov    eax, dword ptr [esp + 0x10]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x10], eax
        jne    L_4c25
L_4cbc:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
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
        mov    eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0
        push    0x770710
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007daa00], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4d1f
        mov    ecx, dword ptr [g_007daadc]
        push    ecx
        push    0x7706ec
        push    0x8f
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4b5530
        mov    dword ptr [g_007daa04], esi
        pop    esi
        ret    
L_4d1f:
        mov    dword ptr [g_007daa04], 0
        pop    esi
        ret    
    }
}
