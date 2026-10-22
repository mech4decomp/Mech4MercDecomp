/*
 * FUN_00505937 (extent 0x505937-0x505cd3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_00776ea4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00505320(void);
extern void __cdecl FUN_005056d0(void);
extern void __cdecl FUN_005058e0(void);
extern void __cdecl FUN_00505d50(void);
extern void __cdecl FUN_00506120(void);
extern void __cdecl FUN_00722660(void);
extern void __cdecl FUN_00722f70(void);

__declspec(naked) void FUN_00505937(void)
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
        mov    edx, dword ptr [ecx + 0xc]
        fld    dword ptr [g_0076c5b0]
        sub    esp, 8
        test    edx, edx
        jbe    L_595f
        mov    eax, dword ptr [ecx + 0x14]
        push    esi
        mov    esi, edx
L_5956:
        fadd    dword ptr [eax]
        add    eax, 4
        dec    esi
        jne    L_5956
        pop    esi
L_595f:
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov    dword ptr [esp + 4], 0
        __emit 0xDF  // fild qword ptr [esp] (explicit disp8=0)
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        mov    eax, dword ptr [ecx + 0x28]
        push    eax
        fdivr st(0), st(1)
        fstp    dword ptr [esp + 4]
        mov    eax, dword ptr [esp + 4]
        push    eax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        push    eax
        call    FUN_005058e0
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_0076c5b0]
        sub    esp, 0x10
        push    esi
        mov    esi, dword ptr [ecx + 0xc]
        test    esi, esi
        jbe    L_59ae
        mov    eax, dword ptr [ecx + 0x14]
        mov    edx, esi
L_59a6:
        fadd    dword ptr [eax]
        add    eax, 4
        dec    edx
        jne    L_59a6
L_59ae:
        mov    dword ptr [esp + 0xc], esi
        mov    dword ptr [esp + 0x10], 0
        fild    qword ptr [esp + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        push    eax
        fdivr st(0), st(1)
        fstp    dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [esp + 8]
        fmul    dword ptr [g_00776ea4]
        fsubr    dword ptr [ecx + 8]
        fst    dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [esp + 8]
        push    edx
        fsub    dword ptr [ecx + 4]
        push    eax
        fmul    dword ptr [g_00776ea4]
        fadd    dword ptr [ecx + 4]
        fst    dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x18]
        fstp    dword ptr [ecx + 4]
        push    edx
        call    FUN_005058e0
        pop    esi
        add    esp, 0x10
        ret    
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 8]
        push    eax
        mov    eax, dword ptr [ecx + 0x2c]
        push    edx
        mov    edx, dword ptr [ecx + 4]
        push    eax
        push    edx
        call    FUN_005058e0
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        push    edi
        mov    esi, ecx
        call    FUN_00506120
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 0x38], edi
        mov    dword ptr [esi + 0x54], 0xffffffff
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [esi + 0x1c], eax
        xor    eax, eax
        xor    ebp, ebp
        mov    dword ptr [esi + 0x20], ebp
        lea    ecx, [esi + 4]
        mov    dword ptr [ecx], eax
        mov    dword ptr [ecx + 4], eax
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 0xc], eax
        mov    dword ptr [ecx + 0x10], eax
        xor    edx, edx
        lea    eax, [esi + 0x24]
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 4], edx
        add    esp, 4
        mov    dword ptr [eax + 8], edx
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    dword ptr [eax + 0xc], edx
        push    edi
        mov    dword ptr [eax + 0x10], edx
        call    FUN_00722f70
        mov    edx, dword ptr [esp + 0x14]
        shr    edx, 0x1e
        mov    ebx, 1
        and    dl, bl
        push    0x38
        mov    byte ptr [esi + 0x50], dl
        mov    dword ptr [esi + 0x3c], ebp
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_5ae0
        mov    ecx, dword ptr [esp + 0x20]
        push    ebp
        push    ebp
        push    ecx
        push    0x3f800000
        push    ebp
        push    0xbf800000
        mov    ecx, eax
        call    FUN_005056d0
        jmp    L_5ae2
L_5ae0:
        xor    eax, eax
L_5ae2:
        push    eax
        push    ebp
        mov    ecx, esi
        call    FUN_00505d50
        push    0x38
        mov    dword ptr [esi + 0x40], ebx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_5b17
        mov    edx, dword ptr [esp + 0x24]
        push    ebp
        push    ebp
        push    edx
        push    0x3f800000
        push    ebp
        push    0xbf800000
        mov    ecx, eax
        call    FUN_005056d0
        jmp    L_5b19
L_5b17:
        xor    eax, eax
L_5b19:
        push    eax
        push    ebx
        mov    ecx, esi
        call    FUN_00505d50
        mov    eax, dword ptr [esp + 0x14]
        test    eax, 0x1e000000
        jbe    L_5b30
        mov    dword ptr [esi + 0x20], ebx
L_5b30:
        test    al, 4
        je    L_5ba0
        push    0x34
        mov    dword ptr [esi + 0x44], 2
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebp
        je    L_5b8e
        mov    eax, dword ptr [esp + 0x28]
        push    ebp
        push    ebx
        push    eax
        push    0x3f800000
        push    0xbf800000
        mov    ecx, edi
        call    FUN_00505320
        mov    ecx, dword ptr [esp + 0x28]
        push    edi
        mov    dword ptr [edi + 0x30], ecx
        push    2
        mov    ecx, esi
        mov    dword ptr [edi], 0x776eb8
        mov    dword ptr [edi + 4], 0xbf800000
        mov    dword ptr [edi + 8], 0x3f800000
        call    FUN_00505d50
        mov    eax, dword ptr [esp + 0x14]
        jmp    L_5c05
L_5b8e:
        xor    edi, edi
        push    edi
        push    2
        mov    ecx, esi
        call    FUN_00505d50
        mov    eax, dword ptr [esp + 0x14]
        jmp    L_5c05
L_5ba0:
        test    al, 0x40
        je    L_5bfe
        push    0x34
        mov    dword ptr [esi + 0x44], 6
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        cmp    edi, ebp
        je    L_5b8e
        mov    edx, dword ptr [esp + 0x28]
        push    ebp
        push    ebx
        push    edx
        push    0x3f800000
        push    0xbf800000
        mov    ecx, edi
        call    FUN_00505320
        mov    eax, dword ptr [esp + 0x28]
        push    edi
        push    2
        mov    ecx, esi
        mov    dword ptr [edi], 0x776eb8
        mov    dword ptr [edi + 4], 0xbf800000
        mov    dword ptr [edi + 8], 0x3f800000
        mov    dword ptr [edi + 0x30], eax
        call    FUN_00505d50
        mov    eax, dword ptr [esp + 0x14]
        jmp    L_5c05
L_5bfe:
        mov    dword ptr [esi + 0x44], 0xc
L_5c05:
        test    al, 0x20
        je    L_5c51
        push    0x38
        mov    dword ptr [esi + 0x48], 5
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_5c43
        mov    ecx, dword ptr [esp + 0x2c]
        push    ebp
        push    ebp
        push    ecx
        push    0x3f800000
        push    ebp
        push    0xbf800000
        mov    ecx, eax
        call    FUN_005056d0
        push    eax
        push    3
        mov    ecx, esi
        call    FUN_00505d50
        jmp    L_5c58
L_5c43:
        xor    eax, eax
        push    eax
        push    3
        mov    ecx, esi
        call    FUN_00505d50
        jmp    L_5c58
L_5c51:
        mov    dword ptr [esi + 0x48], 0xc
L_5c58:
        mov    ebx, dword ptr [esi]
        push    ebx
        call    FUN_004084d0
        add    esp, 4
        mov    ebp, eax
        xor    edi, edi
        test    ebx, ebx
        mov    dword ptr [esi + 0x4c], ebp
        jbe    L_5c80
L_5c6e:
        mov    eax, dword ptr [esi + 0x38]
        push    edi
        push    eax
        call    FUN_00722660
        mov    byte ptr [edi + ebp], al
        inc    edi
        cmp    edi, ebx
        jb    L_5c6e
L_5c80:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 4]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [ecx + 4]
        fdivp st(1), st(0)
        fsubr    dword ptr [g_0076d064]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
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
        ret    
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
        ret    4
    }
}
