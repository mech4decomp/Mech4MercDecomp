/*
 * FUN_005b8427 (extent 0x5b8427-0x5b8796) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dd234;
extern int    g_007f211c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_005b8480(void);
extern void __cdecl FUN_005b89e0(void);
extern void __cdecl FUN_005b8a00(void);
extern void __cdecl FUN_005b8a20(void);
extern void __cdecl FUN_005b8a30(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005b8427(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x178
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8472
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f211c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005b8480
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_8472:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0x58
        mov    eax, dword ptr [esp + 0x68]
        mov    edx, dword ptr [esp + 0x5c]
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x6c]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x70]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov    ecx, esi
        call    FUN_004d9940
        lea    eax, [esp + 0x70]
        push    eax
        lea    ecx, [esp + 0x78]
        xor    ebx, ebx
        push    ecx
        lea    ecx, [esi + 0x170]
        mov    dword ptr [esi + 0x168], ebx
        mov    dword ptr [esi + 0x16c], ebx
        mov    dword ptr [esp + 0x78], ebx
        call    FUN_005b89e0
        mov    dx, word ptr [edi + 0x60]
        cmp    dx, word ptr [g_007db0ac]
        mov    cx, word ptr [edi + 0x62]
        lea    eax, [edi + 0x60]
        mov    word ptr [esi + 0x174], 0xffff
        mov    word ptr [esi + 0x176], bx
        mov    dword ptr [esi], 0x786a14
        mov    word ptr [esi + 0x174], dx
        mov    word ptr [esi + 0x176], cx
        jne    L_850f
        cmp    cx, word ptr [g_007db0ae]
        je    L_8783
L_850f:
        push    ebp
        push    1
        push    eax
        lea    ecx, [esp + 0x2c]
        call    FUN_004d1f80
        mov    eax, dword ptr [esp + 0x24]
        push    4
        lea    edx, [esp + 0x7c]
        push    edx
        lea    ecx, [esp + 0x2c]
        call    dword ptr [eax + 0x20]
        mov    edi, dword ptr [esi + 0x170]
        mov    ebx, dword ptr [esi + 0x168]
        mov    ebp, dword ptr [esp + 0x78]
        mov    ecx, edi
        sub    ecx, ebx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        cmp    edx, ebp
        mov    dword ptr [esp + 0x70], ebp
        jae    L_8623
        mov    ecx, dword ptr [esi + 0x16c]
        sub    ecx, ebx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        test    ebx, ebx
        mov    dword ptr [esp + 0x74], edx
        je    L_85df
        test    ebp, ebp
        je    L_8596
        lea    ecx, [ebp + ebp*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    ebp, eax
        jmp    L_8598
L_8596:
        xor    ebp, ebp
L_8598:
        mov    edx, dword ptr [esp + 0x78]
        mov    eax, dword ptr [esi + 0x16c]
        push    edx
        push    ebp
        push    eax
        push    ebx
        call    FUN_005b8a30
        mov    ecx, dword ptr [esi + 0x168]
        sub    edi, ecx
        mov    eax, 0x2aaaaaab
        imul    edi
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        push    edx
        push    ecx
        mov    ebx, ebp
        mov    dword ptr [esp + 0x84], ecx
        call    FUN_005b8a20
        mov    ebp, dword ptr [esp + 0x90]
        add    esp, 0x18
        jmp    L_85fd
L_85df:
        test    ebp, ebp
        je    L_85fb
        lea    ecx, [ebp + ebp*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        mov    ebp, dword ptr [esp + 0x7c]
        add    esp, 4
        mov    ebx, eax
        jmp    L_85fd
L_85fb:
        xor    ebx, ebx
L_85fd:
        mov    eax, dword ptr [esp + 0x74]
        lea    edx, [eax + eax*2]
        lea    eax, [ebx + edx*4]
        mov    dword ptr [esi + 0x16c], eax
        mov    eax, dword ptr [esp + 0x70]
        lea    ecx, [eax + eax*2]
        lea    edx, [ebx + ecx*4]
        mov    dword ptr [esi + 0x168], ebx
        mov    dword ptr [esi + 0x170], edx
L_8623:
        test    ebp, ebp
        mov    dword ptr [esp + 0x70], 0
        jle    L_876e
L_8633:
        mov    edx, dword ptr [esp + 0x24]
        push    0xc
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x2c]
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esi + 0x170]
        mov    ebx, dword ptr [esi + 0x16c]
        cmp    ebx, eax
        mov    dword ptr [esp + 0x10], eax
        je    L_867f
        test    ebx, ebx
        je    L_8671
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebx], eax
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [ebx + 4], ecx
        mov    edx, dword ptr [esp + 0x20]
        mov    dword ptr [ebx + 8], edx
L_8671:
        add    ebx, 0xc
        mov    dword ptr [esi + 0x16c], ebx
        jmp    L_8759
L_867f:
        mov    edi, dword ptr [esi + 0x168]
        mov    ecx, ebx
        sub    ecx, edi
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        cmp    edx, 1
        mov    dword ptr [esp + 0x74], 1
        mov    dword ptr [esp + 0x6c], edx
        lea    eax, [esp + 0x74]
        jb    L_86b2
        lea    eax, [esp + 0x6c]
L_86b2:
        add    edx, dword ptr [eax]
        mov    dword ptr [esp + 0x6c], edx
        je    L_86cf
        lea    ecx, [edx + edx*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x74], eax
        jmp    L_86d7
L_86cf:
        mov    dword ptr [esp + 0x74], 0
L_86d7:
        mov    edx, dword ptr [esp + 0x78]
        mov    eax, dword ptr [esp + 0x74]
        push    edx
        push    eax
        push    ebx
        push    edi
        call    FUN_005b8a30
        mov    ebp, eax
        add    esp, 0x10
        test    ebp, ebp
        je    L_86fd
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, ebp
        call    FUN_0040c5d0
L_86fd:
        mov    edx, dword ptr [esp + 0x78]
        push    edx
        add    ebp, 0xc
        push    ebp
        push    ebx
        push    ebx
        call    FUN_005b8a30
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x20]
        sub    eax, edi
        mov    ecx, eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    esp, 0x10
        add    edx, eax
        push    edx
        push    edi
        mov    dword ptr [esp + 0x1c], edi
        lea    edi, [esi + 0x170]
        mov    ecx, edi
        call    FUN_005b8a00
        mov    ecx, dword ptr [esp + 0x6c]
        mov    eax, dword ptr [esp + 0x74]
        lea    ecx, [ecx + ecx*2]
        lea    edx, [eax + ecx*4]
        mov    dword ptr [esi + 0x168], eax
        mov    dword ptr [esi + 0x16c], ebx
        mov    dword ptr [edi], edx
L_8759:
        mov    eax, dword ptr [esp + 0x70]
        mov    ecx, dword ptr [esp + 0x78]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [esp + 0x70], eax
        jl    L_8633
L_876e:
        lea    ecx, [esp + 0x24]
        call    FUN_004d21c0
        pop    ebp
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        add    esp, 0x58
        ret    0x10
L_8783:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        add    esp, 0x58
        ret    0x10
        nop    
        nop    
        mov    eax, 5
        ret    
    }
}
