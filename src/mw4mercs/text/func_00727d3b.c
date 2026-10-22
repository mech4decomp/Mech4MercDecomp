/*
 * FUN_00727d3b (extent 0x727d3b-0x728098) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_0076dd60;
extern float  g_007b7118;
extern int    g_008806a0;
extern int    g_008806a4;
extern float  g_008806a8;
extern float  g_008806ac;
extern int    g_008806b8;
extern float  g_008806c8;
extern float  g_008806cc;
extern int    g_008806d8;
extern float  g_008806e8;
extern float  g_008806ec;
extern int    g_008806f8;
extern int    g_00880708;
extern int    g_0088070c;
extern int    g_00880718;
extern int    g_008816cc;
extern float  g_008816d8;
extern char   g_008816dc;
extern char   g_008816e4;
extern char   g_008816e5;
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713d10(void);
extern void __cdecl FUN_00713d70(void);
extern void __cdecl FUN_007277f0(void);

__declspec(naked) void FUN_00727d3b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        call    FUN_00713d10
        push    0
        push    1
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    0
        push    7
        call    FUN_00713cc0
        push    0
        push    8
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    1
        push    0x14
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    0
        push    0xc
        call    FUN_00713cc0
        mov    esi, dword ptr [esp + 0x18]
        mov    eax, esi
        and    eax, 0xff000000
        cmp    eax, 0xff000000
        jne    L_7dbf
        push    1
        jmp    L_7dc1
L_7dbf:
        push    3
L_7dc1:
        push    0xd
        call    FUN_00713cc0
        push    1
        push    0xe
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    0
        push    0x11
        call    FUN_00713cc0
        push    0
        push    0x12
        call    FUN_00713cc0
        push    0
        push    0x15
        call    FUN_00713cc0
        push    0
        push    0x1c
        call    FUN_00713cc0
        push    0
        push    0x13
        call    FUN_00713cc0
        fild    dword ptr [esp + 8]
        push    0
        mov    dword ptr [g_008806a4], 0
        fst    dword ptr [g_008806a8]
        mov    dword ptr [g_008806b8], esi
        fild    dword ptr [esp + 0x10]
        mov    dword ptr [g_008806d8], esi
        mov    dword ptr [g_008806f8], esi
        mov    dword ptr [g_00880718], esi
        fst    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        fstp    dword ptr [g_008806ac]
        mov    dword ptr [g_0088070c], edx
        fstp    dword ptr [g_008806c8]
        fild    dword ptr [esp + 0x18]
        fst    dword ptr [g_008806cc]
        fild    dword ptr [esp + 0x14]
        fst    dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x1c]
        fstp    dword ptr [g_008806e8]
        mov    dword ptr [g_00880708], ecx
        fstp    dword ptr [g_008806ec]
        call    FUN_007277f0
        mov    eax, dword ptr [g_008806a4]
        test    eax, eax
        pop    esi
        je    L_7eb5
        mov    eax, dword ptr [g_008806a0]
        test    eax, eax
        je    L_7ea5
        push    2
        push    0xb
        call    FUN_00713cc0
L_7ea5:
        mov    eax, dword ptr [g_008806a4]
        push    eax
        push    0x8806a8
        call    FUN_00713ae0
L_7eb5:
        call    FUN_00713d70
        ret    0x14
        nop    
        nop    
        nop    
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
    }
}
