/*
 * FUN_0056cd5e (extent 0x56cd5e-0x56d1c0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f24d8;
extern int    g_007f268c;
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
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_0056cf00(void);
extern void __cdecl FUN_005805c0(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_00580d50(void);
extern void __cdecl FUN_00581350(void);
extern void __cdecl FUN_005dbe50(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0056cd5e(void)
{
    __asm {
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
        mov    edx, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        add    edx, 0xa000
        cmp    esi, edx
        jb    L_cd9c
        push    0
        call    FUN_00563060
        add    esp, 4
L_cd9c:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 0
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
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
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_ce17
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_ce17
        push    0x780260
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ce17
        int 3    
L_ce17:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_cec5
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_ce88
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_ce5d
        push    0x780234
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ce5d
        int 3    
L_ce5d:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_ce88
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_ce88
        push    0x780208
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ce88
        int 3    
L_ce88:
        push    edi
        mov    ecx, esi
        call    FUN_005dbe50
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_cebb
        push    0
        call    FUN_00563060
        add    esp, 4
L_cebb:
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        ret    
L_cec5:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_ceec
        push    0
        call    FUN_00563060
        add    esp, 4
L_ceec:
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [esi], 0
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x14
        push    ebx
        push    esi
        push    edi
        lea    eax, [ebp - 8]
        push    eax
        lea    ecx, [ebp - 1]
        xor    ebx, ebx
        push    ecx
        lea    ecx, [ebp - 0xc]
        mov    dword ptr [ebp - 0x14], ebx
        mov    dword ptr [ebp - 0x10], ebx
        mov    dword ptr [ebp - 8], ebx
        call    FUN_005805c0
        mov    esi, dword ptr [ebp + 8]
        test    esi, 0xf00000
        je    L_cf47
        lea    edx, [ebp - 0x14]
        push    edx
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_d031
L_cf47:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_d031
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    ebx, eax
        mov    ecx, ebx
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, ebx
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_d02f
L_cf81:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [edi]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_d01c
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_d01c
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_d01c
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_d01c
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_d01c
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_d01c
        mov    eax, dword ptr [ebp - 0x10]
        cmp    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp + 8], esi
        je    L_d00d
        lea    ecx, [ebp + 8]
        push    ecx
        push    eax
        call    FUN_00581350
        mov    eax, dword ptr [ebp - 0x10]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [ebp - 0x10], eax
        jmp    L_d01c
L_d00d:
        push    1
        lea    edx, [ebp + 8]
        push    edx
        push    eax
        lea    ecx, [ebp - 0x14]
        call    FUN_00580d50
L_d01c:
        mov    ecx, ebx
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_cf81
L_d02f:
        xor    ebx, ebx
L_d031:
        mov    esi, dword ptr [ebp - 0x14]
        cmp    esi, dword ptr [ebp - 0x10]
        je    L_d084
        mov    edi, dword ptr [ebp + 0xc]
L_d03c:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d069
        mov    eax, dword ptr [esi]
        mov    cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        je    L_d069
        push    0x780288
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d069
        int 3    
L_d069:
        mov    eax, dword ptr [esi]
        mov    dword ptr [eax + 0x184], edi
        mov    dword ptr [eax + 0x1b4], edi
        mov    eax, dword ptr [ebp - 0x10]
        add    esi, 4
        cmp    esi, eax
        jne    L_d03c
        mov    esi, dword ptr [ebp - 0x14]
L_d084:
        cmp    esi, ebx
        je    L_d091
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_d091:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
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
    }
}
