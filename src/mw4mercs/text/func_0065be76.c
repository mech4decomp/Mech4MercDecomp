/*
 * FUN_0065be76 (extent 0x65be76-0x65c001) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005c9850(void);
extern void __cdecl FUN_005c98a0(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0065acd0(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_0065be76(void)
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
        push    ecx
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi]
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_bf11
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, dword ptr [edi + 4]
        call    FUN_005dd7a0
        mov    ecx, dword ptr [edi + 0xc]
        push    eax
        push    4
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_bf11
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_bf11
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_bf11:
        mov    esi, dword ptr [edi + 4]
        mov    ecx, esi
        call    FUN_005c98a0
        cmp    al, 1
        jne    L_bf26
        mov    ecx, esi
        call    FUN_005c9850
L_bf26:
        cmp    byte ptr [esi + 0x2f2], 1
        jne    L_bf4b
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_bf4b
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    byte ptr [edi + 0x14], 1
        call    dword ptr [edx + 0x118]
        pop    edi
        pop    esi
        pop    ecx
        ret    
L_bf4b:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        mov    byte ptr [edi + 0x14], 0
        call    dword ptr [eax + 0x11c]
        pop    edi
        pop    esi
        pop    ecx
        ret    
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
        mov    eax, dword ptr [ecx + 0x14]
        test    eax, eax
        je    L_bf86
        mov    eax, dword ptr [eax + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_bf86
        xor    al, al
        ret    
L_bf86:
        mov    al, 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x14]
        sub    esp, 0xc
        test    eax, eax
        je    L_bfdb
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_bfdb
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        fld    dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 8], eax
        fxch    st(1)
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 8]
        fstp    dword ptr [eax]
        mov    dword ptr [eax + 8], ecx
        fstp    dword ptr [eax + 4]
        add    esp, 0xc
        ret    4
L_bfdb:
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        call    FUN_0065acd0
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 4], edx
        mov    eax, ecx
        add    esp, 0xc
        ret    4
    }
}
