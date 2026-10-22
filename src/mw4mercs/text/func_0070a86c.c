/*
 * FUN_0070a86c (extent 0x70a86c-0x70abd3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2b0;
extern int    g_0076b420;
extern int    g_0076b49c;
extern int    g_0076b4a0;
extern int    g_0076b4a4;
extern int    g_0076b4dc;
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
extern int    g_00858ab0;
extern int    g_00858ac0;
extern int    g_00858ba0;
extern int    g_00858bf8;
extern char   g_00859afe;
extern int    g_00859ba4;
extern char   g_0085a0c4;
extern int    g_0085a0d0;
extern int    g_0085a0d4;
extern char   g_0085a1de;
extern int    g_0085a1e0;
extern int    g_0085a1e8;
extern int    g_0085a1ec;
extern char   g_0085a208;
extern int    g_0085a254;
extern int    g_0085a270;
extern int    g_00896c88;
extern int    g_008aaec8;
extern int    g_008aaecc;
extern int    g_008aaed4;
extern int    g_008aaed8;
extern int    g_008aaedc;
extern int    g_008aaee0;
extern void __cdecl FUN_0070b430(void);
extern void __cdecl FUN_0070c540(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_007333b0(void);
extern void __cdecl FUN_007333e0(void);
extern void __cdecl FUN_0073a250(void);
extern void __cdecl FUN_0073a2e0(void);

__declspec(naked) void FUN_0070a86c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_00858954]
        mov    ecx, dword ptr [g_0085894c]
        sub    esp, 0x100
        neg    al
        push    esi
        mov    esi, dword ptr [g_0076b420]
        sbb    eax, eax
        and    eax, ecx
        mov    ecx, eax
        shl    ecx, 4
        add    ecx, eax
        lea    eax, [eax + ecx*8]
        lea    edx, [eax + eax*2]
        lea    eax, [edx*8 + 0x8ac070]
        push    eax
        lea    ecx, [esp + 8]
        push    0x76c690
        push    ecx
        call    esi
        mov    eax, dword ptr [g_0085a254]
        add    esp, 0xc
        test    eax, eax
        je    L_a8c1
        lea    eax, [esp + 4]
        jmp    L_a8ea
L_a8c1:
        mov    eax, dword ptr [g_00858950]
        cmp    eax, 2
        jne    L_a8d2
        mov    eax, 0x7a16d8
        jmp    L_a8ea
L_a8d2:
        cmp    eax, 1
        je    L_a8e5
        mov    al, byte ptr [g_00859afe]
        test    al, al
        mov    eax, 0x7a16c4
        je    L_a8ea
L_a8e5:
        mov    eax, 0x7a16b0
L_a8ea:
        mov    edx, dword ptr [g_00858944]
        push    eax
        mov    eax, dword ptr [g_00858940]
        push    edx
        push    eax
        push    0x7a16a4
        push    0x859bac
        call    esi
        add    esp, 0x14
        mov    dword ptr [g_0085a270], 1
        pop    esi
        add    esp, 0x100
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    esi
        call    FUN_007333e0
        call    FUN_0073a250
        mov    ecx, dword ptr [g_008aaec8]
        xor    esi, esi
        cmp    ecx, esi
        setne    al
        mov    byte ptr [g_00858956], al
        cmp    dword ptr [g_008aaecc], esi
        je    L_a952
        mov    dword ptr [g_00858948], 0x20
L_a952:
        mov    eax, dword ptr [g_007b73dc]
        cmp    eax, esi
        mov    cl, byte ptr [g_0085a1de]
        mov    byte ptr [g_00858958], cl
        je    L_aa19
        mov    ecx, 0x400
        cmp    eax, ecx
        ja    L_a9c4
        je    L_a9b1
        mov    ecx, 0x200
        cmp    eax, ecx
        je    L_a99e
        mov    ecx, 0x320
        cmp    eax, ecx
        jne    L_a9d6
        mov    dword ptr [g_00858940], ecx
        mov    dword ptr [g_0085a0d4], ecx
        mov    eax, 0x258
        jmp    L_aa2d
L_a99e:
        mov    dword ptr [g_00858940], ecx
        mov    dword ptr [g_0085a0d4], ecx
        mov    eax, 0x180
        jmp    L_aa2d
L_a9b1:
        mov    dword ptr [g_00858940], ecx
        mov    dword ptr [g_0085a0d4], ecx
        mov    eax, 0x300
        jmp    L_aa2d
L_a9c4:
        mov    edx, 0x500
        cmp    eax, edx
        je    L_a9ff
        mov    ecx, 0x640
        cmp    eax, ecx
        je    L_a9ec
L_a9d6:
        mov    eax, 0x280
        mov    dword ptr [g_00858940], eax
        mov    dword ptr [g_0085a0d4], eax
        mov    eax, 0x1e0
        jmp    L_aa2d
L_a9ec:
        mov    dword ptr [g_00858940], ecx
        mov    dword ptr [g_0085a0d4], ecx
        mov    eax, 0x4b0
        jmp    L_aa2d
L_a9ff:
        mov    dword ptr [g_00858940], edx
        mov    dword ptr [g_0085a0d4], edx
        mov    dword ptr [g_00858944], ecx
        mov    dword ptr [g_0085a0d0], ecx
        jmp    L_aa37
L_aa19:
        mov    eax, dword ptr [g_0085a1ec]
        mov    dword ptr [g_00858940], eax
        mov    dword ptr [g_0085a0d4], eax
        mov    eax, dword ptr [g_0085a1e8]
L_aa2d:
        mov    dword ptr [g_00858944], eax
        mov    dword ptr [g_0085a0d0], eax
L_aa37:
        cmp    dword ptr [g_008aaed4], esi
        je    L_aa4b
        mov    dword ptr [g_00858950], 3
        jmp    L_aa7b
L_aa4b:
        cmp    dword ptr [g_008aaedc], esi
        je    L_aa5b
        mov    dword ptr [g_00858950], esi
        jmp    L_aa7b
L_aa5b:
        cmp    dword ptr [g_008aaed8], esi
        je    L_aa6f
        mov    dword ptr [g_00858950], 1
        jmp    L_aa7b
L_aa6f:
        mov    edx, dword ptr [g_0085a1e0]
        mov    dword ptr [g_00858950], edx
L_aa7b:
        cmp    dword ptr [g_008aaee0], esi
        setne    al
        mov    byte ptr [g_00858957], al
        mov    dword ptr [g_00858ab0], esi
        mov    byte ptr [g_0085a208], 1
        call    FUN_0070b430
        mov    eax, dword ptr [g_00858ba0]
        cmp    eax, 0x10
        mov    byte ptr [g_0085a208], 0
        mov    byte ptr [g_00858954], 0
        mov    byte ptr [g_0085a0c4], 0
        je    L_aabf
        cmp    eax, 0x20
        jne    L_aac4
L_aabf:
        mov    dword ptr [g_00858948], eax
L_aac4:
        mov    eax, dword ptr [g_00858bf8]
        mov    ecx, dword ptr [g_00858940]
        mov    edx, dword ptr [g_00858944]
        push    esi
        push    -0x10
        push    eax
        mov    dword ptr [esp + 0x10], esi
        mov    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x18], ecx
        mov    dword ptr [esp + 0x1c], edx
        call    dword ptr [g_0076b4a0]
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        call    dword ptr [g_0076b4dc]
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        sub    eax, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    0x72
        sub    ecx, edx
        mov    edx, dword ptr [g_00858bf8]
        push    ecx
        push    eax
        push    esi
        push    esi
        push    esi
        push    edx
        mov    dword ptr [esp + 0x28], eax
        mov    dword ptr [esp + 0x2c], ecx
        call    dword ptr [g_0076b4a4]
        cmp    dword ptr [g_00858ac0], esi
        pop    esi
        jne    L_ab4d
        call    FUN_0070c540
        mov    dword ptr [g_00858ab0], 1
        call    FUN_0073a2e0
        call    FUN_007333b0
L_ab4d:
        add    esp, 0x10
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
    }
}
