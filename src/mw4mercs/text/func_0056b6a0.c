/*
 * FUN_0056b6a0 (extent 0x56b6a0-0x56b914) - gen via tools/gen_bigfunc.py.
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
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_00580d50(void);
extern void __cdecl FUN_005dd1d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0056b6a0(void)
{
    __asm {
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
        je    L_b6f9
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_b6f9
        push    0x77ff98
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_b6f9
        int 3    
L_b6f9:
        push    esi
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        je    L_b742
        fld    dword ptr [eax + 0x520]
        push    edi
        call    FUN_0075db4a
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_b73d
        push    0
        call    FUN_00563060
        add    esp, 4
L_b73d:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_b790
L_b742:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_b763
        push    0x77ff5c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_b763
        int 3    
L_b763:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_b78a
        push    0
        call    FUN_00563060
        add    esp, 4
L_b78a:
        mov    dword ptr [esi], 0x64
L_b790:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
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
        sub    esp, 0xc
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        je    L_b7f3
        lea    eax, [esp + 0xc]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_b8db
L_b7f3:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_b8db
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
        je    L_b8db
L_b82d:
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
        je    L_b8c8
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_b8c8
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_b8c8
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_b8c8
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_b8c8
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_b8c8
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], esi
        je    L_b8b7
        test    eax, eax
        je    L_b8ae
        mov    dword ptr [eax], esi
        mov    eax, dword ptr [esp + 0x10]
L_b8ae:
        add    eax, 4
        mov    dword ptr [esp + 0x10], eax
        jmp    L_b8c8
L_b8b7:
        push    1
        lea    ecx, [esp + 0x20]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00580d50
L_b8c8:
        mov    ecx, ebp
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_b82d
L_b8db:
        mov    esi, dword ptr [esp + 0xc]
        cmp    esi, dword ptr [esp + 0x10]
        je    L_b900
        mov    edi, dword ptr [esp + 0x20]
L_b8e9:
        mov    ecx, dword ptr [esi]
        push    edi
        call    FUN_005dd1d0
        mov    eax, dword ptr [esp + 0x10]
        add    esi, 4
        cmp    esi, eax
        jne    L_b8e9
        mov    esi, dword ptr [esp + 0xc]
L_b900:
        test    esi, esi
        je    L_b90d
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_b90d:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0xc
        ret    
    }
}
