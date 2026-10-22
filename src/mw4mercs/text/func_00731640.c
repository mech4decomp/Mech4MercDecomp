/*
 * FUN_00731640 (extent 0x731640-0x731a4b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b060;
extern int    g_0076b064;
extern int    g_0076b068;
extern int    g_0076b074;
extern int    g_0076b078;
extern int    g_0076b300;
extern float  g_0076dd60;
extern int    g_008492fc;
extern int    g_00858c00;
extern float  g_008816b0;
extern float  g_008816b8;
extern float  g_008816bc;
extern float  g_008816c0;
extern int    g_008816d0;
extern int    g_008816d8;
extern int    g_008816e0;
extern char   g_008816e5;
extern int    g_00896c88;
extern int    g_008a9974;
extern int    g_008a9978;
extern int    g_008a997c;
extern char   g_008a9980;
extern char   g_008a9981;
extern int    g_008bc00c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_00731c80(void);
extern void __cdecl FUN_00732870(void);
extern void __cdecl FUN_00732a20(void);
extern void __cdecl FUN_00735310(void);
extern void __cdecl FUN_00735350(void);
extern void __cdecl FUN_00758a20(void);
extern void __cdecl FUN_00758b90(void);
extern void __cdecl FUN_00758ca0(void);
extern void __cdecl FUN_00758cd0(void);
extern void __cdecl FUN_00759610(void);

__declspec(naked) void FUN_00731640(void)
{
    __asm {
        mov    eax, dword ptr [g_00896c88]
        test    eax, eax
        je    L_1657
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_0072d830
        ret    8
L_1657:
        mov    eax, dword ptr [esp + 8]
        ret    8
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        xor    ebx, ebx
        cmp    ebp, ebx
        push    esi
        push    edi
        je    L_1a41
        cmp    byte ptr [ebp], bl
        je    L_1a41
        mov    esi, dword ptr [g_008bc00c]
        cmp    esi, ebx
        mov    byte ptr [g_008a9981], 1
        mov    byte ptr [g_008a9980], bl
        je    L_1708
        mov    edi, dword ptr [g_0076b300]
L_169b:
        fild    dword ptr [g_008816c0]
        fcomp    dword ptr [esi + 0x2c]
        fnstsw  ax
        test    ah, 0x40
        je    L_1701
        fild    dword ptr [g_008816bc]
        fcomp    dword ptr [esi + 0x30]
        fnstsw  ax
        test    ah, 0x40
        je    L_1701
        mov    al, byte ptr [esi + 0x2054]
        cmp    al, byte ptr [g_008816e5]
        jne    L_1701
        cmp    byte ptr [esi + 0x204d], bl
        je    L_16dc
        mov    ecx, dword ptr [esi + 0x14]
        cmp    ecx, dword ptr [g_008816d0]
        jne    L_1701
L_16dc:
        fld    dword ptr [esi + 0x2050]
        fcomp    dword ptr [g_008816d8]
        fnstsw  ax
        test    ah, 0x40
        je    L_1701
        lea    edx, [esi + 0x4c]
        push    edx
        push    ebp
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_1791
L_1701:
        mov    esi, dword ptr [esi + 0x24]
        cmp    esi, ebx
        jne    L_169b
L_1708:
        mov    eax, dword ptr [g_008816c0]
        mov    ecx, dword ptr [g_008816bc]
        mov    edx, dword ptr [g_00858c00]
        mov    dword ptr [esp + 0x10], eax
        lea    eax, [esp + 0x14]
        mov    dword ptr [esp + 0x18], ecx
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        push    ebp
        mov    dword ptr [g_008a997c], edx
        mov    dword ptr [g_008a9978], ebx
        mov    dword ptr [esp + 0x2c], ebx
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00732a20
        mov    eax, dword ptr [g_008816e0]
        cmp    eax, 1
        je    L_1819
        jbe    L_1841
        cmp    eax, 3
        ja    L_1841
        fld    dword ptr [g_008816b0]
        fsub    dword ptr [g_008816b8]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x20]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        mov    dword ptr [esp + 0x20], edx
        jmp    L_1841
L_1791:
        cmp    byte ptr [esi + 0x204d], bl
        jne    L_17ae
        mov    eax, dword ptr [g_008816d0]
        cmp    eax, dword ptr [esi + 0x2058]
        je    L_17ae
        push    eax
        mov    ecx, esi
        call    FUN_00758ca0
L_17ae:
        mov    ecx, esi
        call    FUN_00758b90
        mov    eax, dword ptr [esi + 0x2058]
        push    eax
        mov    ecx, esi
        call    FUN_00758ca0
        fld    dword ptr [esi + 0x3c]
        fadd    dword ptr [g_0076dd60]
        pop    edi
        mov    byte ptr [g_008a9981], bl
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esi + 0x40]
        mov    ecx, dword ptr [esp + 0xc]
        fadd    dword ptr [g_0076dd60]
        and    ecx, 0x7fffff
        pop    esi
        fstp    dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x18]
        sub    ecx, 0x400000
        and    edx, 0x7fffff
        sub    edx, 0x400000
        pop    ebp
        mov    dword ptr [g_008816c0], ecx
        mov    dword ptr [g_008816bc], edx
        pop    ebx
        add    esp, 0xc
        ret    4
L_1819:
        fld    dword ptr [g_008816b0]
        fsub    dword ptr [g_008816b8]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x20]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        mov    dword ptr [esp + 0x20], eax
L_1841:
        push    ebp
        call    FUN_00732870
        mov    ecx, dword ptr [g_008a9978]
        mov    edx, dword ptr [g_008a997c]
        mov    edi, dword ptr [g_0076b068]
        push    ecx
        push    edx
        call    edi
        mov    eax, dword ptr [g_008492fc]
        push    eax
        push    0x205c
        call    FUN_004084c0
        add    esp, 8
        cmp    eax, ebx
        je    L_1893
        mov    edx, dword ptr [esp + 0x14]
        xor    ecx, ecx
        mov    cl, byte ptr [g_008a9980]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    edx
        push    ecx
        push    ebp
        mov    ecx, eax
        call    FUN_00758a20
        mov    esi, eax
        jmp    L_1895
L_1893:
        xor    esi, esi
L_1895:
        fild    dword ptr [g_008816c0]
        mov    al, byte ptr [g_008816e5]
        mov    edx, dword ptr [g_008816d8]
        mov    ecx, dword ptr [g_008816d0]
        fstp    dword ptr [esi + 0x2c]
        mov    byte ptr [esi + 0x2054], al
        fild    dword ptr [g_008816bc]
        mov    eax, dword ptr [esi + 0x1c]
        cmp    eax, ebx
        mov    dword ptr [esi + 0x2050], edx
        fstp    dword ptr [esi + 0x30]
        mov    dword ptr [esi + 0x2058], ecx
        mov    dword ptr [esi + 0x34], ebx
        mov    dword ptr [esi + 0x38], ebx
        je    L_19ee
        mov    edx, dword ptr [eax + 0xc]
        push    0x8a997c
        push    edx
        call    FUN_00735310
        mov    eax, dword ptr [g_008a9974]
        mov    ecx, dword ptr [g_008a997c]
        push    eax
        push    ecx
        call    edi
        mov    edx, dword ptr [g_008a997c]
        push    ebx
        push    edx
        mov    dword ptr [g_008a9978], eax
        call    dword ptr [g_0076b064]
        mov    eax, dword ptr [g_008a997c]
        push    1
        push    eax
        call    dword ptr [g_0076b060]
        cmp    byte ptr [g_008a9980], bl
        je    L_1950
        mov    eax, dword ptr [g_008816d0]
        test    eax, 0xffffff
        jne    L_1934
        push    0x10101
        jmp    L_1955
L_1934:
        xor    edx, edx
        mov    dl, ah
        mov    dh, al
        shr    eax, 0x10
        and    eax, 0xff
        shl    edx, 8
        or    edx, eax
        mov    eax, dword ptr [g_008a997c]
        push    edx
        push    eax
        jmp    L_195c
L_1950:
        push    0xffffff
L_1955:
        mov    ecx, dword ptr [g_008a997c]
        push    ecx
L_195c:
        call    dword ptr [g_0076b078]
        push    esi
        push    ebp
        call    FUN_00731c80
        mov    edx, dword ptr [g_008a9978]
        mov    eax, dword ptr [g_008a997c]
        push    edx
        push    eax
        call    edi
        mov    ecx, dword ptr [g_008a997c]
        mov    edx, dword ptr [esi + 0x1c]
        mov    eax, dword ptr [edx + 0xc]
        push    ecx
        push    eax
        call    FUN_00735350
        mov    ecx, esi
        call    FUN_00758cd0
        fild    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_008816b8]
        fnstsw  ax
        test    ah, 1
        je    L_19ca
        fld    dword ptr [g_008816b8]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x10]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        mov    dword ptr [g_008816c0], eax
        mov    dword ptr [esp + 0x10], eax
L_19ca:
        fild    dword ptr [esp + 0x18]
        push    ecx
        fiadd    dword ptr [esi + 0x38]
        __emit 0xD9  // fstp dword ptr [esp] - ref uses no-disp SIB form D9 1C 24
        __emit 0x1C
        __emit 0x24
        push    ecx
        fild    dword ptr [esi + 0x34]
        mov    ecx, esi
        fiadd    dword ptr [esp + 0x18]
        __emit 0xD9  // fstp dword ptr [esp] - ref uses no-disp SIB form D9 1C 24
        __emit 0x1C
        __emit 0x24
        call    FUN_00759610
        mov    ecx, esi
        call    FUN_00758b90
L_19ee:
        mov    ecx, dword ptr [g_008a9974]
        push    ecx
        call    dword ptr [g_0076b074]
        mov    edi, dword ptr [g_008816c0]
        mov    edx, dword ptr [esi + 0x34]
        mov    ecx, dword ptr [g_008816bc]
        mov    eax, dword ptr [esi + 0x38]
        add    edi, edx
        mov    dword ptr [g_008816c0], edi
        fild    dword ptr [g_008816c0]
        add    ecx, eax
        mov    dword ptr [g_008816bc], ecx
        fstp    dword ptr [esi + 0x3c]
        mov    dword ptr [g_008a9974], ebx
        fild    dword ptr [g_008816bc]
        mov    byte ptr [g_008a9981], bl
        mov    dword ptr [g_008a997c], ebx
        fstp    dword ptr [esi + 0x40]
L_1a41:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    4
        nop
        nop
    }
}
