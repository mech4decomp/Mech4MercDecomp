/*
 * FUN_004d4f05 (extent 0x4d4f05-0x4d5321) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da9ec;
extern int    g_007db0b8;
extern int    g_007dc12c;
extern int    g_007dc130;
extern int    g_007dc6e0;
extern int    g_00849304;
extern char   g_0087dd0b;
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_004af260(void);
extern void __cdecl FUN_004c8e10(void);
extern void __cdecl FUN_004cc0c0(void);
extern void __cdecl FUN_004cc2f0(void);
extern void __cdecl FUN_004ce960(void);
extern void __cdecl FUN_004d2c60(void);
extern void __cdecl FUN_004d3490(void);
extern void __cdecl FUN_004d36b0(void);
extern void __cdecl FUN_004d5aa0(void);
extern void __cdecl FUN_004d5fd0(void);
extern void __cdecl FUN_004d8d70(void);
extern void __cdecl FUN_004d9050(void);
extern void __cdecl FUN_004dc180(void);
extern void __cdecl FUN_004dd0c0(void);
extern void __cdecl FUN_004dd3c0(void);
extern void __cdecl FUN_004dd4d0(void);
extern void __cdecl FUN_004dd610(void);
extern void __cdecl FUN_004dd700(void);
extern void __cdecl FUN_004dd920(void);
extern void __cdecl FUN_004dfd00(void);
extern void __cdecl FUN_004e0160(void);
extern void __cdecl FUN_004e0350(void);
extern void __cdecl FUN_004e04e0(void);
extern void __cdecl FUN_004e0b40(void);
extern void __cdecl FUN_004e0dd0(void);
extern void __cdecl FUN_004e1a40(void);
extern void __cdecl FUN_004e2c40(void);
extern void __cdecl FUN_004e4670(void);
extern void __cdecl FUN_004e48b0(void);
extern void __cdecl FUN_004e53e0(void);
extern void __cdecl FUN_004e5fe0(void);
extern void __cdecl FUN_004e69e0(void);
extern void __cdecl FUN_004e85e0(void);
extern void __cdecl FUN_004e8e10(void);
extern void __cdecl FUN_004eab20(void);
extern void __cdecl FUN_004eb180(void);
extern void __cdecl FUN_004eb2b0(void);
extern void __cdecl FUN_004eb3a0(void);
extern void __cdecl FUN_004eb9c0(void);
extern void __cdecl FUN_004ebbd0(void);
extern void __cdecl FUN_004ec160(void);
extern void __cdecl FUN_004ec540(void);
extern void __cdecl FUN_004ec940(void);
extern void __cdecl FUN_004ecd40(void);
extern void __cdecl FUN_004ed510(void);
extern void __cdecl FUN_004edbd0(void);
extern void __cdecl FUN_004ee520(void);
extern void __cdecl FUN_004ee8a0(void);
extern void __cdecl FUN_004eefc0(void);
extern void __cdecl FUN_004ef400(void);
extern void __cdecl FUN_004ef710(void);
extern void __cdecl FUN_004efa70(void);
extern void __cdecl FUN_004efc90(void);
extern void __cdecl FUN_004eff30(void);
extern void __cdecl FUN_004f0620(void);
extern void __cdecl FUN_004f0c70(void);
extern void __cdecl FUN_004f0f20(void);
extern void __cdecl FUN_004f1130(void);
extern void __cdecl FUN_004f12d0(void);
extern void __cdecl FUN_004f13e0(void);
extern void __cdecl FUN_004f15d0(void);
extern void __cdecl FUN_004f1660(void);
extern void __cdecl FUN_004f1800(void);
extern void __cdecl FUN_004f1b60(void);
extern void __cdecl FUN_004f1c40(void);
extern void __cdecl FUN_004f20c0(void);
extern void __cdecl FUN_004f2490(void);
extern void __cdecl FUN_004f3200(void);
extern void __cdecl FUN_004f3750(void);
extern void __cdecl FUN_004f3f60(void);
extern void __cdecl FUN_004f4450(void);
extern void __cdecl FUN_004f4840(void);
extern void __cdecl FUN_004f49b0(void);
extern void __cdecl FUN_004f59f0(void);
extern void __cdecl FUN_004f9a10(void);
extern void __cdecl FUN_004fa210(void);
extern void __cdecl FUN_004fa300(void);
extern void __cdecl FUN_004fbc60(void);
extern void __cdecl FUN_004fbdb0(void);
extern void __cdecl FUN_004fd890(void);
extern void __cdecl FUN_004fde20(void);
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004d4f05(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_4f26:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4f4e
        test    cl, cl
        je    L_4f4a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4f4e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4f26
L_4f4a:
        xor    eax, eax
        jmp    L_4f53
L_4f4e:
        sbb    eax, eax
        sbb    eax, -1
L_4f53:
        test    eax, eax
        jne    L_4f5e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_4f5e:
        mov    esi, edi
        mov    eax, ebp
L_4f62:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4f8a
        test    cl, cl
        je    L_4f86
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4f8a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4f62
L_4f86:
        xor    eax, eax
        jmp    L_4f8f
L_4f8a:
        sbb    eax, eax
        sbb    eax, -1
L_4f8f:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
        ret    8
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_4fc5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4fed
        test    cl, cl
        je    L_4fe9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4fed
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4fc5
L_4fe9:
        xor    eax, eax
        jmp    L_4ff2
L_4fed:
        sbb    eax, eax
        sbb    eax, -1
L_4ff2:
        test    eax, eax
        jne    L_4ffd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_4ffd:
        mov    esi, edi
        mov    eax, ebp
L_5001:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_5029
        test    cl, cl
        je    L_5025
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_5029
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_5001
L_5025:
        xor    eax, eax
        jmp    L_502e
L_5029:
        sbb    eax, eax
        sbb    eax, -1
L_502e:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
        ret    8
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
        mov    eax, dword ptr [g_00849304]
        push    esi
        push    edi
        push    eax
        push    0
        push    0x772a70
        call    FUN_006f4710
        push    eax
        push    0
        push    0x772a68
        mov    dword ptr [g_007dc130], eax
        call    FUN_006f4710
        push    eax
        mov    dword ptr [g_007dc12c], eax
        call    FUN_006f4950
        mov    esi, dword ptr [esp + 0xc]
        test    esi, esi
        je    L_50c1
        push    0x76d9ec
        mov    ecx, esi
        call    FUN_0040ecc0
        mov    edi, eax
        test    edi, edi
        je    L_50c1
        push    0
        push    0x7b431c
        push    0x772a5c
        mov    ecx, edi
        call    FUN_00411cb0
        push    0
        push    0x7b4320
        push    0x772a4c
        mov    ecx, edi
        call    FUN_00411cb0
L_50c1:
        call    FUN_004c8e10
        call    FUN_004fde20
        call    FUN_004dd0c0
        call    FUN_004d5aa0
        push    0xa
        push    0x14
        call    FUN_004e0160
        call    FUN_004e0350
        call    FUN_004e04e0
        call    FUN_004e0b40
        call    FUN_004fd890
        call    FUN_004fbdb0
        call    FUN_004dc180
        call    FUN_004fbc60
        call    FUN_004d9050
        call    FUN_004fa210
        call    FUN_004fa300
        push    esi
        call    FUN_004e1a40
        call    FUN_004f9a10
        call    FUN_004f59f0
        call    FUN_004f4840
        call    FUN_004f49b0
        call    FUN_004f4450
        call    FUN_004f3f60
        call    FUN_004e5fe0
        call    FUN_004f3750
        call    FUN_004cc0c0
        call    FUN_004ce960
        call    FUN_004cc2f0
        call    FUN_004d5fd0
        call    FUN_004dd3c0
        call    FUN_004dd4d0
        call    FUN_004dd610
        call    FUN_004dd700
        call    FUN_004dd920
        call    FUN_004f3200
        call    FUN_004d8d70
        push    esi
        call    FUN_004e0dd0
        call    FUN_004f2490
        call    FUN_004d36b0
        call    FUN_004d3490
        call    FUN_004dfd00
        call    FUN_004f20c0
        call    FUN_004f1800
        call    FUN_004f1b60
        call    FUN_004f1c40
        call    FUN_004f1660
        call    FUN_004f13e0
        call    FUN_004f15d0
        call    FUN_004f12d0
        call    FUN_004f1130
        call    FUN_004f0c70
        call    FUN_004f0f20
        call    FUN_004f0620
        call    FUN_004eff30
        call    FUN_004efc90
        call    FUN_004efa70
        call    FUN_004ef710
        call    FUN_004ef400
        call    FUN_004eefc0
        call    FUN_004ee8a0
        call    FUN_004ee520
        call    FUN_004edbd0
        call    FUN_004ed510
        call    FUN_004ecd40
        call    FUN_004ec940
        call    FUN_004ec540
        call    FUN_004ec160
        push    0xa
        push    0x14
        call    FUN_004ebbd0
        call    FUN_004eb9c0
        push    0xa
        push    0x14
        call    FUN_004eb3a0
        call    FUN_004eb2b0
        call    FUN_004eb180
        push    esi
        call    FUN_004eab20
        call    FUN_004e8e10
        call    FUN_004e85e0
        call    FUN_004e2c40
        call    FUN_004e69e0
        push    esi
        call    FUN_004e53e0
        add    esp, 0x28
        call    FUN_004e48b0
        call    FUN_004e4670
        push    0
        push    0
        push    0x4d52a0
        push    0
        push    0x772a30
        call    FUN_0070f090
        push    0
        push    0
        push    0x4d5300
        push    0
        push    0x772a08
        call    FUN_0070f090
        call    FUN_006f49a0
        pop    edi
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
        nop    
        nop    
        mov    ecx, dword ptr [g_007da9ec]
        mov    eax, dword ptr [g_007dc6e0]
        sub    esp, 0x30
        push    esi
        mov    esi, dword ptr [eax + 0x48]
        push    ecx
        call    FUN_006f4950
        push    1
        push    0x772a7c
        lea    ecx, [esp + 0xc]
        call    FUN_0041de80
        lea    edx, [esp + 4]
        push    edx
        call    FUN_004af260
        mov    eax, dword ptr [esi]
        add    esp, 4
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 4]
        call    FUN_006f49a0
        lea    ecx, [esp + 4]
        call    FUN_0041dec0
        pop    esi
        add    esp, 0x30
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
        push    ebx
        mov    bl, byte ptr [g_0087dd0b]
        mov    byte ptr [g_0087dd0b], 0
        mov    ecx, dword ptr [g_007db0b8]
        call    FUN_004d2c60
        mov    byte ptr [g_0087dd0b], bl
        pop    ebx
        ret    
    }
}
