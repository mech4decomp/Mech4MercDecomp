/*
 * FUN_006a3bde (extent 0x6a3bde-0x6a3dbe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0077d060;
extern float  g_00799d40;
extern float  g_00799d4c;
extern float  g_00799dd8;
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00662ee0(void);
extern void __cdecl FUN_00663bb0(void);
extern void __cdecl FUN_00665500(void);
extern void __cdecl FUN_00665670(void);
extern void __cdecl FUN_006a2400(void);
extern void __cdecl FUN_006a24c0(void);
extern void __cdecl FUN_006a2800(void);
extern void __cdecl FUN_006a28d0(void);
extern void __cdecl FUN_006a4d50(void);
extern void __cdecl FUN_006a5220(void);
extern void __cdecl FUN_006a5390(void);

__declspec(naked) void FUN_006a3bde(void)
{
    __asm {
        nop    
        nop    
        mov    al, byte ptr [ecx + 8]
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
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        push    esi
        mov    edi, ecx
        call    FUN_006a5390
        fsubr    dword ptr [g_0076d064]
        add    esp, 4
        fcomp    dword ptr [g_00799d40]
        fnstsw  ax
        test    ah, 1
        jne    L_3c34
        push    0x44160000
        push    esi
        call    FUN_006a5220
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_3c34
        mov    byte ptr [edi + 8], 1
L_3c34:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xd4]
        test    al, al
        jne    L_3c5f
        push    0
        push    1
        push    1
        push    0
        push    esi
        call    FUN_00665670
        fld    dword ptr [g_0076d064]
        add    esp, 0x14
        pop    edi
        pop    esi
        pop    ecx
        ret    4
L_3c5f:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x124]
        fcomp    dword ptr [g_00799d4c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3c7a
        mov    byte ptr [edi + 8], 1
L_3c7a:
        push    0x3f800000
        push    1
        push    0
        push    esi
        call    FUN_006a4d50
        fcomp    dword ptr [g_00799d40]
        add    esp, 0x10
        fnstsw  ax
        test    ah, 1
        jne    L_3d5b
        push    1
        push    esi
        call    FUN_00662ee0
        push    0
        push    1
        push    1
        push    0
        push    esi
        call    FUN_00665670
        push    esi
        call    FUN_00663bb0
        mov    eax, dword ptr [esi]
        add    esp, 0x20
        mov    ecx, esi
        call    dword ptr [eax + 0xdc]
        fcomp    dword ptr [g_00799dd8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_3d1d
        mov    eax, dword ptr [edi + 0xc]
        test    eax, eax
        je    L_3d42
        push    0x60
        mov    dword ptr [edi + 0xc], 0
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fstp    dword ptr [esp + 0x10]
        push    0x61
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fstp    dword ptr [esp + 8]
        call    FUN_00415020
        fld    dword ptr [esp + 8]
        fsub    dword ptr [esp + 0x10]
        fmulp st(1), st(0)
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [edi + 0x10]
        jmp    L_3d3b
L_3d1d:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xdc]
        fcomp    dword ptr [g_0077d060]
        fnstsw  ax
        test    ah, 1
        je    L_3d3b
        mov    dword ptr [edi + 0xc], 1
L_3d3b:
        mov    eax, dword ptr [edi + 0xc]
        test    eax, eax
        jne    L_3d64
L_3d42:
        mov    eax, dword ptr [edi + 0x10]
        push    eax
        push    esi
        call    FUN_00665500
        fld    dword ptr [g_0076d064]
        add    esp, 8
        pop    edi
        pop    esi
        pop    ecx
        ret    4
L_3d5b:
        push    esi
        call    FUN_00663bb0
        add    esp, 4
L_3d64:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        pop    ecx
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_006a24c0
        push    0x41200000
        push    0x3fc00000
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esi], 0x7952d0
        call    FUN_006a2800
        lea    ecx, [esi + 0x1c]
        call    FUN_006a28d0
        push    0x3f800000
        push    1
        lea    ecx, [esi + 0x28]
        mov    dword ptr [esi], 0x795334
        call    FUN_006a2400
        mov    dword ptr [esi + 0x38], 0
        mov    dword ptr [esi], 0x799ddc
        mov    eax, esi
        pop    esi
        ret    
    }
}
