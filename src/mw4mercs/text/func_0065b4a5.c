/*
 * FUN_0065b4a5 (extent 0x65b4a5-0x65b6e9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f23b0;
extern int    g_007f25c0;
extern int    g_007f268c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0065ab00(void);
extern void __cdecl FUN_0065ab50(void);
extern void __cdecl FUN_0065acd0(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_0065b4a5(void)
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
        push    ecx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x14]
        test    eax, eax
        jne    L_b4c0
        mov    al, 1
        pop    esi
        pop    ecx
        ret    
L_b4c0:
        mov    eax, dword ptr [eax + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        jne    L_b50f
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x2c]
        test    al, al
        je    L_b50a
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [esp + 4]
        push    eax
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    7
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_b50a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_b50a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_b50a:
        mov    al, 1
        pop    esi
        pop    ecx
        ret    
L_b50f:
        xor    al, al
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
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_b563
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esi + 4]
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    4
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_b563
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_b563
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_b563:
        mov    edi, dword ptr [esi + 4]
        push    1
        push    edi
        call    FUN_0065ab00
        mov    eax, dword ptr [g_007f25c0]
        mov    ebx, dword ptr [esi + 8]
        mov    ecx, dword ptr [ebx + 4]
        add    esp, 8
        push    eax
        mov    byte ptr [edi + 0x614], 0
        mov    dword ptr [esi + 0x14], 0
        call    FUN_00415230
        cmp    al, 1
        jne    L_b5e8
        mov    eax, dword ptr [ebx + 0x3b0]
        test    eax, eax
        je    L_b5e8
        lea    ebp, [eax + 0x6a0]
        mov    ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        je    L_b5e8
        mov    ecx, ebp
        call    FUN_0041fd80
        mov    ebp, eax
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_b5e8
        test    dword ptr [edi + 0x4e0], 0xfffffffc
        je    L_b5e5
        lea    ecx, [edi + 0x1c8]
        call    FUN_0041fd80
        cmp    eax, ebp
        je    L_b5e8
L_b5e5:
        mov    dword ptr [esi + 0x14], ebp
L_b5e8:
        mov    eax, dword ptr [esi + 0x14]
        test    eax, eax
        jne    L_b619
        mov    ebx, dword ptr [ebx + 0x2fc]
        test    ebx, ebx
        je    L_b619
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_b619
        lea    ecx, [ebx + 0x1c8]
        call    FUN_0041fd80
        mov    dword ptr [esi + 0x14], eax
L_b619:
        mov    edx, dword ptr [esi + 0xc]
        mov    eax, dword ptr [esi + 0x14]
        push    edx
        push    eax
        push    edi
        call    FUN_0065ab50
        add    esp, 0xc
        pop    edi
        mov    dword ptr [esi + 0x14], eax
        pop    esi
        pop    ebp
        pop    ebx
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
        sub    esp, 0xc
        test    eax, eax
        je    L_b69b
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_b69b
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
L_b69b:
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
        je    L_b6e6
        mov    eax, dword ptr [eax + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_b6e6
        xor    al, al
        ret    
L_b6e6:
        mov    al, 1
        ret    
    }
}
