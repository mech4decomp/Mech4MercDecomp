/*
 * FUN_005689f1 (extent 0x5689f1-0x568e6d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077f684;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f24d8;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566b90(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_00568790(void);
extern void __cdecl FUN_00568c20(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_005dd280(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00652750(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00568e6d(void);

__declspec(naked) void FUN_005689f1(void)
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        push    esi
        jne    L_8a4d
        call    FUN_00566c30
        push    eax
        call    FUN_00568790
        add    esp, 8
        jmp    L_8bff
L_8a4d:
        call    FUN_005669d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_8bd2
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_8abd
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_8a92
        push    0x77fa14
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8a92
        int 3    
L_8a92:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_8abd
        mov    al, byte ptr [edi + 0x2f9]
        test    al, al
        je    L_8abd
        push    0x77f9f0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8abd
        int 3    
L_8abd:
        cmp    byte ptr [edi + 0x2f9], 1
        jne    L_8aee
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_8bf9
        jmp    L_8bef
L_8aee:
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0077f684]
        fld    dword ptr [edi + 0x1d8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_8b81
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        je    L_8b81
        mov    ecx, dword ptr [edi + 0x1d4]
        cmp    ecx, -1
        je    L_8b81
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_8b81
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_8b81
        mov    ecx, dword ptr [edi + 0x170]
        cmp    esi, ecx
        je    L_8b81
        test    ecx, ecx
        je    L_8ba2
        mov    eax, dword ptr [ecx]
        push    ebx
        call    dword ptr [eax + 0x60]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    ebx, eax
        call    dword ptr [edx + 0x60]
        cmp    eax, ebx
        pop    ebx
        jne    L_8ba2
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0xc8]
        cmp    al, 1
        jne    L_8ba2
L_8b81:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_8bf9
        jmp    L_8bef
L_8ba2:
        mov    edi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        mov    esi, dword ptr [esi + 0x30]
        add    edi, 4
        add    edx, 0xa000
        cmp    edi, edx
        mov    dword ptr [g_0080592c], edi
        jb    L_8bce
        push    0
        call    FUN_00563060
        add    esp, 4
L_8bce:
        mov    dword ptr [edi], esi
        jmp    L_8bff
L_8bd2:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_8bf9
L_8bef:
        push    0
        call    FUN_00563060
        add    esp, 4
L_8bf9:
        mov    dword ptr [esi], 0xfffffffe
L_8bff:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_005dd280
        mov    ebx, eax
        xor    esi, esi
        cmp    ebx, esi
        je    L_8cd3
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x17]
        push    ecx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x20], esi
        mov    dword ptr [esp + 0x24], esi
        mov    dword ptr [esp + 0x1c], esi
        call    FUN_00580580
        mov    eax, dword ptr [esp + 0x28]
        push    1
        lea    edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_00566ef0
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x28]
        add    esp, 0xc
        cmp    eax, ecx
        mov    ebp, eax
        je    L_8cc6
L_8c79:
        mov    edi, dword ptr [ebp]
        mov    ecx, dword ptr [edi + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        jne    L_8cb9
        mov    ecx, ebx
        call    FUN_00652750
        mov    esi, dword ptr [eax]
        mov    ecx, ebx
        call    FUN_00652750
        cmp    esi, dword ptr [eax + 4]
        je    L_8cb5
        mov    edi, dword ptr [edi + 0x30]
L_8ca2:
        cmp    dword ptr [esi], edi
        je    L_8ce0
        mov    ecx, ebx
        add    esi, 0xc
        call    FUN_00652750
        cmp    esi, dword ptr [eax + 4]
        jne    L_8ca2
L_8cb5:
        mov    eax, dword ptr [esp + 0x18]
L_8cb9:
        mov    ecx, dword ptr [esp + 0x1c]
        add    ebp, 4
        cmp    ebp, ecx
        jne    L_8c79
        xor    esi, esi
L_8cc6:
        cmp    eax, esi
        je    L_8cd3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8cd3:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xfffffffe
        pop    ebx
        add    esp, 0x14
        ret    
L_8ce0:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov    esi, dword ptr [esi + 4]
        je    L_8cf4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8cf4:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_8d7b
        push    esi
        call    FUN_00566c30
        push    eax
        call    FUN_00568c20
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 8
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_8d74
        push    0
        call    FUN_00563060
        add    esp, 4
L_8d74:
        mov    dword ptr [esi], edi
        jmp    L_8e50
L_8d7b:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_8da9
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_8da9
        push    0x77fa68
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8da9
        int 3    
L_8da9:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_8ddc
        cmp    esi, -1
        jne    L_8ddc
        push    0x77fa38
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8de0
        int 3    
        jmp    L_8de0
L_8ddc:
        test    esi, esi
        je    L_8e21
L_8de0:
        push    esi
        call    FUN_00566b90
        add    esp, 4
        mov    ebx, eax
        call    FUN_005dd280
        mov    edi, eax
        test    edi, edi
        je    L_8e21
        mov    ecx, edi
        call    FUN_00652750
        mov    esi, dword ptr [eax]
        mov    ecx, edi
        call    FUN_00652750
        cmp    esi, dword ptr [eax + 4]
        je    L_8e21
        mov    ebx, dword ptr [ebx + 0x30]
L_8e0e:
        cmp    dword ptr [esi], ebx
        __emit 0x74  // je short FUN_00568e6d - MSVC6 emits rel32 (0f 84) for extern fn; ref uses 74 5b
        __emit 0x5B
        mov    ecx, edi
        add    esi, 0xc
        call    FUN_00652750
        cmp    esi, dword ptr [eax + 4]
        jne    L_8e0e
L_8e21:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_8e4a
        push    0
        call    FUN_00563060
        add    esp, 4
L_8e4a:
        mov    dword ptr [esi], 0xfffffffe
L_8e50:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
    }
}
