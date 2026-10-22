/*
 * FUN_0065bf5d (extent 0x65bf5d-0x65c0a1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0065ab00(void);
extern void __cdecl FUN_0065ab50(void);
extern void __cdecl FUN_0065acd0(void);
extern void __cdecl FUN_0065ad40(void);
extern void __cdecl FUN_0069eb70(void);

__declspec(naked) void FUN_0065bf5d(void)
{
    __asm {
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
        push    ecx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x2c]
        test    al, al
        je    L_c051
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
        je    L_c051
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_c051
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_c051:
        mov    edi, dword ptr [esi + 4]
        push    1
        push    edi
        call    FUN_0065ab00
        mov    edx, dword ptr [esi]
        add    esp, 8
        mov    ecx, esi
        mov    byte ptr [edi + 0x614], 1
        mov    dword ptr [esi + 0x14], 0
        call    dword ptr [edx + 8]
        push    0x44fa0000
        push    0x3ed
        push    0
        mov    ecx, esi
        call    FUN_0065ad40
        mov    ecx, dword ptr [esi + 0xc]
        mov    edx, dword ptr [esi + 4]
        push    ecx
        push    eax
        push    edx
        call    FUN_0065ab50
        add    esp, 0xc
        pop    edi
        mov    dword ptr [esi + 0x14], eax
        pop    esi
        pop    ecx
        ret    
        nop    
        ret    
    }
}
