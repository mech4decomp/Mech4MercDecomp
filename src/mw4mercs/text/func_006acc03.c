/*
 * FUN_006acc03 (extent 0x6acc03-0x6ace5f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00786dd0;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0041ed40(void);
extern void __cdecl FUN_005fbd40(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_006acc03(void)
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
        mov    eax, 1
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
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        fsubr    dword ptr [esp + 0x14]
        add    eax, 0x80
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 4], edx
        fsub    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 8], eax
        fsub    dword ptr [esp + 8]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00786dd0]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_cc92
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        jne    L_cc94
L_cc92:
        xor    al, al
L_cc94:
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        call    FUN_005fbd40
        mov    ecx, dword ptr [esp + 8]
        push    1
        and    eax, 0xff
        mov    dword ptr [esp + 8], eax
        lea    eax, [esp + 8]
        push    eax
        call    FUN_0041ec50
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esp + 0xc]
        xor    edx, eax
        mov    eax, dword ptr [edx + 0x14]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x1814]
        mov    edx, dword ptr [eax + ecx*4 + 0x848c]
        add    eax, 0x8484
        inc    edx
        mov    dword ptr [eax + ecx*4 + 8], edx
        inc    dword ptr [eax + 0xc00]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x3dc]
        test    edi, edi
        mov    dword ptr [esp + 8], 0
        je    L_cd55
        mov    esi, dword ptr [edi + 0x17c]
        test    esi, esi
        je    L_cd55
        cmp    esi, -1
        je    L_cd55
        push    1
        push    0
        push    0xd
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        inc    esi
        push    esi
        push    0
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        call    FUN_0041ed40
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [edi + 0x17c], edx
        jmp    L_cd7a
L_cd55:
        push    1
        push    0
        push    0xd
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x14]
        push    eax
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
L_cd7a:
        mov    ecx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx]
        xor    edx, esi
        mov    esi, dword ptr [edx + 0x14]
        push    1
        push    0
        push    0xd
        xor    esi, 0x85739531
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esi + 0x1814]
        mov    edx, dword ptr [esp + 0x30]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        add    esp, 0xc
        add    edx, eax
        pop    edi
        mov    dword ptr [ecx + 0xc00], edx
        pop    esi
        pop    ecx
        ret    
        push    ecx
        push    esi
        push    1
        push    0
        push    0xd
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x18]
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 8]
        push    eax
        mov    dword ptr [esp + 0xc], 0
        call    FUN_0041eb40
        mov    ecx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx]
        xor    edx, esi
        mov    esi, dword ptr [edx + 0x14]
        push    1
        push    0
        push    0xd
        xor    esi, 0x85739531
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esi + 0x1814]
        mov    edx, dword ptr [esp + 0x28]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        add    esp, 0xc
        add    edx, eax
        mov    dword ptr [ecx + 0xc00], edx
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        push    1
        push    0
        push    0xd
        call    FUN_0067f7b0
        add    esp, 0xc
        ret    
    }
}
