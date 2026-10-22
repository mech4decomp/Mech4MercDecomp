/*
 * FUN_00574bca (extent 0x574bca-0x575097) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f25b8;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_00574a00(void);
extern void __cdecl FUN_00574e20(void);
extern void __cdecl FUN_00580670(void);
extern void __cdecl FUN_005f2690(void);
extern void __cdecl FUN_0061c190(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0065d1c0(void);
extern void __cdecl FUN_0065d710(void);
extern void __cdecl FUN_0065d750(void);
extern void __cdecl FUN_0065d780(void);
extern void __cdecl FUN_0070eec0(void);

__declspec(naked) void FUN_00574bca(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        sub    esp, 0xc
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_4c49
        push    edi
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_00574a00
        add    esp, 8
        jmp    L_4c99
L_4c49:
        push    esi
        call    FUN_00566b60
        xor    esi, esi
        add    esp, 4
        cmp    eax, esi
        je    L_4c99
        mov    eax, dword ptr [eax + 0x170]
        push    1
        add    eax, 0x30
        push    eax
        push    esi
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], esi
        call    FUN_00580670
        lea    edx, [esp + 8]
        push    edx
        push    edi
        call    FUN_0065d1c0
        mov    eax, dword ptr [esp + 0x10]
        add    esp, 8
        cmp    eax, esi
        je    L_4c99
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4c99:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
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
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_4cd7
        push    1
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d710
L_4cd7:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_4d07
        push    0
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d710
L_4d07:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_4d37
        push    1
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d750
L_4d37:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        je    L_4d67
        push    0
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d750
L_4d67:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        push    1
        call    FUN_0061c190
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        push    0
        call    FUN_0061c190
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
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
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        sub    esp, 0xc
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x18]
        xor    ecx, 0x85739531
        je    L_4ed7
        mov    ecx, dword ptr [g_007f25b8]
        mov    edx, dword ptr [eax + 0x18]
        xor    edx, 0x85739531
        push    ecx
        mov    ecx, dword ptr [edx + 4]
        call    FUN_00415230
        cmp    al, 1
        jne    L_4ed7
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [esp + 0x14]
        push    edi
        xor    ecx, edx
        mov    edi, dword ptr [ecx + 0x18]
        push    0
        lea    edx, [esp + 0xc]
        push    edx
        push    eax
        xor    edi, 0x85739531
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_00566ef0
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        add    esp, 0xc
        cmp    esi, eax
        je    L_4ec9
L_4ead:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx + 0x30]
        push    edx
        mov    ecx, edi
        call    FUN_005f2690
        mov    eax, dword ptr [esp + 0xc]
        add    esi, 4
        cmp    esi, eax
        jne    L_4ead
        mov    esi, dword ptr [esp + 8]
L_4ec9:
        test    esi, esi
        pop    edi
        je    L_4ed7
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_4ed7:
        pop    esi
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
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
        jne    L_4f3f
        call    FUN_00566c30
        push    eax
        call    FUN_00574e20
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 8
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
L_4f3f:
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4fa5
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x18]
        xor    ecx, 0x85739531
        je    L_4fa5
        mov    ecx, dword ptr [g_007f25b8]
        mov    edx, dword ptr [eax + 0x18]
        xor    edx, 0x85739531
        push    ecx
        mov    ecx, dword ptr [edx + 4]
        call    FUN_00415230
        cmp    al, 1
        jne    L_4fa5
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [esi + 0x30]
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0x18]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_005f2690
L_4fa5:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        push    3
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_0070eec0
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        ret    
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
        push    ebx
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        push    1
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_0070eec0
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        test    eax, eax
        setne    bl
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_5072
        push    0
        call    FUN_00563060
        add    esp, 4
L_5072:
        xor    eax, eax
        test    bl, bl
        setne    al
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
    }
}
