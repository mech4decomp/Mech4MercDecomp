/*
 * FUN_0065bd16 (extent 0x65bd16-0x65bec2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00794cb0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_0065bd16(void)
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_be60
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    4
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_be60
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_be60
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_be60:
        mov    esi, dword ptr [esi + 4]
        push    1
        mov    ecx, esi
        call    FUN_005c1720
        mov    byte ptr [esi + 0x614], 1
        pop    esi
        pop    ecx
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
        mov    dl, byte ptr [ecx + 0x14]
        mov    ecx, dword ptr [ecx + 4]
        mov    al, 1
        cmp    dl, al
        mov    dl, byte ptr [ecx + 0x2f2]
        jne    L_beb1
        cmp    dl, al
        jne    L_bec1
        mov    dl, byte ptr [ecx + 0x2f9]
        test    dl, dl
        je    L_bebf
        ret    
L_beb1:
        cmp    dl, al
        jne    L_bebf
        mov    dl, byte ptr [ecx + 0x2f9]
        test    dl, dl
        je    L_bec1
L_bebf:
        xor    al, al
L_bec1:
        ret    
    }
}
