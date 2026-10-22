/*
 * FUN_006aca13 (extent 0x6aca13-0x6acbb0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00786dd0;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_005fbd00(void);
extern void __cdecl FUN_005fbd30(void);
extern void __cdecl FUN_005fbd40(void);

__declspec(naked) void FUN_006aca13(void)
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
        je    L_caa2
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        jne    L_caa4
L_caa2:
        xor    al, al
L_caa4:
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
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x408]
        mov    ecx, dword ptr [eax + 0x5c]
        test    ecx, ecx
        je    L_cad9
        fld    dword ptr [eax + 0x54]
        mov    dword ptr [esp + 4], 1
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_cae1
L_cad9:
        mov    dword ptr [esp + 4], 0
L_cae1:
        push    1
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        call    FUN_0041ec50
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx + 0x1814]
        mov    ecx, dword ptr [esp + 0xc]
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
        nop    
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    esi
        push    1
        lea    eax, [esp + 8]
        push    eax
        mov    dword ptr [esp + 0xc], 0
        call    FUN_0041eb40
        mov    esi, dword ptr [esp + 0xc]
        mov    ecx, esi
        call    FUN_005fbd40
        mov    ecx, dword ptr [esp + 4]
        and    eax, 0xff
        cmp    ecx, eax
        je    L_cb74
        test    ecx, ecx
        mov    ecx, esi
        je    L_cb6f
        call    FUN_005fbd00
        jmp    L_cb74
L_cb6f:
        call    FUN_005fbd30
L_cb74:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esp + 0x20]
        xor    edx, esi
        mov    eax, dword ptr [edx + 0x14]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x1814]
        mov    edx, dword ptr [eax + ecx*4 + 0x848c]
        add    eax, 0x8484
        inc    edx
        mov    dword ptr [eax + ecx*4 + 8], edx
        inc    dword ptr [eax + 0xc00]
        pop    esi
        pop    ecx
        ret    
    }
}
