/*
 * FUN_0072e500 (extent 0x72e500-0x72edb8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b050;
extern int    g_0076b054;
extern int    g_0076b058;
extern int    g_0076b438;
extern int    g_0076b448;
extern int    g_0076b44c;
extern int    g_0076b450;
extern int    g_0076b454;
extern int    g_0076b498;
extern int    g_0076b4e4;
extern int    g_0076b4f0;
extern int    g_0076b538;
extern int    g_007b6fb8;
extern int    g_007b6fbc;
extern char   g_007b71e4;
extern int    g_007b73c8;
extern int    g_00849eb8;
extern int    g_00858940;
extern int    g_00858944;
extern int    g_0085894c;
extern char   g_00858954;
extern int    g_00858968;
extern int    g_0085896c;
extern int    g_00858970;
extern int    g_00858a50;
extern int    g_00858ab0;
extern char   g_00858ab5;
extern char   g_00858ac4;
extern char   g_00858ae0;
extern char   g_00858ae1;
extern int    g_00858ba0;
extern int    g_00858bf8;
extern int    g_00858c08;
extern int    g_00858c10;
extern int    g_00858c14;
extern int    g_00859278;
extern char   g_0085a208;
extern int    g_0085a210;
extern int    g_0085a214;
extern int    g_0085a260;
extern int    g_0085a264;
extern int    g_0087bbe8;
extern char   g_0087bc34;
extern int    g_0087c5a0;
extern char   g_0087dd0a;
extern int    g_0087dde4;
extern int    g_0087dde8;
extern int    g_0087e5f4;
extern int    g_00896cb0;
extern char   g_00896cb4;
extern char   g_00896cb5;
extern int    g_00896cb8;
extern int    g_00896cbc;
extern int    g_008aae58;
extern int    g_008aaea4;
extern int    g_008aaeb4;
extern int    g_008aaef0;
extern int    g_008abe54;
extern int    g_008b2520;
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00722390(void);
extern void __cdecl FUN_00722470(void);
extern void __cdecl FUN_007238a0(void);
extern void __cdecl FUN_007238d0(void);
extern void __cdecl FUN_007239a0(void);
extern void __cdecl FUN_0072b450(void);
extern void __cdecl FUN_0072d1f0(void);
extern void __cdecl FUN_0072e500(void);
extern void __cdecl FUN_00735310(void);
extern void __cdecl FUN_00735350(void);
extern void __cdecl FUN_007355d0(void);

__declspec(naked) void FUN_0072e500(void)
{
    __asm {
        mov    al, byte ptr [g_00858ae0]
        test    al, al
        je    L_e566
        mov    al, byte ptr [g_00858ae1]
        test    al, al
        je    L_e566
        mov    eax, dword ptr [g_00849eb8]
        test    eax, eax
        jne    L_e566
        cmp    word ptr [g_00896cbc], 1
        mov    al, byte ptr [g_00858954]
        je    L_e52e
        test    al, al
        je    L_e566
L_e52e:
        mov    ecx, dword ptr [g_00858a50]
        test    ecx, ecx
        jne    L_e542
        mov    ecx, dword ptr [g_0087bbe8]
        test    ecx, ecx
        je    L_e55d
L_e542:
        test    al, al
        jne    L_e55d
        mov    eax, dword ptr [g_008b2520]
        test    ah, 4
        jne    L_e55d
        mov    eax, dword ptr [g_00896cb0]
        push    eax
        call    dword ptr [g_0076b538]
        ret    
L_e55d:
        push    0
        call    dword ptr [g_0076b538]
        ret    
L_e566:
        mov    ecx, dword ptr [g_00896cb0]
        push    ecx
        call    dword ptr [g_0076b538]
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x50
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        cmp    ebx, 0x84
        push    esi
        push    edi
        je    L_ed9b
        cmp    ebx, 0x200
        je    L_ed9b
        cmp    ebx, 0x20
        jne    L_e5e6
        mov    eax, dword ptr [g_00859278]
        test    eax, eax
        mov    eax, dword ptr [ebp + 0x14]
        je    L_e5ce
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        push    ebx
        push    edx
        call    dword ptr [g_0076b438]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_e5ce:
        mov    dword ptr [g_00896cbc], eax
        call    FUN_0072e500
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_e5e6:
        cmp    ebx, 0x104
        mov    esi, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebp + 0x10]
        ja    L_eb67
        cmp    ebx, 0x104
        je    L_eb21
        cmp    ebx, 0x15
        ja    L_e857
        je    L_e874
        lea    eax, [ebx - 3]
        cmp    eax, 0x11
        ja    L_ed7c
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x72edd8]
        jmp    dword ptr [edx*4 + 0x72edb8]
        mov    eax, dword ptr [g_0087c5a0]
        test    eax, eax
        jne    L_e6c8
        mov    ecx, dword ptr [g_00858ab0]
        mov    eax, 1
        cmp    ecx, eax
        jne    L_e6c8
        mov    cl, byte ptr [g_00858ab5]
        test    cl, cl
        je    L_e6c8
        mov    cl, byte ptr [g_00858954]
        test    cl, cl
        jne    L_e6c8
        mov    ecx, dword ptr [g_00858c08]
        cmp    ecx, 3
        je    L_e671
        cmp    ecx, 2
        jne    L_e6c8
L_e671:
        mov    edx, dword ptr [g_0085a210]
        test    edx, edx
        je    L_e6df
        mov    ecx, dword ptr [g_00858c10]
        mov    esi, dword ptr [g_00858940]
        add    esi, ecx
        push    0
        push    0x1000000
        mov    dword ptr [ebp - 0x10], ecx
        mov    ecx, dword ptr [g_00858c14]
        mov    dword ptr [ebp - 8], esi
        mov    esi, dword ptr [g_00858944]
        push    0
        mov    byte ptr [g_0087dd0a], al
        mov    eax, dword ptr [g_0085a214]
        add    esi, ecx
        mov    dword ptr [ebp - 0xc], ecx
        push    eax
        lea    ecx, [ebp - 0x10]
        push    ecx
        push    edx
        mov    dword ptr [ebp - 4], esi
        call    FUN_007355d0
        mov    byte ptr [g_0087dd0a], 0
L_e6c8:
        mov    eax, dword ptr [ebp + 8]
        push    0
        push    eax
        call    dword ptr [g_0076b448]
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_e6df:
        mov    edi, dword ptr [ebp + 8]
        lea    edx, [ebp - 0x50]
        push    edx
        push    edi
        call    dword ptr [g_0076b44c]
        mov    ecx, dword ptr [g_0085a214]
        mov    esi, eax
        lea    eax, [ebp + 8]
        push    eax
        push    ecx
        call    FUN_00735310
        cmp    dword ptr [g_00858ba0], 8
        jne    L_e73a
        push    4
        push    esi
        call    dword ptr [g_0076b050]
        mov    eax, dword ptr [g_00858944]
        mov    ecx, dword ptr [g_00858940]
        mov    edx, dword ptr [ebp + 8]
        push    0xcc0020
        push    eax
        push    ecx
        push    0
        push    0
        push    edx
        push    eax
        push    ecx
        push    0
        push    0
        push    esi
        call    dword ptr [g_0076b054]
        jmp    L_e760
L_e73a:
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [g_00858944]
        mov    edx, dword ptr [g_00858940]
        push    0xcc0020
        push    0
        push    0
        push    eax
        push    ecx
        push    edx
        push    0
        push    0
        push    esi
        call    dword ptr [g_0076b058]
L_e760:
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [g_0085a214]
        push    eax
        push    ecx
        call    FUN_00735350
        lea    edx, [ebp - 0x50]
        push    edx
        push    edi
        call    dword ptr [g_0076b450]
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
        mov    esi, edi
        and    esi, 0xffff
        mov    eax, 1
        cmp    esi, eax
        je    L_e79e
        cmp    esi, 2
        je    L_e79e
        xor    al, al
L_e79e:
        test    edi, 0xffff0000
        mov    byte ptr [g_00858ae0], al
        jne    L_e7b4
        test    al, al
        je    L_e7b4
        call    FUN_00722390
L_e7b4:
        mov    al, byte ptr [g_00858954]
        test    al, al
        je    L_ed94
        test    esi, esi
        jne    L_ed94
        push    esi
        call    dword ptr [g_0076b498]
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
        mov    byte ptr [g_00858ae1], 0
        call    FUN_00722470
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
        mov    byte ptr [g_00858ae1], 1
        call    FUN_00722390
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
        xor    eax, eax
        push    0x858c10
        push    ecx
        mov    dword ptr [g_00858c10], eax
        mov    dword ptr [g_00858c14], eax
        call    dword ptr [g_0076b454]
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
        mov    eax, dword ptr [g_00859278]
        test    eax, eax
        jne    L_e844
        mov    edx, dword ptr [g_00858c08]
        mov    eax, 1
        cmp    edx, eax
        jne    L_edae
L_e844:
        push    0
        push    ecx
        call    dword ptr [g_0076b448]
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_e857:
        lea    eax, [ebx - 0x1c]
        cmp    eax, 0xe6
        ja    L_ed7c
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x72ee08]
        jmp    dword ptr [edx*4 + 0x72edec]
L_e874:
        test    dword ptr [g_008b2520], 0x800000
        jne    L_ed94
        mov    al, byte ptr [g_0085a208]
        test    al, al
        jne    L_ed94
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    dword ptr [g_008aaef0], 1
        push    edi
        jmp    L_eda3
        mov    al, byte ptr [g_0085a208]
        test    al, al
        jne    L_ed94
        mov    al, byte ptr [g_00858954]
        test    al, al
        jne    L_ed94
        mov    eax, dword ptr [esi + 0x18]
        and    eax, 2
        test    al, al
        jne    L_ed94
        mov    edx, dword ptr [g_00858bf8]
        lea    ecx, [ebp - 0x3c]
        push    ecx
        push    edx
        mov    dword ptr [ebp - 0x3c], 0x2c
        call    dword ptr [g_0076b4e4]
        cmp    dword ptr [ebp - 0x34], 1
        jne    L_ed94
        mov    ecx, dword ptr [esi + 0xc]
        mov    eax, dword ptr [esi + 8]
        mov    dword ptr [g_007b6fbc], ecx
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    dword ptr [g_007b6fb8], eax
        push    edi
        jmp    L_eda3
        mov    edx, dword ptr [g_00858bf8]
        push    edx
        call    dword ptr [g_0076b4f0]
        test    eax, eax
        jne    L_e924
        test    edi, edi
        je    L_e924
        call    FUN_00722390
L_e924:
        xor    eax, eax
        test    edi, edi
        sete    al
        push    eax
        call    FUN_0072d1f0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
        cmp    edi, 0x91
        je    L_ea39
        push    esi
        push    edi
        call    FUN_007238d0
        mov    eax, dword ptr [g_00858968]
        test    eax, eax
        je    L_e98b
        mov    ecx, dword ptr [g_00849eb8]
        test    ecx, ecx
        jne    L_e98b
        cmp    edi, eax
        jne    L_e98b
        mov    al, byte ptr [g_00858954]
        test    al, al
        mov    eax, 1
        mov    dword ptr [g_008aaef0], eax
        je    L_ebf5
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    dword ptr [g_0085a264], eax
        push    edi
        jmp    L_eda3
L_e98b:
        mov    eax, dword ptr [g_0085896c]
        test    eax, eax
        je    L_e9e3
        mov    ecx, dword ptr [g_00849eb8]
        test    ecx, ecx
        jne    L_e9e3
        cmp    edi, eax
        jne    L_e9e3
        mov    al, byte ptr [g_00858954]
        test    al, al
        je    L_e9ca
        mov    eax, dword ptr [g_0085894c]
        mov    ecx, dword ptr [g_008abe54]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [g_0085894c], eax
        jb    L_e9ca
        mov    dword ptr [g_0085894c], 0
L_e9ca:
        mov    ecx, dword ptr [ebp + 0x14]
        mov    eax, 1
        push    ecx
        mov    dword ptr [g_008aaef0], eax
        mov    dword ptr [g_0085a260], eax
        push    edi
        jmp    L_eda3
L_e9e3:
        mov    eax, dword ptr [g_00858970]
        test    eax, eax
        je    L_ed94
        mov    ecx, dword ptr [g_00849eb8]
        test    ecx, ecx
        jne    L_ed94
        cmp    edi, eax
        jne    L_ed94
        mov    al, byte ptr [g_00858954]
        test    al, al
        je    L_ea28
        mov    eax, 1
        mov    dword ptr [g_008aaef0], eax
L_ea19:
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    dword ptr [g_0085a264], eax
        push    edi
        jmp    L_eda3
L_ea28:
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    byte ptr [g_00858ac4], 1
        push    edi
        jmp    L_eda3
L_ea39:
        mov    al, byte ptr [g_007b71e4]
        test    al, al
        je    L_ea68
        push    0x7a5bf0
        mov    dword ptr [g_00896cb8], 1
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_ea5e
        int 3    
L_ea5e:
        mov    dword ptr [g_00896cb8], 0
L_ea68:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
        push    edi
        call    FUN_007239a0
        cmp    edi, 0x11
        jne    L_ea8f
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    byte ptr [g_00896cb4], 0
        push    edi
        jmp    L_eda3
L_ea8f:
        cmp    edi, 0x2c
        jne    L_ed94
        mov    eax, dword ptr [g_007b73c8]
        test    eax, eax
        je    L_ed94
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    dword ptr [g_008aae58], 1
        push    edi
        jmp    L_eda3
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        mov    edx, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [g_0087e5f4]
        je    L_eb04
        mov    ecx, dword ptr [g_0087dde4]
        mov    edi, dword ptr [g_0087dde8]
        lea    eax, [ecx + 1]
        and    eax, 0xff
        cmp    eax, edi
        je    L_eaf2
        lea    edi, [esi + edx]
        mov    dword ptr [ecx*4 + 0x87ddec], edi
        mov    dword ptr [g_0087dde4], eax
L_eaf2:
        mov    eax, dword ptr [g_008aaea4]
        test    eax, eax
        je    L_eb0c
        mov    eax, dword ptr [g_008aaeb4]
        test    eax, eax
        jne    L_eb0c
L_eb04:
        add    esi, edx
        push    esi
        call    FUN_007238a0
L_eb0c:
        mov    dword ptr [g_0087e5f4], 0
L_eb16:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_eb21:
        cmp    edi, 0xd
        jne    L_eb56
        mov    eax, dword ptr [g_00849eb8]
        test    eax, eax
        jne    L_eb56
        mov    al, byte ptr [g_00858954]
        test    al, al
        mov    eax, 1
        mov    dword ptr [g_008aaef0], eax
        je    L_ec27
        pop    edi
        pop    esi
        mov    dword ptr [g_0085a264], eax
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_eb56:
        push    esi
        push    edi
        call    FUN_007238d0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_eb67:
        cmp    ebx, 0x205
        ja    L_ed04
        je    L_ecf3
        cmp    ebx, 0x201
        ja    L_ecbd
        je    L_ecaa
        mov    eax, ebx
        sub    eax, 0x105
        je    L_ec8a
        dec    eax
        je    L_ec76
        sub    eax, 0xc
        jne    L_ed7c
        mov    eax, edi
        and    eax, 0xfff0
        cmp    eax, 0xf100
        jne    L_ebc1
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_ebc1:
        cmp    eax, 0xf140
        je    L_eb16
        cmp    eax, 0xf170
        je    L_eb16
        cmp    eax, 0xf120
        jne    L_ec04
        mov    al, byte ptr [g_00858954]
        test    al, al
        mov    eax, 1
        mov    dword ptr [g_008aaef0], eax
        je    L_ea19
L_ebf5:
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    dword ptr [g_0085a260], eax
        push    edi
        jmp    L_eda3
L_ec04:
        cmp    eax, 0xf030
        jne    L_ec37
        mov    al, byte ptr [g_00858954]
        test    al, al
        jne    L_ec2c
        mov    eax, dword ptr [g_00849eb8]
        test    eax, eax
        jne    L_ec2c
        mov    eax, 1
        mov    dword ptr [g_008aaef0], eax
L_ec27:
        mov    dword ptr [g_0085a260], eax
L_ec2c:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_ec37:
        cmp    eax, 0xf060
        jne    L_ec50
        pop    edi
        pop    esi
        mov    byte ptr [g_00858ac4], 1
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_ec50:
        mov    al, byte ptr [g_00858954]
        test    al, al
        je    L_ed94
        mov    ecx, dword ptr [ebp + 0x14]
        mov    eax, 1
        push    ecx
        mov    dword ptr [g_008aaef0], eax
        mov    dword ptr [g_0085a264], eax
        push    edi
        jmp    L_eda3
L_ec76:
        cmp    edi, 0x79
        jne    L_ed94
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_ec8a:
        cmp    edi, 0xd
        jne    L_ec9a
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
L_ec9a:
        push    edi
        call    FUN_007239a0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_ecaa:
        push    0
        push    1
        call    FUN_007238d0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_ecbd:
        mov    eax, ebx
        sub    eax, 0x202
        je    L_ece2
        sub    eax, 2
        jne    L_ed7c
        push    0
        push    2
        call    FUN_007238d0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_ece2:
        push    1
        call    FUN_007239a0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_ecf3:
        push    2
        call    FUN_007239a0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_ed04:
        lea    eax, [ebx - 0x207]
        cmp    eax, 0xb
        ja    L_ed7c
        jmp    dword ptr [eax*4 + 0x72eef0]
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    byte ptr [g_00896cb5], 1
        push    edi
        jmp    L_eda3
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        mov    byte ptr [g_00896cb5], 0
        push    edi
        jmp    L_eda3
        push    0
        push    3
        call    FUN_007238d0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
        push    3
        call    FUN_007239a0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
        mov    ecx, edi
        shr    ecx, 0x10
        push    0
        add    ecx, 3
        push    ecx
        call    FUN_007238d0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
        mov    edx, edi
        shr    edx, 0x10
        add    edx, 3
        push    edx
        call    FUN_007239a0
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_ed7c:
        lea    eax, [ebp + 0x13]
        push    eax
        push    esi
        push    edi
        push    ebx
        push    ecx
        mov    byte ptr [ebp + 0x13], 0
        call    FUN_0072b450
        mov    cl, byte ptr [ebp + 0x13]
        test    cl, cl
        jne    L_edae
L_ed94:
        mov    ecx, dword ptr [ebp + 0x14]
        push    ecx
        push    edi
        jmp    L_eda3
L_ed9b:
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [ebp + 0x10]
        push    eax
        push    ecx
L_eda3:
        mov    edx, dword ptr [ebp + 8]
        push    ebx
        push    edx
        call    dword ptr [g_0076b438]
L_edae:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
        nop    
        // jump-table data @ 0x0072EDB8 (0 relocated pointers)
        // jump-table data @ 0x0072EDEC (0 relocated pointers)
        // jump-table data @ 0x0072EEF0 (0 relocated pointers)
    }
}
