/*
 * FUN_0054a355 (extent 0x54a355-0x54a776) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern int    g_007dc6b4;
extern void __cdecl FUN_004f9ff0(void);
extern void __cdecl FUN_004fa060(void);
extern void __cdecl FUN_00536fe0(void);
extern void __cdecl FUN_0054a7c0(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_0072ef50(void);
extern void __cdecl FUN_0072ef90(void);
extern void __cdecl FUN_0072f090(void);

__declspec(naked) void FUN_0054a355(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x17]
        test    al, al
        je    L_a3ff
        mov    ebx, dword ptr [esp + 0xc]
        push    ebx
        mov    ecx, esi
        call    FUN_004f9ff0
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_a3ff
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    edx, dword ptr [g_007dab44]
        mov    dword ptr [eax + 0x80], 0xffffffff
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        push    0xd
        xor    ecx, 0x85739531
        call    FUN_00629290
        lea    ecx, [esi + 0x198]
        lea    edx, [esi + 0x16c]
        add    esi, 0x170
        mov    dword ptr [eax + 0x5c], ecx
        mov    dword ptr [eax + 0x68], edx
        mov    byte ptr [eax + 0x6d], bl
        mov    dword ptr [eax + 0x70], esi
L_a3ff:
        pop    esi
        pop    ebx
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
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        push    esi
        mov    esi, ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    dl, byte ptr [ecx + 0x17]
        test    dl, dl
        je    L_a4c1
        mov    ecx, dword ptr [eax + 0x40]
        push    0xd
        xor    ecx, 0x85739531
        call    FUN_00629290
        test    eax, eax
        je    L_a4ba
        mov    cl, byte ptr [esi + 0x198]
        test    cl, cl
        mov    dword ptr [eax + 0x5c], 0
        mov    dword ptr [eax + 0x68], 0
        mov    dword ptr [eax + 0x70], 0
        lea    eax, [esi + 0x198]
        je    L_a4ba
        mov    edx, dword ptr [g_007db090]
        push    eax
        xor    eax, eax
        mov    al, byte ptr [edx + 0x28]
        mov    edx, dword ptr [esi + 0x384]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x5ac]
        push    eax
        mov    eax, dword ptr [edx + 0x10]
        mov    edx, dword ptr [g_007dab44]
        push    ecx
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x169]
        shr    eax, 0x13
        and    eax, 0xffffff01
        push    eax
        mov    eax, dword ptr [edx]
        push    ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        call    FUN_00536fe0
L_a4ba:
        mov    ecx, esi
        call    FUN_004fa060
L_a4c1:
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
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        xor    edi, edi
L_a4d8:
        push    edi
        mov    ecx, esi
        call    FUN_0054a7c0
        inc    edi
        cmp    edi, 0xa
        jl    L_a4d8
        mov    ecx, dword ptr [esi + 0x4b8]
        test    ecx, ecx
        lea    eax, [esi + 0x4b8]
        je    L_a4fc
        push    eax
        call    FUN_0072f090
L_a4fc:
        mov    ecx, dword ptr [esi + 0x4bc]
        test    ecx, ecx
        lea    eax, [esi + 0x4bc]
        je    L_a512
        push    eax
        call    FUN_0072f090
L_a512:
        mov    ecx, dword ptr [esi + 0x4c0]
        test    ecx, ecx
        lea    eax, [esi + 0x4c0]
        je    L_a528
        push    eax
        call    FUN_0072f090
L_a528:
        mov    ecx, dword ptr [esi + 0x4c4]
        test    ecx, ecx
        lea    eax, [esi + 0x4c4]
        je    L_a53e
        push    eax
        call    FUN_0072f090
L_a53e:
        mov    ecx, dword ptr [esi + 0x4c8]
        test    ecx, ecx
        lea    eax, [esi + 0x4c8]
        je    L_a554
        push    eax
        call    FUN_0072f090
L_a554:
        mov    ecx, dword ptr [esi + 0x4cc]
        test    ecx, ecx
        lea    eax, [esi + 0x4cc]
        je    L_a56a
        push    eax
        call    FUN_0072f090
L_a56a:
        mov    ecx, dword ptr [esi + 0x4d0]
        test    ecx, ecx
        lea    eax, [esi + 0x4d0]
        je    L_a580
        push    eax
        call    FUN_0072f090
L_a580:
        mov    ecx, dword ptr [esi + 0x4d4]
        test    ecx, ecx
        lea    eax, [esi + 0x4d4]
        je    L_a596
        push    eax
        call    FUN_0072f090
L_a596:
        mov    eax, dword ptr [esi + 0x4d8]
        test    eax, eax
        lea    edi, [esi + 0x4d8]
        je    L_a5ac
        push    edi
        call    FUN_0072f090
L_a5ac:
        mov    eax, dword ptr [esi + 0x4dc]
        test    eax, eax
        lea    ebx, [esi + 0x4dc]
        je    L_a5c2
        push    ebx
        call    FUN_0072f090
L_a5c2:
        mov    eax, dword ptr [esi + 0x4e0]
        test    eax, eax
        lea    ebp, [esi + 0x4e0]
        je    L_a5d8
        push    ebp
        call    FUN_0072f090
L_a5d8:
        mov    eax, dword ptr [g_007dc6b4]
        mov    eax, dword ptr [eax + 0x34]
        xor    ecx, ecx
        cmp    eax, ecx
        mov    dword ptr [esi + 0x4b8], ecx
        mov    dword ptr [esi + 0x4bc], ecx
        mov    dword ptr [esi + 0x4c0], ecx
        mov    dword ptr [esi + 0x4c4], ecx
        mov    dword ptr [esi + 0x4c8], ecx
        mov    dword ptr [esi + 0x4cc], ecx
        mov    dword ptr [esi + 0x4d0], ecx
        mov    dword ptr [esi + 0x4d4], ecx
        mov    dword ptr [edi], ecx
        mov    dword ptr [ebx], ecx
        mov    dword ptr [ebp], ecx
        je    L_a765
        mov    cl, byte ptr [eax + 0x50]
        test    cl, cl
        mov    edi, dword ptr [eax + 0x38]
        je    L_a754
        push    0x77cff4
        push    edi
        lea    eax, [esi + 0x4b8]
        push    eax
        call    FUN_0072ef90
        push    0x77cfd8
        push    edi
        lea    eax, [esi + 0x4bc]
        push    eax
        call    FUN_0072ef90
        push    0x77cfb8
        push    edi
        lea    eax, [esi + 0x4c0]
        push    eax
        call    FUN_0072ef90
        push    0x77cf94
        push    edi
        lea    eax, [esi + 0x4c4]
        push    eax
        call    FUN_0072ef90
        push    0x77cf78
        push    edi
        lea    eax, [esi + 0x4c8]
        push    eax
        call    FUN_0072ef90
        push    0x77cf5c
        push    edi
        lea    eax, [esi + 0x4cc]
        push    eax
        call    FUN_0072ef90
        push    0x77cf40
        push    edi
        lea    eax, [esi + 0x4d0]
        push    eax
        call    FUN_0072ef90
        push    0x77cf24
        push    edi
        lea    eax, [esi + 0x4d4]
        push    eax
        call    FUN_0072ef90
        push    0x77cf08
        push    edi
        lea    eax, [esi + 0x4d8]
        push    eax
        call    FUN_0072ef90
        push    0x77ceec
        push    edi
        push    ebx
        call    FUN_0072ef90
        mov    ecx, 0x3f800000
        mov    dword ptr [esi + 0x4fc], ecx
        mov    dword ptr [esi + 0x500], ecx
        lea    ecx, [esi + 0x4e8]
        lea    eax, [esi + 0x4e4]
        xor    edx, edx
        mov    dword ptr [eax], 0
        mov    ebx, ecx
        mov    dword ptr [ebx], edx
        mov    dword ptr [ebx + 4], edx
        mov    dword ptr [ebx + 8], edx
        push    eax
        mov    byte ptr [ecx], 1
        xor    ecx, ecx
        mov    edx, 0x3f800000
        push    edi
        push    ebp
        mov    byte ptr [esi + 0x4e9], 1
        mov    dword ptr [esi + 0x4f4], ecx
        mov    dword ptr [esi + 0x4f8], edx
        mov    dword ptr [esi + 0x504], edx
        mov    dword ptr [esi + 0x514], ecx
        mov    dword ptr [esi + 0x508], ecx
        call    FUN_0072ef50
        mov    al, byte ptr [esp + 0x14]
        pop    edi
        mov    byte ptr [esi + 0x175], al
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
L_a754:
        mov    cl, byte ptr [esp + 0x14]
        pop    edi
        mov    byte ptr [esi + 0x175], cl
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
L_a765:
        mov    dl, byte ptr [esp + 0x14]
        pop    edi
        mov    byte ptr [esi + 0x175], dl
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
    }
}
