/*
 * FUN_0056d098 (extent 0x56d098-0x56d560) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f23d8;
extern int    g_007f25c0;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566b00(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_0056cf00(void);
extern void __cdecl FUN_0056d1c0(void);
extern void __cdecl FUN_005810a0(void);
extern void __cdecl FUN_00581210(void);
extern void __cdecl FUN_005dbb00(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0056d098(void)
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
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d13f
        test    esi, esi
        jge    L_d119
        push    0x78031c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d119
        int 3    
L_d119:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d13f
        cmp    esi, 0x64
        jle    L_d13f
        push    0x7802ec
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d13f
        int 3    
L_d13f:
        push    edi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_d161
        push    esi
        push    edi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0056cf00
        add    esp, 8
        jmp    L_d1a7
L_d161:
        push    edi
        call    FUN_005669d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_d1a7
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d19b
        mov    al, byte ptr [edi + 0x2f9]
        test    al, al
        je    L_d19b
        push    0x7802c0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d19b
        int 3    
L_d19b:
        mov    dword ptr [edi + 0x184], esi
        mov    dword ptr [edi + 0x1b4], esi
L_d1a7:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        sub    esp, 0xc
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        je    L_d203
        lea    eax, [esp + 0xc]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_005810a0
        add    esp, 8
        jmp    L_d2eb
L_d203:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_d2eb
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    ebp, eax
        mov    ecx, ebp
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, ebp
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_d2eb
L_d23d:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [edi]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_d2d8
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_d2d8
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_d2d8
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_d2d8
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_d2d8
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_d2d8
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], esi
        je    L_d2c7
        test    eax, eax
        je    L_d2be
        mov    dword ptr [eax], esi
        mov    eax, dword ptr [esp + 0x10]
L_d2be:
        add    eax, 4
        mov    dword ptr [esp + 0x10], eax
        jmp    L_d2d8
L_d2c7:
        push    1
        lea    ecx, [esp + 0x20]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00581210
L_d2d8:
        mov    ecx, ebp
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_d23d
L_d2eb:
        mov    esi, dword ptr [esp + 0xc]
        cmp    esi, dword ptr [esp + 0x10]
        je    L_d30e
L_d2f5:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x1c4]
        mov    eax, dword ptr [esp + 0x10]
        add    esi, 4
        cmp    esi, eax
        jne    L_d2f5
        mov    esi, dword ptr [esp + 0xc]
L_d30e:
        test    esi, esi
        je    L_d31b
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_d31b:
        pop    edi
        pop    esi
        pop    ebp
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
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
        jne    L_d379
        call    FUN_00566c30
        push    eax
        call    FUN_0056d1c0
        add    esp, 8
        xor    eax, eax
        pop    esi
        ret    
L_d379:
        call    FUN_00566b00
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d3ef
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d3e5
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_d3ba
        push    0x780374
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d3ba
        int 3    
L_d3ba:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d3e5
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_d3e5
        push    0x780348
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d3e5
        int 3    
L_d3e5:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1c4]
L_d3ef:
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005669d0
        add    esp, 4
        mov    ecx, eax
        call    FUN_005dbb00
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
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d4b9
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_d4b9
        push    0x7803a0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d4b9
        int 3    
L_d4b9:
        push    esi
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d516
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_d516
        mov    edx, dword ptr [g_00805928]
        push    ebx
        mov    bl, byte ptr [esi + 0x2f8]
        mov    esi, dword ptr [g_0080592c]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_d50a
        push    0
        call    FUN_00563060
        add    esp, 4
L_d50a:
        xor    eax, eax
        test    bl, bl
        setne    al
        pop    ebx
        mov    dword ptr [esi], eax
        jmp    L_d545
L_d516:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_d53f
        push    0
        call    FUN_00563060
        add    esp, 4
L_d53f:
        mov    dword ptr [esi], 0
L_d545:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
    }
}
