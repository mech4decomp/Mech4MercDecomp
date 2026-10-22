/*
 * FUN_006e075c (extent 0x6e075c-0x6e0dd5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_0084004c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004123f0(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_006d3160(void);
extern void __cdecl FUN_006e0a40(void);
extern void __cdecl FUN_006e0b50(void);
extern void __cdecl FUN_006e0c80(void);
extern void __cdecl FUN_006e0cd0(void);
extern void __cdecl FUN_006e0d00(void);
extern void __cdecl FUN_006e0e60(void);
extern void __cdecl FUN_006e1010(void);
extern void __cdecl FUN_006e1720(void);

__declspec(naked) void FUN_006e075c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x54
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x68]
        push    0x79ebc8
        call    FUN_0040ed60
        mov    edi, eax
        xor    ebx, ebx
        push    ebx
        lea    eax, [esp + 0x14]
        push    eax
        push    0x79ebc0
        mov    ecx, edi
        call    FUN_00411cb0
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_0040dd50
        push    ebx
        lea    ecx, [esp + 0x18]
        push    ecx
        push    0x79ebb4
        mov    ecx, edi
        call    FUN_00412390
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0xc
        mov    dword ptr [esi + 4], ebx
        call    FUN_004084c0
        add    esp, 8
        cmp    eax, ebx
        je    L_07dd
        lea    ecx, [esp + 0x58]
        mov    dword ptr [eax + 4], ecx
        mov    edx, dword ptr [esp + 0x58]
        mov    ebp, eax
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76cd64
        mov    dword ptr [esp + 0x68], ebp
        jmp    L_07e3
L_07dd:
        mov    dword ptr [esp + 0x68], ebx
        mov    ebp, ebx
L_07e3:
        mov    eax, dword ptr [ebp + 8]
        cmp    eax, ebx
        je    L_07fb
        mov    ecx, dword ptr [eax]
        cmp    ecx, ebx
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ebp + 8], eax
        je    L_07fb
        inc    dword ptr [esi + 4]
        jmp    L_07e3
L_07fb:
        mov    ecx, dword ptr [esi + 4]
        mov    ebx, dword ptr [esi + 0x114]
        mov    eax, 0x51eb851f
        imul    ecx
        sar    edx, 5
        mov    ecx, edx
        shr    ecx, 0x1f
        lea    eax, [edx + ecx + 1]
        lea    eax, [eax + eax*4]
        lea    edi, [eax + eax*4]
        shl    edi, 2
        cmp    edi, ebx
        mov    dword ptr [esi], edi
        je    L_08a3
        test    edi, edi
        jbe    L_0884
        lea    edx, [edi*4]
        push    edx
        call    FUN_004084d0
        mov    edx, dword ptr [esi + 0x110]
        add    esp, 4
        test    edx, edx
        mov    ebp, eax
        je    L_0878
        cmp    edi, ebx
        mov    ecx, edi
        jb    L_084e
        mov    ecx, ebx
L_084e:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_0869
        lea    eax, [ebp + ecx*4]
        sub    edx, ebp
        inc    ecx
L_085c:
        mov    ebx, dword ptr [edx + eax]
        mov    dword ptr [eax], ebx
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_085c
L_0869:
        mov    eax, dword ptr [esi + 0x110]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0878:
        mov    dword ptr [esi + 0x110], ebp
        mov    ebp, dword ptr [esp + 0x68]
        jmp    L_089d
L_0884:
        mov    ecx, dword ptr [esi + 0x110]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x110], 0
L_089d:
        mov    dword ptr [esi + 0x114], edi
L_08a3:
        mov    edx, dword ptr [ebp + 4]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp + 8], eax
        xor    ebx, ebx
L_08ad:
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_08e0
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp + 8], edx
        je    L_08e0
        mov    edi, dword ptr [esi + 0x110]
        mov    eax, ebx
        add    eax, edi
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov    ecx, esi
        add    ebx, 4
        call    FUN_006e1720
        mov    dword ptr [edi], eax
        jmp    L_08ad
L_08e0:
        lea    ecx, [esp + 0x14]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x54
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
        push    ecx
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esi]
        push    edi
        mov    ebx, ecx
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], 6
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    edi, [ebx + 4]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        cmp    dword ptr [edi], 0
        mov    dword ptr [esp + 0x14], 0
        jle    L_09a3
        push    ebp
L_093b:
        mov    eax, dword ptr [ebx + 0x110]
        mov    ecx, dword ptr [esp + 0x18]
        mov    edi, dword ptr [eax + ecx*4]
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ebp, eax
        test    ebp, ebp
        jne    L_0969
        push    4
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        jmp    L_0989
L_0969:
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 1
        call    dword ptr [edx + 0x24]
        push    ebp
        push    esi
        call    FUN_00412a50
        add    esp, 8
L_0989:
        push    edi
        push    esi
        mov    ecx, ebx
        call    FUN_006e0e60
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [ebx + 4]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [esp + 0x18], eax
        jl    L_093b
        pop    ebp
L_09a3:
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x50
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x64]
        push    0x79ebc8
        call    FUN_0040eda0
        mov    ebp, eax
        push    6
        push    0x79ebc0
        mov    ecx, ebp
        call    FUN_00411d10
        mov    ebx, dword ptr [esi + 4]
        push    ebx
        push    0x79ebd4
        mov    ecx, ebp
        call    FUN_00411d10
        push    0
        lea    ecx, [esp + 0x14]
        call    FUN_0040dd50
        xor    edi, edi
        test    ebx, ebx
        jle    L_0a16
L_09f8:
        mov    eax, dword ptr [esi + 0x110]
        mov    ecx, dword ptr [eax + edi*4]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        mov    ecx, esi
        call    FUN_006e1010
        mov    eax, dword ptr [esi + 4]
        inc    edi
        cmp    edi, eax
        jl    L_09f8
L_0a16:
        lea    eax, [esp + 0x10]
        push    eax
        push    0x79ebb4
        mov    ecx, ebp
        call    FUN_004123f0
        lea    ecx, [esp + 0x10]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x50
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        mov    eax, dword ptr [ebx + 0x34]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_006e0d00
        test    eax, eax
        jne    L_0b44
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [esi]
        cmp    eax, ecx
        jge    L_0a76
        mov    edx, dword ptr [esi + 0x110]
        lea    ecx, [eax + 1]
        mov    dword ptr [esi + 4], ecx
        mov    dword ptr [edx + eax*4], ebx
        jmp    L_0b17
L_0a76:
        push    ebp
        mov    ebp, dword ptr [esi + 0x114]
        push    edi
        lea    edi, [ecx + 0x64]
        cmp    edi, ebp
        mov    dword ptr [esi], edi
        je    L_0b03
        test    edi, edi
        jbe    L_0ae4
        lea    eax, [edi*4]
        push    eax
        call    FUN_004084d0
        mov    edx, dword ptr [esi + 0x110]
        add    esp, 4
        test    edx, edx
        mov    ebx, eax
        je    L_0ad8
        cmp    edi, ebp
        mov    ecx, edi
        jb    L_0aaf
        mov    ecx, ebp
L_0aaf:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_0ac9
        lea    eax, [ebx + ecx*4]
        sub    edx, ebx
        inc    ecx
L_0abc:
        mov    ebp, dword ptr [edx + eax]
        mov    dword ptr [eax], ebp
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_0abc
L_0ac9:
        mov    eax, dword ptr [esi + 0x110]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0ad8:
        mov    dword ptr [esi + 0x110], ebx
        mov    ebx, dword ptr [esp + 0x14]
        jmp    L_0afd
L_0ae4:
        mov    ecx, dword ptr [esi + 0x110]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x110], 0
L_0afd:
        mov    dword ptr [esi + 0x114], edi
L_0b03:
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 0x110]
        lea    edx, [eax + 1]
        pop    edi
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [ecx + eax*4], ebx
        pop    ebp
L_0b17:
        mov    edx, dword ptr [ebx + 0x24]
        mov    ecx, dword ptr [g_0084004c]
        push    edx
        call    FUN_006d3160
        mov    eax, dword ptr [ebx + 0x28]
        mov    ecx, dword ptr [g_0084004c]
        push    eax
        call    FUN_006d3160
        mov    ecx, dword ptr [ebx + 0x2c]
        push    ecx
        mov    ecx, dword ptr [g_0084004c]
        call    FUN_006d3160
L_0b44:
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        cmp    ebx, eax
        jne    L_0b6e
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_006e0a40
        pop    esi
        pop    ebx
        ret    8
L_0b6e:
        mov    ecx, dword ptr [esi]
        inc    eax
        cmp    eax, ecx
        push    ebp
        push    edi
        mov    dword ptr [esi + 4], eax
        jl    L_0c09
        mov    ebp, dword ptr [esi + 0x114]
        lea    edi, [ecx + 0x64]
        cmp    edi, ebp
        mov    dword ptr [esi], edi
        je    L_0c09
        test    edi, edi
        jbe    L_0bea
        lea    ecx, [edi*4]
        push    ecx
        call    FUN_004084d0
        mov    edx, dword ptr [esi + 0x110]
        add    esp, 4
        test    edx, edx
        mov    ebx, eax
        je    L_0bde
        cmp    edi, ebp
        mov    ecx, edi
        jb    L_0bb5
        mov    ecx, ebp
L_0bb5:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_0bcf
        lea    eax, [ebx + ecx*4]
        sub    edx, ebx
        inc    ecx
L_0bc2:
        mov    ebp, dword ptr [edx + eax]
        mov    dword ptr [eax], ebp
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_0bc2
L_0bcf:
        mov    eax, dword ptr [esi + 0x110]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0bde:
        mov    dword ptr [esi + 0x110], ebx
        mov    ebx, dword ptr [esp + 0x18]
        jmp    L_0c03
L_0bea:
        mov    ecx, dword ptr [esi + 0x110]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x110], 0
L_0c03:
        mov    dword ptr [esi + 0x114], edi
L_0c09:
        mov    eax, dword ptr [esi + 4]
        cmp    eax, ebx
        pop    edi
        pop    ebp
        jle    L_0c28
        mov    edx, dword ptr [esi + 0x110]
        lea    ecx, [edx + eax*4]
        sub    eax, ebx
L_0c1d:
        mov    edx, dword ptr [ecx - 4]
        mov    dword ptr [ecx], edx
        add    ecx, -4
        dec    eax
        jne    L_0c1d
L_0c28:
        mov    eax, dword ptr [esi + 0x110]
        mov    ecx, dword ptr [esp + 0xc]
        pop    esi
        mov    dword ptr [eax + ebx*4], ecx
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x110]
        push    edi
        mov    edi, dword ptr [ecx + eax*4]
        push    eax
        mov    ecx, esi
        call    FUN_006e0c80
        mov    edx, dword ptr [esi + 4]
        mov    eax, dword ptr [esp + 0x10]
        dec    edx
        cmp    eax, edx
        jge    L_0c73
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_006e0b50
        pop    edi
        pop    esi
        ret    8
L_0c73:
        push    edi
        mov    ecx, esi
        call    FUN_006e0a40
        pop    edi
        pop    esi
        ret    8
        mov    eax, dword ptr [ecx + 4]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        lea    esi, [eax - 1]
        cmp    edi, esi
        jge    L_0ca8
        mov    eax, dword ptr [ecx + 0x110]
        mov    edx, esi
        lea    eax, [eax + edi*4]
        sub    edx, edi
L_0c9d:
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [eax], edi
        add    eax, 4
        dec    edx
        jne    L_0c9d
L_0ca8:
        pop    edi
        mov    dword ptr [ecx + 4], esi
        pop    esi
        ret    4
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_006e0cd0
        push    eax
        mov    ecx, esi
        call    FUN_006e0c80
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [ecx + 0x114]
        push    esi
        xor    eax, eax
        test    edx, edx
        jbe    L_0cf3
        mov    ecx, dword ptr [ecx + 0x110]
        mov    esi, dword ptr [esp + 8]
L_0ce7:
        cmp    dword ptr [ecx], esi
        je    L_0cf6
        inc    eax
        add    ecx, 4
        cmp    eax, edx
        jb    L_0ce7
L_0cf3:
        or    eax, 0xffffffff
L_0cf6:
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        mov    ebx, dword ptr [ecx + 4]
        push    ebp
        push    esi
        xor    esi, esi
        test    ebx, ebx
        push    edi
        jle    L_0d31
        mov    ecx, dword ptr [ecx + 0x110]
        mov    ebp, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], ecx
        mov    edi, ecx
L_0d1e:
        mov    ecx, dword ptr [edi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 8]
        cmp    ebp, eax
        je    L_0d3b
        inc    esi
        add    edi, 4
        cmp    esi, ebx
        jl    L_0d1e
L_0d31:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    4
L_0d3b:
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + esi*4]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [ecx + 4]
        push    ebx
        push    ebp
        push    esi
        xor    ebp, ebp
        test    eax, eax
        push    edi
        mov    dword ptr [esp + 0x10], eax
        jle    L_0db8
        mov    ecx, dword ptr [ecx + 0x110]
        mov    ebx, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x14], ecx
        mov    edi, ecx
L_0d74:
        mov    ecx, dword ptr [edi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        mov    esi, ebx
L_0d7f:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_0da3
        test    cl, cl
        je    L_0d9f
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_0da3
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_0d7f
L_0d9f:
        xor    eax, eax
        jmp    L_0da8
L_0da3:
        sbb    eax, eax
        sbb    eax, -1
L_0da8:
        test    eax, eax
        je    L_0dc4
        mov    eax, dword ptr [esp + 0x10]
        inc    ebp
        add    edi, 4
        cmp    ebp, eax
        jl    L_0d74
L_0db8:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 8
        ret    4
L_0dc4:
        mov    eax, dword ptr [esp + 0x14]
        mov    eax, dword ptr [eax + ebp*4]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    4
    }
}
