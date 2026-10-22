/*
 * FUN_006a75ac (extent 0x6a75ac-0x6a7708) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00799e2c;
extern void __cdecl FUN_00419480(void);

__declspec(naked) void FUN_006a75ac(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, 3
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
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 0x18
        sub    eax, 0
        push    esi
        je    L_76cd
        dec    eax
        je    L_7685
        dec    eax
        je    L_75f8
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x20]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        pop    esi
        add    esp, 0x18
        ret    
L_75f8:
        mov    esi, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x44]
        test    eax, eax
        jne    L_7646
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    ecx, dword ptr [eax + 0xac]
        fld    dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [esp + 0x20]
        fxch    st(1)
        fstp    dword ptr [eax]
        mov    edx, ecx
        mov    dword ptr [esp + 0x18], ecx
        fstp    dword ptr [eax + 4]
        mov    dword ptr [eax + 8], edx
        pop    esi
        add    esp, 0x18
        ret    
L_7646:
        mov    ecx, dword ptr [g_00799e2c]
        mov    edx, dword ptr [eax]
        push    0
        push    ecx
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xf8]
        mov    edx, dword ptr [eax]
        mov    dword ptr [esp + 4], edx
        fld    dword ptr [eax + 4]
        fst    dword ptr [esp + 8]
        pop    esi
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [esp + 0x1c]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fstp    dword ptr [eax]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fstp    dword ptr [eax + 8]
        add    esp, 0x18
        ret    
L_7685:
        mov    ecx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x3c]
        mov    ecx, dword ptr [g_00799e2c]
        mov    edx, dword ptr [eax]
        push    0
        push    ecx
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xf8]
        mov    edx, dword ptr [eax]
        mov    dword ptr [esp + 4], edx
        fld    dword ptr [eax + 4]
        fst    dword ptr [esp + 8]
        pop    esi
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [esp + 0x1c]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fstp    dword ptr [eax]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fstp    dword ptr [eax + 8]
        add    esp, 0x18
        ret    
L_76cd:
        mov    ecx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00419480
        fld    dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x14]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        pop    esi
        add    esp, 0x18
        ret    
    }
}
