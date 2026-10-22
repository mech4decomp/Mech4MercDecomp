/*
 * FUN_006a38f1 (extent 0x6a38f1-0x6a3a99) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d04c;
extern float  g_0076d064;
extern float  g_00799d40;
extern int    g_007f20ec;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00663f70(void);
extern void __cdecl FUN_00665670(void);
extern void __cdecl FUN_006a22a0(void);
extern void __cdecl FUN_006a4ee0(void);

__declspec(naked) void FUN_006a38f1(void)
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
        sub    esp, 0x34
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x40]
        mov    eax, dword ptr [esi]
        mov    ebx, ecx
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0xfc]
        and    eax, 0x80000007
        jns    L_3922
        dec    eax
        or    eax, 0xfffffff8
        inc    eax
L_3922:
        mov    edx, dword ptr [esi]
        mov    edi, dword ptr [g_007f20ec]
        lea    ecx, [eax + eax*4]
        shl    ecx, 1
        mov    dword ptr [esp + 0x44], ecx
        fild    dword ptr [esp + 0x44]
        mov    ecx, esi
        fadd    dword ptr [g_0076d04c]
        fstp    dword ptr [esp + 0x44]
        call    dword ptr [edx + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    edi
        call    FUN_00415230
        cmp    al, 1
        jne    L_3989
        push    0
        push    1
        push    1
        push    0
        push    esi
        call    FUN_00665670
        mov    eax, dword ptr [esi]
        add    esp, 0x14
        mov    ecx, esi
        call    dword ptr [eax + 0x114]
        cmp    al, 1
        jne    L_3a66
        mov    ecx, dword ptr [esp + 0x44]
        push    ecx
        push    esi
        call    FUN_00663f70
        add    esp, 8
        jmp    L_3a66
L_3989:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x114]
        cmp    al, 1
        jne    L_39b3
        mov    ecx, dword ptr [esp + 0x44]
        push    ecx
        push    esi
        call    FUN_00663f70
        push    1
        push    1
        push    0
        push    0
        push    esi
        call    FUN_00665670
        add    esp, 0x1c
L_39b3:
        push    esi
        call    FUN_006a4ee0
        fcomp    dword ptr [g_00799d40]
        add    esp, 4
        fnstsw  ax
        test    ah, 1
        jne    L_3a71
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x88]
        add    eax, 0x80
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [eax + 0x18]
        mov    ecx, esi
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [eax + 0x28]
        mov    eax, dword ptr [esi]
        fstp    dword ptr [esp + 0x14]
        call    dword ptr [eax + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0xac]
        fstp    dword ptr [esp + 0x24]
        add    eax, 0x80
        mov    eax, ecx
        mov    dword ptr [esp + 0x1c], ecx
        mov    ecx, edx
        mov    dword ptr [esp + 0x28], eax
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x20], edx
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x2c], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x34], eax
        lea    eax, [esp + 0x24]
        mov    dword ptr [esp + 0x30], edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x38], ecx
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x40], 0x41a00000
        call    dword ptr [edx + 0x104]
        test    al, al
        jne    L_3a71
L_3a66:
        mov    edx, dword ptr [ebx + 8]
        lea    ecx, [ebx + 8]
        push    esi
        call    dword ptr [edx]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3a71:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x34
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_006a22a0
        mov    dword ptr [esi + 8], 0
        mov    dword ptr [esi], 0x799dc0
        mov    eax, esi
        pop    esi
        ret    
    }
}
