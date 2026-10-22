/*
 * FUN_0065bbd6 (extent 0x65bbd6-0x65be13) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00794cb0;
extern int    g_007f25c0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005c5a60(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0065ab00(void);
extern void __cdecl FUN_0065acd0(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_0065bbd6(void)
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
        mov    al, byte ptr [ecx + 0x21]
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
        sub    esp, 0x10
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_bc43
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    4
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_bc43
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_bc43
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_bc43:
        mov    edi, dword ptr [esi + 4]
        push    0
        push    edi
        call    FUN_0065ab00
        mov    eax, dword ptr [g_007f25c0]
        mov    edx, dword ptr [edi + 0x170]
        mov    ecx, dword ptr [edx + 4]
        add    esp, 8
        push    eax
        mov    byte ptr [edi + 0x614], 1
        mov    byte ptr [esi + 0x20], 0
        mov    byte ptr [esi + 0x21], 0
        call    FUN_00415230
        test    al, al
        jne    L_bc7f
        lea    eax, [esp + 0xc]
        push    eax
        jmp    L_bcf8
L_bc7f:
        mov    eax, dword ptr [esi + 8]
        mov    eax, dword ptr [eax + 0x3b0]
        test    eax, eax
        je    L_bcf3
        lea    edi, [eax + 0x6a8]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_bcf3
        mov    ecx, edi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x9c]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0xac]
        fstp    dword ptr [esi + 0x14]
        add    eax, 0x80
        lea    edi, [esi + 0x14]
        mov    eax, ecx
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, edx
        mov    dword ptr [edi + 4], eax
        mov    esi, dword ptr [esi + 4]
        mov    dword ptr [edi + 8], ecx
        push    1
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], edx
        call    FUN_005c1720
        push    edi
        mov    ecx, esi
        call    FUN_005c5a60
        pop    edi
        pop    esi
        add    esp, 0x10
        ret    
L_bcf3:
        lea    edx, [esp + 0xc]
        push    edx
L_bcf8:
        mov    ecx, esi
        call    FUN_0065acd0
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        pop    edi
        mov    dword ptr [esi + 0x14], ecx
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], eax
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
        sub    esp, 0x10
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x20]
        test    al, al
        jne    L_bdd2
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [eax + 0x170]
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        fsub    dword ptr [esi + 0x14]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0xc], edx
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [esi + 0x18]
        mov    dword ptr [esp + 0x10], eax
        fld    dword ptr [esp + 0x10]
        fsub    dword ptr [esi + 0x1c]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00794cb0]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_bdd2
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    byte ptr [esi + 0x20], 1
        call    dword ptr [edx + 0x2c]
        test    al, al
        je    L_bdd2
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [esp + 4]
        push    eax
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    8
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_bdd2
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_bdd2
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_bdd2:
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
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 0x18]
        mov    ecx, dword ptr [ecx + 0x1c]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    byte ptr [ecx + 0x21], 1
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
        xor    al, al
        ret    
    }
}
