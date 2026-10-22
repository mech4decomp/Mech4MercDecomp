/*
 * FUN_00404ac5 (extent 0x404ac5-0x405eda) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b320;
extern int    g_007b21b0;
extern int    g_007b796c;
extern int    g_007b7dc0;
extern int    g_007b7e2c;
extern int    g_007b7e30;
extern int    g_007b7e34;
extern int    g_007b7e38;
extern int    g_007b7e40;
extern char   g_007ddd21;
extern void __cdecl FUN_00401c30(void);
extern void __cdecl FUN_00403ad0(void);
extern void __cdecl FUN_00403eb0(void);
extern void __cdecl FUN_004c91f0(void);
extern void __cdecl FUN_004cbf20(void);
extern void __cdecl FUN_006b45a0(void);
extern void __cdecl FUN_006b46b0(void);
extern void __cdecl FUN_006bbc00(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f8bc0(void);
extern void __cdecl FUN_006f8c30(void);
extern void __cdecl FUN_006f8c70(void);
extern void __cdecl FUN_006f8d40(void);
extern void __cdecl FUN_00701da0(void);
extern void __cdecl FUN_00706c20(void);

__declspec(naked) void FUN_00404ac5(void)
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
        xor    eax, eax
        ret    0xc
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
        call    FUN_006f8c70
        and    eax, 0xff
        ret    0xc
        nop    
        nop    
        nop    
        cmp    dword ptr [esp + 8], 1
        jne    L_4b16
        mov    eax, dword ptr [esp + 0xc]
        mov    eax, dword ptr [eax]
        cmp    eax, -1
        jl    L_4b09
        cmp    eax, 0x270f
        jle    L_4b0b
L_4b09:
        mov    eax, dword ptr [eax]
L_4b0b:
        push    eax
        call    FUN_006f8bc0
        xor    eax, eax
        ret    0xc
L_4b16:
        push    -1
        call    FUN_006f8bc0
        xor    eax, eax
        ret    0xc
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
        call    FUN_006f8c30
        xor    eax, eax
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_006f8d40
        and    eax, 0xff
        ret    0xc
        nop    
        nop    
        nop    
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        mov    eax, dword ptr [g_007b7e34]
        test    eax, eax
        je    L_4ba9
        push    eax
        call    FUN_006f4230
        mov    dword ptr [g_007b7e34], 0
L_4ba9:
        mov    eax, dword ptr [g_007b7e38]
        test    eax, eax
        je    L_4bc2
        push    eax
        call    FUN_006f4230
        mov    dword ptr [g_007b7e38], 0
L_4bc2:
        push    0
        push    0x100
        call    FUN_006f3c80
        push    0
        push    0x100
        mov    dword ptr [g_007b7e34], eax
        mov    byte ptr [eax], 0
        call    FUN_006f3c80
        mov    ecx, dword ptr [g_007b7e2c]
        mov    edx, dword ptr [g_007b7e30]
        push    eax
        mov    dword ptr [g_007b7e38], eax
        mov    byte ptr [eax], 0
        mov    eax, dword ptr [g_007b7e34]
        push    eax
        mov    eax, dword ptr [ecx + edx*4]
        push    eax
        call    FUN_004c91f0
        add    esp, 0xc
        xor    eax, eax
        ret    0xc
        nop    
        nop    
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
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
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [g_007b796c]
        cmp    eax, 5
        jae    L_4d47
        mov    ecx, dword ptr [esi]
        lea    eax, [eax + eax*2]
        push    0x1e
        lea    edx, [eax + eax*4]
        push    ecx
        lea    eax, [edx*2 + 0x7b7970]
        push    eax
        call    dword ptr [g_0076b320]
        mov    eax, dword ptr [g_007b796c]
        lea    eax, [eax + eax*2]
        lea    ecx, [eax + eax*4]
        mov    byte ptr [ecx*2 + 0x7b798d], 0
        mov    edx, dword ptr [g_007b796c]
        inc    edx
        push    0x7b7960
        mov    dword ptr [g_007b796c], edx
        call    FUN_00401c30
        add    esp, 0x10
L_4d47:
        mov    edx, dword ptr [esi]
        push    edx
        call    FUN_00706c20
        pop    esi
        ret    0xc
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
        call    FUN_004cbf20
        mov    eax, dword ptr [esp + 8]
        and    eax, 0xff
        mov    dword ptr [g_007b7dc0], eax
        call    FUN_00701da0
        call    FUN_00403eb0
        call    FUN_00403ad0
        push    0
        push    0x100
        call    FUN_006f3c80
        mov    dword ptr [g_007b7e40], eax
        mov    byte ptr [eax], 0
        mov    al, byte ptr [g_007ddd21]
        test    al, al
        jne    L_5ed5
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x403a30
        push    0x76c598
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x402a00
        push    0x76c588
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x402d30
        push    0x76c574
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x403880
        push    0x76c564
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x402d10
        push    0x76c550
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x403790
        push    0x76c540
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x403a00
        push    0x76c534
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x401e50
        push    0x76c528
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x401140
        push    0x76c518
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x401370
        push    0x76c510
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x4014a0
        push    0x76c500
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x4010a0
        push    0x76c4f4
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x4010b0
        push    0x76c4e0
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x4028d0
        push    0x76c4d0
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x4028e0
        push    0x76c4c0
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x4028f0
        push    0x76c4b0
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x402900
        push    0x76c4a8
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x402d70
        push    0x76c494
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x402e60
        push    0x76c47c
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x4015b0
        push    0x76c464
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x401a10
        push    0x76c44c
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x401e40
        push    0x76c43c
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404840
        push    0x76c420
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x404870
        push    0x76c414
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x404910
        push    0x76c404
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404a40
        push    0x76c3ec
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x4044e0
        push    0x76c3e0
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x4045c0
        push    0x76c3cc
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404480
        push    0x76c3bc
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x4043f0
        push    0x76c3a8
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x404580
        push    0x76c394
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x4045a0
        push    0x76c37c
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x4022d0
        push    0x76c36c
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x402280
        push    0x76c360
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x4022a0
        push    0x76c350
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x402250
        push    0x76c340
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x402660
        push    0x76c330
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x4024d0
        push    0x76c320
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x402230
        push    0x76c310
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x402170
        push    0x76c304
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404cf0
        push    0x76c2f4
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b21b4
        push    0x76c2e4
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7dd8
        push    0x76c2d4
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7de4
        push    0x76c2c4
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7dc4
        push    0x76c2b8
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x7b7c78
        push    0x76c2ac
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b21c4
        push    0x76c298
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7e40
        push    0x76c288
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x858924
        push    0x76c274
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7e44
        push    0x76c260
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7dd0
        push    0x76c254
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x7b7dcc
        push    0x76c244
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7c80
        push    0x76c238
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7c84
        push    0x76c22c
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x7b7e58
        push    0x76c224
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7c70
        push    0x76c218
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7c74
        push    0x76c208
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x7b7c7c
        push    0x76c1fc
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7c88
        push    0x76c1ec
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7c8c
        push    0x76c1e4
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x7b7c90
        push    0x76c1d8
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7c98
        push    0x76c1cc
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7ca0
        push    0x76c1bc
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7ca4
        push    0x76c1b0
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7ca8
        push    0x76c1a0
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7cac
        push    0x76c194
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7cb0
        push    0x76c18c
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7cb4
        push    0x76c17c
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7cb8
        push    0x76c174
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x7b7cbc
        push    0x76c168
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0x14
        push    2
        push    0x7b7ddc
        push    0x76c158
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0x14
        push    2
        push    0x7b7de0
        push    0x76c14c
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x404620
        push    0x76c130
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x403a40
        push    0x76c120
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7df0
        push    0x76c110
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7df4
        push    0x76c100
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7df8
        push    0x76c0ec
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7dfc
        push    0x76c0dc
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7e00
        push    0x76c0d0
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7e04
        push    0x76c0c4
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7e08
        push    0x76c0b0
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7e0c
        push    0x76c0a0
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7e10
        push    0x76c094
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0x14
        push    2
        push    0x7b7e14
        push    0x76c080
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x14
        push    2
        push    0x7b7e18
        push    0x76c06c
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0x14
        push    2
        push    0x7b7e1c
        push    0x76c05c
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0x14
        push    2
        push    0x7b7e20
        push    0x76c050
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7e24
        push    0x76c048
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7e28
        push    0x76c040
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0x14
        push    2
        push    0x7b7e2c
        push    0x76c034
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7e30
        push    0x76c028
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7e34
        push    0x76c01c
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7e38
        push    0x76c010
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x7b7e3c
        push    0x76bff8
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x8589cc
        push    0x76bfe4
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7e78
        push    0x76bfcc
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x8589b4
        push    0x76bfbc
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7e48
        push    0x76bfb4
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7e4c
        push    0x76bfac
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7e50
        push    0x76bfa4
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7e54
        push    0x76bf9c
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b21b8
        push    0x76bf8c
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b21bc
        push    0x76bf7c
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7e5c
        push    0x76bf6c
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7e60
        push    0x76bf60
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b21c0
        push    0x76bf50
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7e64
        push    0x76bf40
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7e68
        push    0x76bf34
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    2
        push    0x7b7e6c
        push    0x76bf24
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    2
        push    0x7b7e70
        push    0x76bf18
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    2
        push    0x7b7e74
        push    0x76bf10
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x14
        push    2
        push    0x7b7e7c
        push    0x76bf08
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404920
        push    0x76bf00
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x404ab0
        push    0x76bef8
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x404ac0
        push    0x76bef0
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404ad0
        push    0x76bee8
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x404ae0
        push    0x76bed8
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x404af0
        push    0x76bec8
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404b30
        push    0x76beb8
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x404b40
        push    0x76bea4
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x404b50
        push    0x76be9c
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404b60
        push    0x76be94
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x404b70
        push    0x76be8c
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x404b80
        push    0x76be84
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x404b90
        push    0x76be7c
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7b68
        push    0x76be70
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x7b7b6c
        push    0x76be64
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x406480
        push    0x76be54
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x406270
        push    0x76be48
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x4060d0
        push    0x76be38
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x4065d0
        push    0x76be2c
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x406700
        push    0x76be20
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x406760
        push    0x76be10
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x406770
        push    0x76be00
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x406780
        push    0x76bdf0
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x4067a0
        push    0x76bde0
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x4067f0
        push    0x76bdd4
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x4067b0
        push    0x76bdc4
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x4067d0
        push    0x76bdb0
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x406810
        push    0x76bd98
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x406820
        push    0x76bd88
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x406840
        push    0x76bd74
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7e80
        push    0x76bd60
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b21c8
        push    0x76bd50
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x32
        push    2
        push    0x7b7e8c
        push    0x76bd44
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0x32
        push    2
        push    0x7b7e88
        push    0x76bd30
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0x32
        push    2
        push    0x7b7e84
        push    0x76bd18
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x32
        push    2
        push    0x7b7e90
        push    0x76bd08
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7e94
        push    0x76bcf4
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b21cc
        push    0x76bce4
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x64
        push    2
        push    0x7b7e98
        push    0x76bcd4
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7e9c
        push    0x76bcb8
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b21d0
        push    0x76bca0
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x64
        push    2
        push    0x7b7ea0
        push    0x76bc8c
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x7b7ea4
        push    0x76bc7c
        call    FUN_006b45a0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x7b7ea8
        push    0x76bc6c
        call    FUN_006b45a0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0x64
        push    2
        push    0x7b7eac
        push    0x76bc5c
        call    FUN_006b45a0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x406860
        push    0x76bc50
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x406870
        push    0x76bc40
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x406880
        push    0x76bc30
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x406890
        push    0x76bc1c
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x4068e0
        push    0x76bc08
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x406900
        push    0x76bbf4
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x406910
        push    0x76bbdc
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x406920
        push    0x76bbc4
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x406930
        push    0x76bbb0
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x406940
        push    0x76bb9c
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0
        push    1
        push    0x406950
        push    0x76bb88
        call    FUN_006b46b0
        mov    ecx, dword ptr [g_007b21b0]
        push    ecx
        push    0
        push    1
        push    0x406a40
        push    0x76bb74
        call    FUN_006b46b0
        mov    edx, dword ptr [g_007b21b0]
        push    edx
        push    0
        push    1
        push    0x406aa0
        push    0x76bb64
        call    FUN_006b46b0
        mov    eax, dword ptr [g_007b21b0]
        push    eax
        push    0x1200
        push    0x76bb24
        call    FUN_006bbc00
        push    0
        push    0x1700
        push    0x76bafc
        call    FUN_006bbc00
L_5ed5:
        mov    al, 1
        ret    8
    }
}
