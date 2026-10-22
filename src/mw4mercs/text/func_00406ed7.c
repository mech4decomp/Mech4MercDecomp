/*
 * FUN_00406ed7 (extent 0x406ed7-0x407bd8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b320;
extern char   g_007b21f4;
extern char   g_007b4318;
extern char   g_007b4319;
extern int    g_007b46c4;
extern char   g_007b87bc;
extern char   g_007b87bd;
extern int    g_007b87e8;
extern int    g_007b8804;
extern int    g_007b8810;
extern int    g_007da884;
extern int    g_007da920;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0a0;
extern int    g_007db0b8;
extern char   g_007dc10c;
extern int    g_007dc12c;
extern int    g_007dd234;
extern char   g_007ddd1c;
extern int    g_007ddd24;
extern int    g_007ddd28;
extern int    g_007ddd30;
extern char   g_007ddd78;
extern char   g_007ddd79;
extern int    g_00858930;
extern int    g_00858948;
extern int    g_0085894c;
extern char   g_00858954;
extern char   g_00858956;
extern char   g_008589a0;
extern int    g_00858a44;
extern int    g_00858a48;
extern char   g_00859afd;
extern void __cdecl FUN_00401000(void);
extern void __cdecl FUN_00406ac0(void);
extern void __cdecl FUN_00406b60(void);
extern void __cdecl FUN_00406c10(void);
extern void __cdecl FUN_00406d00(void);
extern void __cdecl FUN_00406d50(void);
extern void __cdecl FUN_00406e60(void);
extern void __cdecl FUN_00406eb0(void);
extern void __cdecl FUN_00408410(void);
extern void __cdecl FUN_00408430(void);
extern void __cdecl FUN_00408460(void);
extern void __cdecl FUN_00408470(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00414b80(void);
extern void __cdecl FUN_00414e80(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00421350(void);
extern void __cdecl FUN_00421b90(void);
extern void __cdecl FUN_00493270(void);
extern void __cdecl FUN_00493350(void);
extern void __cdecl FUN_004af0c0(void);
extern void __cdecl FUN_004af160(void);
extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_004cfb20(void);
extern void __cdecl FUN_004cfb80(void);
extern void __cdecl FUN_004d08c0(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_004d45b0(void);
extern void __cdecl FUN_004d5050(void);
extern void __cdecl FUN_004d5330(void);
extern void __cdecl FUN_0050e250(void);
extern void __cdecl FUN_0050e840(void);
extern void __cdecl FUN_0052f5b0(void);
extern void __cdecl FUN_00544fd0(void);
extern void __cdecl FUN_00545190(void);
extern void __cdecl FUN_0054d420(void);
extern void __cdecl FUN_0054d450(void);
extern void __cdecl FUN_00560870(void);
extern void __cdecl FUN_006cf1c0(void);
extern void __cdecl FUN_006cf300(void);
extern void __cdecl FUN_006f0fa0(void);
extern void __cdecl FUN_006f0ff0(void);
extern void __cdecl FUN_006f14d0(void);
extern void __cdecl FUN_006f1650(void);
extern void __cdecl FUN_006f2700(void);
extern void __cdecl FUN_006f2bc0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006fb780(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_007089b0(void);
extern void __cdecl FUN_00709c30(void);
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_0070abe0(void);
extern void __cdecl FUN_0070c960(void);

__declspec(naked) void FUN_00406ed7(void)
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
        mov    al, byte ptr [g_00858954]
        sub    esp, 0xfc
        test    al, al
        je    L_71ae
        call    FUN_00406e60
        test    al, al
        je    L_71ae
        mov    byte ptr [esp + 3], 1
        call    FUN_0070a920
L_6f0a:
        push    0x570
        push    0x64
        push    0x9c40
        push    0x12c0
        call    FUN_00414b80
        push    8
        call    FUN_00415040
        add    esp, 0x14
        cmp    eax, 4
        jge    L_6f34
        mov    eax, 4
L_6f34:
        push    ebp
        xor    ebp, ebp
        cmp    eax, ebp
        push    esi
        jle    L_6f5f
        mov    esi, eax
L_6f3e:
        push    8
        call    FUN_00415040
        mov    ecx, dword ptr [g_007b8810]
        mov    edx, dword ptr [eax*4 + 0x7b21d4]
        add    esp, 4
        push    ecx
        push    edx
        call    FUN_006f3c80
        dec    esi
        jne    L_6f3e
L_6f5f:
        mov    al, byte ptr [g_007b87bd]
        test    al, al
        jne    L_6f6d
        call    FUN_00406eb0
L_6f6d:
        push    ebx
        push    edi
        mov    edi, 1
        push    edi
        push    ebp
        push    0x76c6b4
        lea    ecx, [esp + 0x30]
        call    FUN_0040dca0
        push    0x76c814
        lea    ecx, [esp + 0x28]
        call    FUN_0040ecc0
        mov    esi, eax
        cmp    esi, ebp
        je    L_6fd1
        push    ebp
        lea    eax, [esp + 0x16]
        push    eax
        push    0x76c808
        mov    ecx, esi
        call    FUN_00411ec0
        test    al, al
        je    L_6fd1
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        je    L_6fd1
        push    ebp
        push    0x76c808
        mov    ecx, esi
        call    FUN_00411f20
        lea    ecx, [esp + 0x24]
        call    FUN_0040e4a0
        call    FUN_0070c960
L_6fd1:
        push    0x76c7f4
        lea    ecx, [esp + 0x28]
        call    FUN_0040ecc0
        mov    esi, eax
        cmp    esi, ebp
        je    L_701b
        push    ebp
        push    0x85894c
        push    0x76c7e0
        mov    ecx, esi
        call    FUN_00411cb0
        push    ebp
        push    0x858956
        push    0x76c7d4
        mov    ecx, esi
        call    FUN_00411ec0
        push    ebp
        push    0x858948
        push    0x76c7c8
        mov    ecx, esi
        call    FUN_00411cb0
L_701b:
        push    0x76c7b8
        lea    ecx, [esp + 0x28]
        call    FUN_0040ecc0
        cmp    eax, ebp
        je    L_703f
        push    ebp
        push    0x8589a0
        push    0x76c7a8
        mov    ecx, eax
        call    FUN_00411ec0
L_703f:
        push    0x76c814
        lea    ecx, [esp + 0x28]
        call    FUN_0040ecc0
        mov    esi, eax
        cmp    esi, ebp
        je    L_7089
        push    ebp
        push    0x7b46c4
        push    0x76c798
        mov    ecx, esi
        call    FUN_00411cb0
        push    ebp
        push    0x7ddd78
        push    0x76c788
        mov    ecx, esi
        call    FUN_00411ec0
        push    ebp
        push    0x7ddd79
        push    0x76c774
        mov    ecx, esi
        call    FUN_00411ec0
L_7089:
        push    edi
        push    0x8000
        push    0x200
        push    0x800
        lea    ecx, [esp + 0x34]
        push    0x800
        push    ecx
        call    FUN_00421350
        lea    edx, [esp + 0x3c]
        push    edx
        call    FUN_00493270
        lea    eax, [esp + 0x40]
        push    eax
        call    FUN_004af0c0
        lea    ecx, [esp + 0x44]
        push    ecx
        call    FUN_006cf1c0
        lea    edx, [esp + 0x48]
        push    edx
        call    FUN_004d5050
        push    8
        call    FUN_00415040
        add    esp, 0x2c
        cmp    eax, 4
        jge    L_70e4
        mov    eax, 4
L_70e4:
        cmp    eax, ebp
        jle    L_710b
        mov    esi, eax
L_70ea:
        push    8
        call    FUN_00415040
        mov    ecx, dword ptr [g_007dc12c]
        mov    edx, dword ptr [eax*4 + 0x7b21d4]
        add    esp, 4
        push    ecx
        push    edx
        call    FUN_006f3c80
        dec    esi
        jne    L_70ea
L_710b:
        lea    eax, [esp + 0x24]
        push    eax
        call    FUN_0050e250
        push    8
        call    FUN_00415040
        add    esp, 8
        cmp    eax, 4
        jge    L_7129
        mov    eax, 4
L_7129:
        cmp    eax, ebp
        jle    L_7150
        mov    esi, eax
L_712f:
        push    8
        call    FUN_00415040
        mov    ecx, dword ptr [g_007dd234]
        mov    edx, dword ptr [eax*4 + 0x7b21d4]
        add    esp, 4
        push    ecx
        push    edx
        call    FUN_006f3c80
        dec    esi
        jne    L_712f
L_7150:
        lea    eax, [esp + 0x24]
        push    eax
        call    FUN_00560870
        lea    ecx, [esp + 0x28]
        push    ecx
        call    FUN_0054d420
        lea    edx, [esp + 0x2c]
        push    edx
        call    FUN_0054d450
        mov    al, byte ptr [g_007dc10c]
        add    esp, 0xc
        test    al, al
        je    L_717f
        call    FUN_00401000
L_717f:
        mov    eax, dword ptr [g_007dd234]
        push    eax
        call    FUN_006f4950
        push    0x239df8
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_71b8
        mov    ecx, dword ptr [g_007ddd30]
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_0052f5b0
        mov    esi, eax
        jmp    L_71ba
L_71ae:
        mov    byte ptr [esp + 3], 0
        jmp    L_6f0a
L_71b8:
        xor    esi, esi
L_71ba:
        push    3
        push    esi
        call    FUN_004c8eb0
        mov    edx, dword ptr [esi]
        add    esp, 8
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        push    0x290
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_71e8
        mov    ecx, eax
        call    FUN_006f14d0
        mov    esi, eax
        jmp    L_71ea
L_71e8:
        xor    esi, esi
L_71ea:
        push    9
        push    esi
        call    FUN_004c8eb0
        add    esp, 8
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_006f2700
        push    0x134
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_721b
        mov    ecx, eax
        call    FUN_006f0fa0
        jmp    L_721d
L_721b:
        xor    eax, eax
L_721d:
        push    0xa
        push    eax
        call    FUN_004c8eb0
        mov    eax, dword ptr [g_007ddd24]
        add    esp, 8
        cmp    eax, edi
        jne    L_7274
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    esi, dword ptr [edx + 0xc]
        lea    eax, [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    edi
        push    0x3d
        xor    esi, 0x85739531
        call    dword ptr [eax + 0x34]
        mov    edx, dword ptr [esi]
        push    eax
        push    0x3c
        mov    ecx, esi
        call    dword ptr [edx + 0x34]
        push    eax
        call    FUN_00406c10
        add    esp, 0xc
        jmp    L_7306
L_7274:
        cmp    dword ptr [g_007ddd28], edi
        jne    L_7306
        push    ebp
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        push    0x76c768
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x24], 4
        call    FUN_00708930
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, 2
        je    L_7306
        cmp    eax, 3
        je    L_7306
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        mov    esi, dword ptr [eax + 0xc]
        add    eax, 0xc
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    edi
        push    0x3f
        xor    esi, 0x85739531
        call    dword ptr [edx + 0x34]
        push    eax
        mov    eax, dword ptr [esi]
        push    0x3e
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_00406c10
        add    esp, 0xc
        push    4
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    0x76c768
        mov    dword ptr [esp + 0x24], 2
        call    FUN_007089b0
L_7306:
        mov    al, byte ptr [g_007b21f4]
        test    al, al
        mov    dword ptr [g_007b8804], 0x406d00
        je    L_74d1
        mov    al, byte ptr [g_007b4319]
        test    al, al
        je    L_74d1
        mov    al, byte ptr [g_00859afd]
        test    al, al
        jne    L_74d1
        xor    bl, bl
L_7339:
        mov    edx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x1c], ebp
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x32
        call    dword ptr [edx + 0x34]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412780
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x33
        call    dword ptr [edx + 0x34]
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412780
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        call    FUN_00406ac0
        add    esp, 8
        test    al, al
        jne    L_745c
        mov    edx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x20], ebp
        mov    dword ptr [esp + 0x18], ebp
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x35
        call    dword ptr [edx + 0x34]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00412780
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x36
        call    dword ptr [edx + 0x34]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412780
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        call    FUN_00406b60
        add    esp, 8
        test    al, al
        je    L_7424
        call    FUN_0070c960
L_7424:
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, ebp
        je    L_743f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_743f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_743f:
        mov    eax, dword ptr [esp + 0x20]
        cmp    eax, ebp
        je    L_745e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_745e
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_745e
L_745c:
        mov    bl, 1
L_745e:
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, ebp
        je    L_7479
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7479
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7479:
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, ebp
        je    L_7494
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7494
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7494:
        test    bl, bl
        je    L_7339
        mov    al, byte ptr [g_007b87bc]
        test    al, al
        jne    L_74d1
        mov    bl, 1
        call    FUN_00406d50
        test    al, al
        jne    L_74d1
L_74b0:
        test    bl, bl
        jne    L_74d1
        push    ebp
        call    FUN_00406d00
        mov    bl, al
        add    esp, 4
        test    bl, bl
        jne    L_74c8
        call    FUN_0070c960
L_74c8:
        call    FUN_00406d50
        test    al, al
        je    L_74b0
L_74d1:
        mov    al, byte ptr [g_007b4318]
        test    al, al
        je    L_769d
        push    0xc
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebp
        je    L_7513
        lea    edx, [esp + 0x12]
        push    edx
        mov    ecx, esi
        call    FUN_00408430
        mov    al, byte ptr [esp + 0x12]
        mov    ecx, esi
        mov    dword ptr [esi + 4], ebp
        mov    byte ptr [esi + 8], al
        call    FUN_00408410
        mov    dword ptr [g_007b87e8], esi
        jmp    L_7519
L_7513:
        mov    dword ptr [g_007b87e8], ebp
L_7519:
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebp
        je    L_753e
        mov    ecx, esi
        call    FUN_004cfb20
        mov    dword ptr [esi], 0x76c758
        mov    dword ptr [g_007db0a0], esi
        jmp    L_7544
L_753e:
        mov    dword ptr [g_007db0a0], ebp
L_7544:
        mov    ecx, dword ptr [g_007da920]
        push    ecx
        call    FUN_006f4950
        push    0x70
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_756d
        push    edi
        mov    ecx, eax
        call    FUN_004d45b0
        mov    dword ptr [g_007da884], eax
        jmp    L_7573
L_756d:
        mov    dword ptr [g_007da884], ebp
L_7573:
        call    FUN_006f49a0
        push    ebp
        push    ebp
        push    0x76c73c
        lea    ecx, [esp + 0xc8]
        call    FUN_0040dca0
        lea    ecx, [esp + 0x84]
        call    FUN_00412b30
        mov    ecx, dword ptr [g_007db0a0]
        push    ebp
        push    ebp
        push    -1
        lea    edx, [esp + 0x90]
        push    edx
        push    0x3f
        lea    eax, [esp + 0xd0]
        push    eax
        call    FUN_004d08c0
        mov    ecx, dword ptr [g_007da884]
        cmp    ecx, ebp
        je    L_75c7
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx]
L_75c7:
        mov    esi, dword ptr [g_007db0a0]
        cmp    esi, ebp
        mov    byte ptr [g_007b4318], 0
        je    L_75e8
        mov    ecx, esi
        call    FUN_004cfb80
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_75e8:
        mov    edi, dword ptr [g_007b87e8]
        mov    ebx, dword ptr [edi]
        mov    esi, dword ptr [ebx + 8]
        cmp    esi, ebx
        mov    dword ptr [g_007db0a0], ebp
        je    L_7646
L_75fd:
        mov    ecx, dword ptr [esi + 0x14]
        cmp    ecx, ebp
        je    L_760a
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_760a:
        mov    ecx, dword ptr [esi + 0xc]
        cmp    ecx, ebp
        mov    eax, esi
        je    L_7627
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 8]
        cmp    ecx, ebp
        je    L_7640
L_761c:
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 8]
        cmp    ecx, ebp
        jne    L_761c
        jmp    L_7640
L_7627:
        mov    ecx, dword ptr [esi + 4]
        cmp    esi, dword ptr [ecx + 0xc]
        jne    L_7639
L_762f:
        mov    eax, ecx
        mov    ecx, dword ptr [ecx + 4]
        cmp    eax, dword ptr [ecx + 0xc]
        je    L_762f
L_7639:
        cmp    dword ptr [eax + 0xc], ecx
        je    L_7640
        mov    eax, ecx
L_7640:
        cmp    eax, ebx
        mov    esi, eax
        jne    L_75fd
L_7646:
        cmp    edi, ebp
        je    L_767d
        cmp    dword ptr [edi + 4], ebp
        je    L_766a
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [ecx + 4]
        push    edx
        mov    ecx, edi
        call    FUN_00408470
        mov    eax, dword ptr [edi]
        mov    dword ptr [eax + 8], eax
        mov    dword ptr [eax + 4], ebp
        mov    dword ptr [eax + 0xc], eax
        mov    dword ptr [edi + 4], ebp
L_766a:
        mov    eax, dword ptr [edi]
        push    1
        push    eax
        call    FUN_00408460
        push    edi
        call    FUN_004084e0
        add    esp, 0xc
L_767d:
        lea    ecx, [esp + 0x84]
        mov    dword ptr [g_007b87e8], ebp
        call    FUN_00412b60
        lea    ecx, [esp + 0xbc]
        call    FUN_0040de20
        jmp    L_76b5
L_769d:
        push    0x76c724
        call    FUN_006fc4d0
        test    al, al
        jne    L_76b5
        push    0x76c724
        call    FUN_006fb780
L_76b5:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        je    L_76c2
        call    FUN_0070abe0
L_76c2:
        mov    al, byte ptr [g_007ddd1c]
        test    al, al
        jne    L_778a
        push    ebp
        push    ebp
        push    ebp
        push    0x33
        call    FUN_00704a80
        test    eax, eax
        jne    L_778a
        mov    ecx, dword ptr [g_007dab44]
        mov    edi, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x1c], ebp
        mov    dword ptr [esp + 0x14], ebp
        mov    edx, dword ptr [ecx]
        xor    edx, edi
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0x39
        call    dword ptr [eax + 0x34]
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412780
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0x3a
        call    dword ptr [eax + 0x34]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412780
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x14]
        push    1
        push    ecx
        push    edx
        call    FUN_00406c10
        add    esp, 0xc
        call    FUN_0070c960
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, ebp
        je    L_776f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_776f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_776f:
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, ebp
        je    L_778a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_778a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_778a:
        mov    al, byte ptr [g_007b4319]
        test    al, al
        mov    dword ptr [g_00858a44], 0x4d4300
        mov    dword ptr [g_00858a48], 0x4d43d0
        mov    dword ptr [g_00858930], ebp
        jne    L_77b7
        call    FUN_00709c30
        jmp    L_7867
L_77b7:
        mov    eax, dword ptr [g_007dab44]
        mov    esi, dword ptr [eax]
        mov    ebx, dword ptr [g_007dab40]
        lea    ecx, [esp + 0x74]
        push    ecx
        xor    esi, ebx
        mov    ecx, dword ptr [esi + 0xc]
        xor    ecx, 0x85739531
        call    FUN_00544fd0
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [esi + 0xc]
        push    1
        xor    edx, 0x85739531
        push    ebp
        add    edx, 0x239d44
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [eax + 4]
        push    1
        mov    dword ptr [edx + 4], ecx
        mov    ecx, dword ptr [eax + 8]
        push    0x3f
        push    ebp
        mov    dword ptr [edx + 8], ecx
        mov    eax, dword ptr [eax + 0xc]
        mov    ecx, dword ptr [g_007db0b8]
        push    ebp
        push    0x76c70c
        mov    dword ptr [edx + 0xc], eax
        call    FUN_004d2d00
        mov    ecx, dword ptr [g_007db0b8]
        push    1
        push    ebp
        push    1
        push    0x3f
        push    1
        push    ebp
        push    0x76c6f8
        call    FUN_004d2d00
        mov    ecx, dword ptr [g_007db0b8]
        push    1
        push    ebp
        push    1
        push    0x3f
        push    2
        push    ebp
        push    0x76c6e4
        call    FUN_004d2d00
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        call    FUN_00545190
L_7867:
        push    8
        call    FUN_00415040
        add    esp, 4
        cmp    eax, 4
        pop    edi
        pop    ebx
        jge    L_787d
        mov    eax, 4
L_787d:
        cmp    eax, ebp
        jle    L_78a4
        mov    esi, eax
L_7883:
        push    8
        call    FUN_00415040
        mov    ecx, dword ptr [g_007dd234]
        mov    edx, dword ptr [eax*4 + 0x7b21d4]
        add    esp, 4
        push    ecx
        push    edx
        call    FUN_006f3c80
        dec    esi
        jne    L_7883
L_78a4:
        call    FUN_006f49a0
        lea    ecx, [esp + 0x1c]
        call    FUN_0040de20
        pop    esi
        pop    ebp
        add    esp, 0xfc
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dd234]
        sub    esp, 0x50
        push    esi
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x18]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        je    L_7926
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_7926:
        push    3
        call    FUN_004c8e90
        add    esp, 4
        push    1
        push    0
        push    0x76c6b4
        lea    ecx, [esp + 0x10]
        call    FUN_0040dca0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [g_007dab40]
        lea    ecx, [esp + 4]
        push    ecx
        xor    eax, esi
        mov    ecx, dword ptr [eax + 0x24]
        xor    ecx, 0x85739531
        call    FUN_006f2bc0
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    esi, dword ptr [edx + 0x24]
        xor    esi, 0x85739531
        je    L_798e
        mov    ecx, esi
        call    FUN_006f1650
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_798e:
        push    9
        call    FUN_004c8e90
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    esi, dword ptr [ecx + 0x28]
        add    esp, 4
        xor    esi, 0x85739531
        je    L_79c0
        mov    ecx, esi
        call    FUN_006f0ff0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_79c0:
        push    0xa
        call    FUN_004c8e90
        add    esp, 4
        lea    ecx, [esp + 4]
        call    FUN_0040e4a0
        lea    ecx, [esp + 4]
        call    FUN_0040de20
        mov    esi, dword ptr [g_007db0a0]
        test    esi, esi
        je    L_79f6
        mov    ecx, esi
        call    FUN_004cfb80
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_79f6:
        call    FUN_006f49a0
        push    1
        push    0
        push    0x76c6b4
        lea    ecx, [esp + 0x10]
        call    FUN_0040dca0
        lea    edx, [esp + 4]
        push    edx
        call    FUN_0050e840
        lea    eax, [esp + 8]
        push    eax
        call    FUN_004d5330
        lea    ecx, [esp + 0xc]
        push    ecx
        call    FUN_006cf300
        lea    edx, [esp + 0x10]
        push    edx
        call    FUN_004af160
        lea    eax, [esp + 0x14]
        push    eax
        call    FUN_00493350
        lea    ecx, [esp + 0x18]
        push    ecx
        call    FUN_00421b90
        add    esp, 0x18
        push    0x76c7f4
        lea    ecx, [esp + 8]
        call    FUN_0040eda0
        mov    edx, dword ptr [g_00858948]
        mov    esi, eax
        push    edx
        push    0x76c7c8
        mov    ecx, esi
        call    FUN_00411d10
        mov    eax, dword ptr [g_0085894c]
        push    eax
        push    0x76c7e0
        mov    ecx, esi
        call    FUN_00411d10
        xor    ecx, ecx
        mov    cl, byte ptr [g_00858956]
        push    ecx
        push    0x76c7d4
        mov    ecx, esi
        call    FUN_00411f20
        push    0x76c7b8
        lea    ecx, [esp + 8]
        call    FUN_0040eda0
        xor    edx, edx
        mov    dl, byte ptr [g_008589a0]
        mov    ecx, eax
        push    edx
        push    0x76c7a8
        call    FUN_00411f20
        push    0x76c814
        lea    ecx, [esp + 8]
        call    FUN_0040eda0
        mov    esi, eax
        mov    eax, dword ptr [g_007b46c4]
        push    eax
        push    0x76c798
        mov    ecx, esi
        call    FUN_00411d10
        xor    ecx, ecx
        mov    cl, byte ptr [g_007ddd78]
        push    ecx
        push    0x76c788
        mov    ecx, esi
        call    FUN_00411f20
        xor    edx, edx
        mov    dl, byte ptr [g_007ddd79]
        mov    ecx, esi
        push    edx
        push    0x76c774
        call    FUN_00411f20
        lea    ecx, [esp + 4]
        call    FUN_0040e4a0
        lea    ecx, [esp + 4]
        call    FUN_0040de20
        call    FUN_00414e80
        pop    esi
        add    esp, 0x50
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
        push    ebp
        mov    ebp, esp
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        or    esi, 0xffffffff
        test    edi, edi
        mov    eax, edi
        je    L_7b60
L_7b42:
        mov    cl, byte ptr [eax]
        cmp    cl, 0x2d
        je    L_7b52
        test    cl, cl
        je    L_7b57
        inc    eax
        jne    L_7b42
        jmp    L_7b60
L_7b52:
        sub    eax, edi
        dec    eax
        jmp    L_7b59
L_7b57:
        sub    eax, edi
L_7b59:
        mov    esi, eax
        cmp    esi, -1
        jne    L_7b72
L_7b60:
        push    0x76c858
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7b72
        int 3    
L_7b72:
        mov    al, byte ptr [esi + edi]
        cmp    al, 0x20
        je    L_7b8f
        test    al, al
        je    L_7b8f
        push    0x76c828
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7b8f
        int 3    
L_7b8f:
        xor    eax, eax
        test    esi, esi
        jle    L_7ba0
L_7b95:
        cmp    byte ptr [eax + edi], 0x20
        jne    L_7ba0
        inc    eax
        cmp    eax, esi
        jl    L_7b95
L_7ba0:
        cmp    eax, esi
        jne    L_7bb6
        push    0x76c858
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7bb6
        int 3    
L_7bb6:
        lea    eax, [esi + 1]
        push    eax
        call    FUN_004084d0
        push    esi
        mov    ebx, eax
        push    edi
        push    ebx
        call    dword ptr [g_0076b320]
        add    esp, 0x10
        pop    edi
        mov    byte ptr [ebx + esi], 0
        pop    esi
        mov    eax, ebx
        pop    ebx
        pop    ebp
        ret    
    }
}
