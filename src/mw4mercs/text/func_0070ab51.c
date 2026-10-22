/*
 * FUN_0070ab51 (extent 0x70ab51-0x70b12e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2b0;
extern int    g_0076b48c;
extern int    g_0076b490;
extern int    g_0076b494;
extern int    g_0076b498;
extern int    g_0076b49c;
extern int    g_0076b4e4;
extern int    g_0076b56c;
extern int    g_007b73dc;
extern int    g_00858940;
extern int    g_00858944;
extern int    g_00858948;
extern int    g_0085894c;
extern int    g_00858950;
extern char   g_00858954;
extern char   g_00858956;
extern char   g_00858957;
extern char   g_00858958;
extern char   g_0085895a;
extern int    g_00858ab0;
extern int    g_00858bf8;
extern int    g_00859ba4;
extern int    g_0085a098;
extern char   g_0085a0c4;
extern int    g_0085a0d0;
extern int    g_0085a0d4;
extern char   g_0085a1de;
extern int    g_0085a1e0;
extern int    g_0085a1e8;
extern int    g_0085a1ec;
extern int    g_0085a1f0;
extern char   g_0085a208;
extern int    g_0085a22c;
extern int    g_0085a230;
extern char   g_0087dd0a;
extern int    g_00896c88;
extern int    g_008aaec8;
extern int    g_008aaecc;
extern int    g_008aaed4;
extern int    g_008aaed8;
extern int    g_008aaedc;
extern int    g_008aaee0;
extern int    g_008abe50;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_0070b430(void);
extern void __cdecl FUN_0070c540(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_007333b0(void);
extern void __cdecl FUN_007333e0(void);
extern void __cdecl FUN_00734e70(void);
extern void __cdecl FUN_00735150(void);
extern void __cdecl FUN_00735280(void);
extern void __cdecl FUN_0073a250(void);
extern void __cdecl FUN_0073a2e0(void);
extern void __cdecl FUN_00740dc0(void);

__declspec(naked) void FUN_0070ab51(void)
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
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        sub    esp, 0x20
        push    edi
        push    0x1f
        lea    eax, [esp + 8]
        push    eax
        push    ecx
        call    dword ptr [g_0076b49c]
        mov    edx, dword ptr [g_00896c88]
        push    0x406
        push    edx
        call    FUN_0072d830
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        mov    eax, dword ptr [g_00896c88]
        not    ecx
        dec    ecx
        push    ecx
        push    0x406
        push    eax
        call    FUN_0072d830
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        test    eax, eax
        pop    edi
        jne    L_abc8
        mov    dword ptr [g_00859ba4], 1
        add    esp, 0x20
        ret    8
L_abc8:
        mov    eax, 1
        add    esp, 0x20
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x10
        call    FUN_007333e0
        call    FUN_0073a250
        mov    al, byte ptr [g_00858954]
        test    al, al
        jne    L_ac14
        mov    eax, dword ptr [g_00858bf8]
        push    0x85a098
        push    eax
        mov    dword ptr [g_0085a098], 0x2c
        call    dword ptr [g_0076b4e4]
L_ac14:
        push    esi
        xor    esi, esi
        mov    byte ptr [g_0085a208], 1
        mov    dword ptr [g_00858ab0], esi
        call    FUN_0070b430
        mov    eax, dword ptr [g_0085894c]
        cmp    eax, esi
        mov    byte ptr [g_00858954], 1
        mov    byte ptr [g_0085a0c4], 1
        jne    L_ac52
        mov    eax, dword ptr [g_0085a22c]
        push    eax
        mov    dword ptr [g_0085a230], eax
        call    FUN_00740dc0
        jmp    L_ac77
L_ac52:
        mov    ecx, eax
        shl    ecx, 4
        add    ecx, eax
        push    esi
        lea    eax, [eax + ecx*8]
        push    0x7a2d10
        lea    edx, [eax + eax*2]
        push    0x85a230
        lea    eax, [edx*8 + 0x8abe60]
        push    eax
        call    FUN_00734e70
L_ac77:
        mov    ecx, dword ptr [g_008aaec8]
        mov    eax, dword ptr [g_008aaecc]
        cmp    ecx, esi
        setne    cl
        cmp    eax, esi
        mov    byte ptr [g_00858956], cl
        je    L_ac9b
        mov    dword ptr [g_00858948], 0x20
L_ac9b:
        mov    eax, dword ptr [g_007b73dc]
        cmp    eax, esi
        mov    dl, byte ptr [g_0085a1de]
        mov    byte ptr [g_00858958], dl
        je    L_ad62
        mov    ecx, 0x400
        cmp    eax, ecx
        ja    L_ad0d
        je    L_acfa
        mov    ecx, 0x200
        cmp    eax, ecx
        je    L_ace7
        mov    ecx, 0x320
        cmp    eax, ecx
        jne    L_ad1f
        mov    dword ptr [g_00858940], ecx
        mov    dword ptr [g_0085a0d4], ecx
        mov    eax, 0x258
        jmp    L_ad76
L_ace7:
        mov    dword ptr [g_00858940], ecx
        mov    dword ptr [g_0085a0d4], ecx
        mov    eax, 0x180
        jmp    L_ad76
L_acfa:
        mov    dword ptr [g_00858940], ecx
        mov    dword ptr [g_0085a0d4], ecx
        mov    eax, 0x300
        jmp    L_ad76
L_ad0d:
        mov    edx, 0x500
        cmp    eax, edx
        je    L_ad48
        mov    ecx, 0x640
        cmp    eax, ecx
        je    L_ad35
L_ad1f:
        mov    eax, 0x280
        mov    dword ptr [g_00858940], eax
        mov    dword ptr [g_0085a0d4], eax
        mov    eax, 0x1e0
        jmp    L_ad76
L_ad35:
        mov    dword ptr [g_00858940], ecx
        mov    dword ptr [g_0085a0d4], ecx
        mov    eax, 0x4b0
        jmp    L_ad76
L_ad48:
        mov    dword ptr [g_00858940], edx
        mov    dword ptr [g_0085a0d4], edx
        mov    dword ptr [g_00858944], ecx
        mov    dword ptr [g_0085a0d0], ecx
        jmp    L_ad80
L_ad62:
        mov    eax, dword ptr [g_0085a1ec]
        mov    dword ptr [g_00858940], eax
        mov    dword ptr [g_0085a0d4], eax
        mov    eax, dword ptr [g_0085a1e8]
L_ad76:
        mov    dword ptr [g_00858944], eax
        mov    dword ptr [g_0085a0d0], eax
L_ad80:
        cmp    dword ptr [g_008aaed4], esi
        je    L_ad8f
        mov    eax, 3
        jmp    L_adad
L_ad8f:
        cmp    dword ptr [g_008aaedc], esi
        je    L_ad9b
        xor    eax, eax
        jmp    L_adad
L_ad9b:
        cmp    dword ptr [g_008aaed8], esi
        mov    eax, 1
        jne    L_adad
        mov    eax, dword ptr [g_0085a1e0]
L_adad:
        cmp    dword ptr [g_008aaee0], esi
        setne    cl
        cmp    eax, 3
        mov    dword ptr [g_00858950], eax
        mov    byte ptr [g_00858957], cl
        jge    L_adce
        cmp    dword ptr [g_008abe50], esi
        jne    L_add8
L_adce:
        mov    dword ptr [g_00858948], 0x10
L_add8:
        mov    edx, dword ptr [g_00858bf8]
        push    0x90080000
        push    -0x10
        push    edx
        call    dword ptr [g_0076b48c]
        mov    eax, dword ptr [g_00858bf8]
        mov    ecx, dword ptr [g_0085a230]
        push    0x11
        push    eax
        push    ecx
        call    FUN_00735280
        mov    eax, dword ptr [g_0085894c]
        mov    edx, eax
        shl    edx, 4
        add    edx, eax
        lea    eax, [eax + edx*8]
        lea    eax, [eax + eax*2]
        mov    cl, byte ptr [eax*8 + 0x8acb30]
        test    cl, cl
        je    L_ae4c
        mov    ecx, dword ptr [g_00858948]
        mov    edx, dword ptr [g_00858944]
        mov    eax, dword ptr [g_00858940]
        push    esi
        push    esi
        push    ecx
        mov    ecx, dword ptr [g_0085a230]
        push    edx
        push    eax
        mov    dword ptr [g_0085a1f0], esi
        mov    byte ptr [g_0087dd0a], 1
        push    ecx
        jmp    L_afb6
L_ae4c:
        mov    al, byte ptr [g_0085895a]
        test    al, al
        je    L_af31
        push    ebx
        mov    ebx, dword ptr [g_00858948]
        cmp    ebx, 0x10
        push    edi
        jne    L_aeb4
        mov    esi, dword ptr [g_00858944]
        mov    edi, dword ptr [g_00858940]
        xor    eax, eax
        mov    ecx, 0x8ac74a
L_ae79:
        xor    edx, edx
        mov    dx, word ptr [ecx - 2]
        cmp    edx, edi
        jne    L_ae8c
        xor    edx, edx
        mov    dx, word ptr [ecx]
        cmp    edx, esi
        je    L_aea1
L_ae8c:
        add    ecx, 4
        add    eax, 2
        cmp    ecx, 0x8ac78a
        jl    L_ae79
        mov    eax, dword ptr [g_0085a1f0]
        jmp    L_af05
L_aea1:
        cdq    
        sub    eax, edx
        mov    ecx, eax
        sar    ecx, 1
        xor    eax, eax
        mov    ax, word ptr [ecx*2 + 0x8ac788]
        jmp    L_af00
L_aeb4:
        mov    esi, dword ptr [g_00858944]
        mov    edi, dword ptr [g_00858940]
        xor    eax, eax
        mov    ecx, 0x8ac7aa
L_aec7:
        xor    edx, edx
        mov    dx, word ptr [ecx - 2]
        cmp    edx, edi
        jne    L_aeda
        xor    edx, edx
        mov    dx, word ptr [ecx]
        cmp    edx, esi
        je    L_aeef
L_aeda:
        add    ecx, 4
        add    eax, 2
        cmp    ecx, 0x8ac7ea
        jl    L_aec7
        mov    eax, dword ptr [g_0085a1f0]
        jmp    L_af05
L_aeef:
        cdq    
        sub    eax, edx
        mov    ecx, eax
        sar    ecx, 1
        xor    eax, eax
        mov    ax, word ptr [ecx*2 + 0x8ac7e8]
L_af00:
        mov    dword ptr [g_0085a1f0], eax
L_af05:
        mov    edx, dword ptr [g_0085a230]
        push    0
        push    eax
        push    ebx
        push    esi
        push    edi
        push    edx
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00735150
        test    eax, eax
        pop    edi
        mov    byte ptr [g_0087dd0a], 0
        pop    ebx
        jge    L_b0c7
        xor    esi, esi
L_af31:
        mov    eax, dword ptr [g_00858948]
        mov    ecx, dword ptr [g_00858944]
        mov    edx, dword ptr [g_00858940]
        push    esi
        push    0x3c
        push    eax
        mov    eax, dword ptr [g_0085a230]
        push    ecx
        push    edx
        push    eax
        mov    dword ptr [g_0085a1f0], 0x3c
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00735150
        cmp    eax, esi
        mov    byte ptr [g_0087dd0a], 0
        jge    L_b0c7
        mov    eax, dword ptr [g_0085894c]
        mov    ecx, eax
        shl    ecx, 4
        add    ecx, eax
        lea    eax, [eax + ecx*8]
        mov    ecx, dword ptr [g_00858944]
        push    esi
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [g_00858948]
        push    esi
        push    eax
        mov    eax, dword ptr [g_0085a230]
        mov    byte ptr [edx*8 + 0x8acb30], 1
        mov    edx, dword ptr [g_00858940]
        push    ecx
        push    edx
        mov    dword ptr [g_0085a1f0], esi
        mov    byte ptr [g_0087dd0a], 1
        push    eax
L_afb6:
        call    FUN_00735150
        cmp    eax, esi
        mov    byte ptr [g_0087dd0a], 0
        jge    L_b0c7
        mov    edx, dword ptr [g_00858948]
        push    esi
        push    esi
        mov    ecx, 0x1e0
        push    edx
        mov    eax, 0x280
        push    ecx
        push    eax
        mov    dword ptr [g_00858940], eax
        mov    dword ptr [g_0085a0d4], eax
        mov    eax, dword ptr [g_0085a230]
        push    eax
        mov    dword ptr [g_00858944], ecx
        mov    dword ptr [g_0085a0d0], ecx
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00735150
        mov    ecx, dword ptr [g_00858944]
        mov    edx, dword ptr [g_00858940]
        mov    eax, dword ptr [g_0085a230]
        push    esi
        push    esi
        push    0x10
        push    ecx
        push    edx
        push    eax
        mov    dword ptr [g_00858948], 0x10
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_00735150
        cmp    eax, esi
        mov    byte ptr [g_0087dd0a], 0
        jge    L_b0c7
        push    esi
        push    0x70ab60
        mov    dword ptr [g_00859ba4], esi
        call    dword ptr [g_0076b490]
        mov    byte ptr [g_00858954], 1
        mov    byte ptr [g_0085a208], 0
        mov    dword ptr [g_00858ab0], 1
        call    FUN_0070a920
        cmp    dword ptr [g_00859ba4], esi
        je    L_b0a3
        mov    ecx, dword ptr [g_00896c88]
        push    0x2721
        push    ecx
        call    FUN_0072d830
        push    eax
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_b129
        int 3    
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
L_b0a3:
        mov    edx, dword ptr [g_00896c88]
        push    0x2722
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_b129
        int 3    
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
L_b0c7:
        mov    byte ptr [g_0085a208], 0
        call    FUN_0070c540
        mov    eax, dword ptr [g_00858bf8]
        push    eax
        mov    dword ptr [g_00858ab0], 1
        call    dword ptr [g_0076b494]
        mov    edx, dword ptr [g_00858bf8]
        lea    ecx, [ebp - 0x10]
        push    ecx
        push    edx
        call    dword ptr [g_0076b56c]
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [g_00858940]
        mov    edx, dword ptr [ebp - 0xc]
        add    ecx, eax
        mov    eax, dword ptr [g_00858944]
        mov    dword ptr [ebp - 8], ecx
        lea    ecx, [ebp - 0x10]
        add    eax, edx
        push    ecx
        mov    dword ptr [ebp - 4], eax
        call    dword ptr [g_0076b498]
        call    FUN_0073a2e0
        call    FUN_007333b0
L_b129:
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
