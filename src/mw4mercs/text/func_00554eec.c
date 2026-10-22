/*
 * FUN_00554eec (extent 0x554eec-0x555574) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00626950(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_0063d510(void);

__declspec(naked) void FUN_00554eec(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x938]
        test    eax, eax
        je    L_4fb3
        mov    ecx, dword ptr [edi + 0x8dc]
        cmp    ecx, 2
        je    L_4f14
        test    ecx, ecx
        jne    L_4fb3
L_4f14:
        mov    eax, dword ptr [eax + 8]
        test    eax, eax
        je    L_4fb3
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        je    L_4fb3
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_4fb3
        mov    dl, byte ptr [ecx + 0x1a0]
        mov    eax, 1
        test    dl, al
        mov    edx, dword ptr [ecx + 0x1a0]
        push    esi
        je    L_4f61
        and    edx, 0xfffffffe
        lea    esi, [edi + 0x904]
        push    esi
        mov    dword ptr [ecx + 0x1a0], edx
        call    FUN_004154d0
        jmp    L_4f77
L_4f61:
        or    edx, eax
        mov    dword ptr [ecx + 0x1a0], edx
        lea    esi, [edi + 0x904]
        push    ecx
        mov    ecx, esi
        call    FUN_004179b0
L_4f77:
        mov    ecx, dword ptr [edi + 0x93c]
        push    ecx
        call    FUN_004084e0
        push    0xc
        call    FUN_004084d0
        add    esp, 8
        test    eax, eax
        je    L_4faa
        mov    edx, dword ptr [esi]
        mov    dword ptr [eax + 4], esi
        pop    esi
        mov    dword ptr [edi + 0x93c], eax
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x77d13c
        pop    edi
        ret    4
L_4faa:
        xor    eax, eax
        mov    dword ptr [edi + 0x93c], eax
        pop    esi
L_4fb3:
        pop    edi
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
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x938]
        test    ecx, ecx
        je    L_507e
        mov    eax, dword ptr [edi + 0x8dc]
        cmp    eax, 2
        je    L_4fe4
        test    eax, eax
        jne    L_507e
L_4fe4:
        mov    eax, dword ptr [ecx + 8]
        test    eax, eax
        je    L_507e
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        je    L_507e
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_507e
        mov    eax, dword ptr [ecx + 0x1a0]
        mov    edx, eax
        shr    edx, 1
        test    dl, 1
        push    esi
        je    L_502b
        and    eax, 0xfffffffd
        lea    esi, [edi + 0x90c]
        push    esi
        mov    dword ptr [ecx + 0x1a0], eax
        call    FUN_004154d0
        jmp    L_5042
L_502b:
        or    eax, 2
        mov    dword ptr [ecx + 0x1a0], eax
        lea    esi, [edi + 0x90c]
        push    ecx
        mov    ecx, esi
        call    FUN_004179b0
L_5042:
        mov    eax, dword ptr [edi + 0x940]
        push    eax
        call    FUN_004084e0
        push    0xc
        call    FUN_004084d0
        add    esp, 8
        test    eax, eax
        je    L_5075
        mov    ecx, dword ptr [esi]
        mov    dword ptr [eax + 4], esi
        pop    esi
        mov    dword ptr [edi + 0x940], eax
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x77d13c
        pop    edi
        ret    4
L_5075:
        xor    eax, eax
        mov    dword ptr [edi + 0x940], eax
        pop    esi
L_507e:
        pop    edi
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
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x938]
        test    eax, eax
        je    L_514f
        mov    ecx, dword ptr [edi + 0x8dc]
        cmp    ecx, 2
        je    L_50b4
        test    ecx, ecx
        jne    L_514f
L_50b4:
        mov    eax, dword ptr [eax + 8]
        test    eax, eax
        je    L_514f
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        je    L_514f
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_514f
        mov    eax, dword ptr [ecx + 0x1a0]
        mov    edx, eax
        shr    edx, 2
        test    dl, 1
        push    esi
        je    L_50fc
        and    eax, 0xfffffffb
        lea    esi, [edi + 0x914]
        push    esi
        mov    dword ptr [ecx + 0x1a0], eax
        call    FUN_004154d0
        jmp    L_5113
L_50fc:
        or    eax, 4
        mov    dword ptr [ecx + 0x1a0], eax
        lea    esi, [edi + 0x914]
        push    ecx
        mov    ecx, esi
        call    FUN_004179b0
L_5113:
        mov    eax, dword ptr [edi + 0x944]
        push    eax
        call    FUN_004084e0
        push    0xc
        call    FUN_004084d0
        add    esp, 8
        test    eax, eax
        je    L_5146
        mov    ecx, dword ptr [esi]
        mov    dword ptr [eax + 4], esi
        pop    esi
        mov    dword ptr [edi + 0x944], eax
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x77d13c
        pop    edi
        ret    4
L_5146:
        xor    eax, eax
        mov    dword ptr [edi + 0x944], eax
        pop    esi
L_514f:
        pop    edi
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
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x938]
        test    eax, eax
        je    L_521f
        mov    ecx, dword ptr [edi + 0x8dc]
        cmp    ecx, 2
        je    L_5184
        test    ecx, ecx
        jne    L_521f
L_5184:
        mov    eax, dword ptr [eax + 8]
        test    eax, eax
        je    L_521f
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        je    L_521f
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_521f
        mov    eax, dword ptr [ecx + 0x1a0]
        mov    edx, eax
        shr    edx, 3
        test    dl, 1
        push    esi
        je    L_51cc
        and    eax, 0xfffffff7
        lea    esi, [edi + 0x91c]
        push    esi
        mov    dword ptr [ecx + 0x1a0], eax
        call    FUN_004154d0
        jmp    L_51e3
L_51cc:
        or    eax, 8
        mov    dword ptr [ecx + 0x1a0], eax
        lea    esi, [edi + 0x91c]
        push    ecx
        mov    ecx, esi
        call    FUN_004179b0
L_51e3:
        mov    eax, dword ptr [edi + 0x948]
        push    eax
        call    FUN_004084e0
        push    0xc
        call    FUN_004084d0
        add    esp, 8
        test    eax, eax
        je    L_5216
        mov    ecx, dword ptr [esi]
        mov    dword ptr [eax + 4], esi
        pop    esi
        mov    dword ptr [edi + 0x948], eax
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x77d13c
        pop    edi
        ret    4
L_5216:
        xor    eax, eax
        mov    dword ptr [edi + 0x948], eax
        pop    esi
L_521f:
        pop    edi
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
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x938]
        test    eax, eax
        je    L_52ef
        mov    ecx, dword ptr [edi + 0x8dc]
        cmp    ecx, 2
        je    L_5254
        test    ecx, ecx
        jne    L_52ef
L_5254:
        mov    eax, dword ptr [eax + 8]
        test    eax, eax
        je    L_52ef
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        je    L_52ef
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_52ef
        mov    eax, dword ptr [ecx + 0x1a0]
        mov    edx, eax
        shr    edx, 4
        test    dl, 1
        push    esi
        je    L_529c
        and    eax, 0xffffffef
        lea    esi, [edi + 0x924]
        push    esi
        mov    dword ptr [ecx + 0x1a0], eax
        call    FUN_004154d0
        jmp    L_52b3
L_529c:
        or    eax, 0x10
        mov    dword ptr [ecx + 0x1a0], eax
        lea    esi, [edi + 0x924]
        push    ecx
        mov    ecx, esi
        call    FUN_004179b0
L_52b3:
        mov    eax, dword ptr [edi + 0x94c]
        push    eax
        call    FUN_004084e0
        push    0xc
        call    FUN_004084d0
        add    esp, 8
        test    eax, eax
        je    L_52e6
        mov    ecx, dword ptr [esi]
        mov    dword ptr [eax + 4], esi
        pop    esi
        mov    dword ptr [edi + 0x94c], eax
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x77d13c
        pop    edi
        ret    4
L_52e6:
        xor    eax, eax
        mov    dword ptr [edi + 0x94c], eax
        pop    esi
L_52ef:
        pop    edi
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
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x938]
        test    eax, eax
        je    L_53bf
        mov    ecx, dword ptr [edi + 0x8dc]
        cmp    ecx, 2
        je    L_5324
        test    ecx, ecx
        jne    L_53bf
L_5324:
        mov    eax, dword ptr [eax + 8]
        test    eax, eax
        je    L_53bf
        mov    ecx, dword ptr [eax]
        test    ecx, ecx
        je    L_53bf
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_53bf
        mov    eax, dword ptr [ecx + 0x1a0]
        mov    edx, eax
        shr    edx, 5
        test    dl, 1
        push    esi
        je    L_536c
        and    eax, 0xffffffdf
        lea    esi, [edi + 0x92c]
        push    esi
        mov    dword ptr [ecx + 0x1a0], eax
        call    FUN_004154d0
        jmp    L_5383
L_536c:
        or    eax, 0x20
        mov    dword ptr [ecx + 0x1a0], eax
        lea    esi, [edi + 0x92c]
        push    ecx
        mov    ecx, esi
        call    FUN_004179b0
L_5383:
        mov    eax, dword ptr [edi + 0x950]
        push    eax
        call    FUN_004084e0
        push    0xc
        call    FUN_004084d0
        add    esp, 8
        test    eax, eax
        je    L_53b6
        mov    ecx, dword ptr [esi]
        mov    dword ptr [eax + 4], esi
        pop    esi
        mov    dword ptr [edi + 0x950], eax
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x77d13c
        pop    edi
        ret    4
L_53b6:
        xor    eax, eax
        mov    dword ptr [edi + 0x950], eax
        pop    esi
L_53bf:
        pop    edi
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_556e
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_556e
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_556e
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle    L_556e
        cmp    dword ptr [esi + 0x8dc], 2
        jne    L_5485
        mov    esi, dword ptr [esi + 0x938]
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_542f
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esi + 8], eax
L_542f:
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_543b
        cmp    dword ptr [eax], 0
        jne    L_5443
L_543b:
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esi + 8], edx
L_5443:
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x40]
        add    ecx, 0x40
        xor    edx, 0x85739531
        je    L_556e
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        je    L_546f
        mov    eax, dword ptr [esi]
        jmp    L_5471
L_546f:
        xor    eax, eax
L_5471:
        mov    ecx, dword ptr [ecx]
        push    eax
        push    2
        xor    ecx, 0x85739531
        call    FUN_00626950
        pop    esi
        ret    4
L_5485:
        push    ebx
        push    edi
        xor    bl, bl
        xor    edi, edi
L_548b:
        cmp    edi, 6
        jge    L_5534
        mov    ecx, dword ptr [esi + 0x8e0]
        inc    ecx
        mov    eax, ecx
        cmp    eax, 6
        mov    dword ptr [esi + 0x8e0], ecx
        jle    L_54b2
        mov    dword ptr [esi + 0x8e0], 1
L_54b2:
        mov    eax, dword ptr [esi + 0x8e0]
        dec    eax
        cmp    eax, 5
        ja    L_552b
        jmp    dword ptr [eax*4 + 0x555574]
        lea    ecx, [esi + 0x904]
        call    FUN_00417a40
        test    eax, eax
        jbe    L_552b
        jmp    L_5529
        lea    ecx, [esi + 0x90c]
        call    FUN_00417a40
        test    eax, eax
        jbe    L_552b
        jmp    L_5529
        lea    ecx, [esi + 0x914]
        call    FUN_00417a40
        test    eax, eax
        jbe    L_552b
        jmp    L_5529
        lea    ecx, [esi + 0x91c]
        call    FUN_00417a40
        test    eax, eax
        jbe    L_552b
        jmp    L_5529
        lea    ecx, [esi + 0x924]
        call    FUN_00417a40
        test    eax, eax
        jbe    L_552b
        jmp    L_5529
        lea    ecx, [esi + 0x92c]
        call    FUN_00417a40
        test    eax, eax
        jbe    L_552b
L_5529:
        mov    bl, 1
L_552b:
        inc    edi
        test    bl, bl
        je    L_548b
L_5534:
        mov    eax, dword ptr [g_007dab44]
        mov    edi, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, edi
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        pop    edi
        pop    ebx
        je    L_556e
        mov    ecx, dword ptr [eax + 0x40]
        push    0xa
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    edx, dword ptr [esi + 0x8e0]
        push    edx
        mov    ecx, eax
        call    FUN_0063d510
L_556e:
        pop    esi
        ret    4
        mov    edi, edi
        // jump-table data @ 0x00555574 (0 relocated pointers)
    }
}
