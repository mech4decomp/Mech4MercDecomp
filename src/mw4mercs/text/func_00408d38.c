/*
 * FUN_00408d38 (extent 0x408d38-0x409389) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00408b80(void);
extern void __cdecl FUN_00408cc0(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_004156c0(void);
extern void __cdecl FUN_004156f0(void);
extern void __cdecl FUN_00415920(void);
extern void __cdecl FUN_00415980(void);
extern void __cdecl FUN_004159a0(void);
extern void __cdecl FUN_004159e0(void);
extern void __cdecl FUN_00415a50(void);
extern void __cdecl FUN_00415a80(void);
extern void __cdecl FUN_00415a90(void);
extern void __cdecl FUN_00415ad0(void);
extern void __cdecl FUN_00415ae0(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_00408d38(void)
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
        sub    esp, 0xf4
        push    ebp
        push    esi
        mov    esi, ecx
        xor    ebp, ebp
        xor    eax, eax
        lea    ecx, [esp + 0x34]
L_8d52:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x32
        jl    L_8d52
        push    ebx
        xor    ecx, ecx
        push    edi
        mov    dword ptr [esp + 0x10], ecx
L_8d65:
        mov    eax, 0x32
        sub    eax, ecx
        push    eax
        call    FUN_00415040
        mov    ecx, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + ecx*4 + 0x40]
        add    eax, ecx
        mov    edx, dword ptr [esp + eax*4 + 0x40]
        lea    eax, [esp + eax*4 + 0x40]
        add    esp, 4
        mov    dword ptr [eax], edi
        mov    dword ptr [esp + ecx*4 + 0x3c], edx
        inc    ecx
        cmp    ecx, 0x32
        mov    dword ptr [esp + 0x10], ecx
        jl    L_8d65
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esp + 0x10], ebp
        lea    edi, [esi + 0x10]
        lea    ebx, [esi + 0x20]
L_8da8:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_8dca
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x3c]
        push    edx
        mov    ecx, eax
        call    FUN_00408b80
        mov    esi, eax
        jmp    L_8dcc
L_8dca:
        xor    esi, esi
L_8dcc:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x3c]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_004156c0
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x3c]
        push    eax
        push    esi
        mov    ecx, ebx
        call    FUN_004156c0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_8da8
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00415920
        mov    esi, 0x76cda0
        push    ebx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00415920
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00415a50
        test    eax, eax
        je    L_8e4b
L_8e35:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00415a50
        test    eax, eax
        jne    L_8e35
L_8e4b:
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00415a50
        test    eax, eax
        je    L_8e72
L_8e5c:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00415a50
        test    eax, eax
        jne    L_8e5c
L_8e72:
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x2c]
        call    FUN_00415920
        push    ebx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], esi
        call    FUN_00415920
        mov    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x10], ebp
L_8eab:
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x2c]
        call    FUN_00415ae0
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_00415ae0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_8eab
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00415920
        push    ebx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], esi
        call    FUN_00415920
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00415a50
        cmp    eax, ebp
        pop    edi
        pop    ebx
        je    L_8f3f
L_8f1d:
        mov    edx, dword ptr [esp + 8]
        inc    edx
        cmp    eax, ebp
        mov    dword ptr [esp + 8], edx
        je    L_8f32
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_8f32:
        lea    ecx, [esp + 0xc]
        call    FUN_00415a50
        cmp    eax, ebp
        jne    L_8f1d
L_8f3f:
        lea    ecx, [esp + 0x20]
        call    FUN_00415980
        lea    ecx, [esp + 0xc]
        call    FUN_00415980
        pop    esi
        mov    al, 1
        pop    ebp
        add    esp, 0xf4
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xf8
        push    ebx
        push    ebp
        mov    ebp, ecx
        push    esi
        push    edi
        mov    dword ptr [esp + 0x3c], ebp
        xor    eax, eax
        lea    ecx, [esp + 0x40]
L_8f76:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x32
        jl    L_8f76
        xor    ecx, ecx
        mov    dword ptr [esp + 0x10], ecx
L_8f87:
        mov    eax, 0x32
        sub    eax, ecx
        push    eax
        call    FUN_00415040
        mov    ecx, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + ecx*4 + 0x44]
        add    eax, ecx
        mov    edx, dword ptr [esp + eax*4 + 0x44]
        lea    eax, [esp + eax*4 + 0x44]
        add    esp, 4
        mov    dword ptr [eax], esi
        mov    dword ptr [esp + ecx*4 + 0x40], edx
        inc    ecx
        cmp    ecx, 0x32
        mov    dword ptr [esp + 0x10], ecx
        jl    L_8f87
        mov    dword ptr [esp + 0x10], 0
        lea    esi, [ebp + 0x10]
        lea    edi, [ebp + 0x20]
L_8fc7:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8fe9
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x40]
        push    edx
        mov    ecx, eax
        call    FUN_00408b80
        mov    ebx, eax
        jmp    L_8feb
L_8fe9:
        xor    ebx, ebx
L_8feb:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x40]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_004156c0
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x40]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_004156c0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_8fc7
        mov    ecx, ebp
        call    FUN_00408cc0
        mov    dword ptr [esp + 0x10], 0
L_902a:
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        call    FUN_004156f0
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, edi
        call    FUN_004156f0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_902a
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00415920
        mov    ebp, 0x76cda0
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00415920
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x14], ebp
        call    FUN_004159a0
        lea    ecx, [esp + 0x14]
        call    FUN_004159a0
        lea    ecx, [esp + 0x28]
        call    FUN_00415a80
        lea    ecx, [esp + 0x14]
        call    FUN_00415a80
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        xor    ebx, ebx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00415a80
        test    eax, eax
        je    L_9107
L_90d6:
        lea    ecx, [esp + 0x28]
        call    FUN_00415a80
        lea    ecx, [esp + 0x14]
        call    FUN_004159e0
        lea    ecx, [esp + 0x28]
        call    FUN_004159e0
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00415a80
        test    eax, eax
        jne    L_90d6
L_9107:
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00415920
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x2c], ebp
        call    FUN_00415920
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00415a50
        test    eax, eax
        je    L_9165
L_9146:
        lea    ecx, [esp + 0x14]
        call    FUN_00415a50
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00415a50
        test    eax, eax
        jne    L_9146
L_9165:
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        xor    eax, eax
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], eax
L_9199:
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00415a90
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x2c]
        call    FUN_00415a90
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_9199
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], ebx
        call    FUN_00415a80
        test    eax, eax
        je    L_923c
L_91fe:
        lea    ecx, [esp + 0x14]
        call    FUN_00415ad0
        push    ebx
        lea    ecx, [esp + 0x2c]
        call    FUN_00415a90
        cmp    eax, ebx
        je    L_921d
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_921d:
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x3c]
        inc    edx
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00408cc0
        lea    ecx, [esp + 0x14]
        call    FUN_00415a80
        test    eax, eax
        jne    L_91fe
L_923c:
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], ebx
        jmp    L_9272
L_9270:
        xor    ebx, ebx
L_9272:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_9292
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + ecx*4 + 0x40]
        push    edx
        mov    ecx, eax
        call    FUN_00408b80
        mov    ebx, eax
L_9292:
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + eax*4 + 0x40]
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_004156c0
        mov    edx, dword ptr [esp + 0x10]
        lea    eax, [esp + edx*4 + 0x40]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_004156c0
        mov    ecx, dword ptr [esp + 0x3c]
        call    FUN_00408cc0
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x32
        mov    dword ptr [esp + 0x10], eax
        jl    L_9270
        mov    ebx, dword ptr [esp + 0x3c]
        mov    ecx, ebx
        call    FUN_00408cc0
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x10], 0
        call    FUN_00415cc0
        test    eax, eax
        je    L_936a
L_9319:
        push    eax
        call    FUN_00415040
        add    esp, 4
        mov    esi, eax
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_00415a90
        lea    ecx, [esp + 0x14]
        call    FUN_00415ad0
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00415a90
        test    eax, eax
        je    L_934d
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_934d:
        mov    edx, dword ptr [esp + 0x10]
        inc    edx
        mov    ecx, ebx
        mov    dword ptr [esp + 0x10], edx
        call    FUN_00408cc0
        lea    ecx, [esp + 0x14]
        call    FUN_00415cc0
        test    eax, eax
        jne    L_9319
L_936a:
        lea    ecx, [esp + 0x28]
        call    FUN_00415980
        lea    ecx, [esp + 0x14]
        call    FUN_00415980
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0xf8
        ret    
    }
}
