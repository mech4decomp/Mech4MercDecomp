/*
 * FUN_005ec431 (extent 0x5ec431-0x5eca8e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db098;
extern char   g_007dc694;
extern int    g_007dc696;
extern int    g_007f1f84;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00421100(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_00544e30(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005a93a0(void);
extern void __cdecl FUN_005a94e0(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005ec431(void)
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
        sub    esp, 0x1a0
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov    edi, eax
        lea    ebp, [edi + 0x78]
        push    ebp
        call    FUN_004da920
        add    esp, 4
        push    0x7b8d88
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x30], eax
        call    FUN_0040c5d0
        mov    cl, byte ptr [g_007dc694]
        mov    dx, word ptr [g_007dc696]
        push    0
        push    0
        mov    byte ptr [esp + 0x18], cl
        push    0x3f800000
        lea    ecx, [esp + 0x4c]
        mov    word ptr [esp + 0x1e], dx
        call    FUN_0040c9c0
        mov    eax, dword ptr [esi + 0x198]
        add    eax, 0x44
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_0040f060
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x3c], ecx
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    dl, byte ptr [g_007dc694]
        mov    ax, word ptr [g_007dc696]
        mov    ecx, esi
        mov    byte ptr [esp + 0x14], dl
        mov    word ptr [esp + 0x16], ax
        call    FUN_005f07c0
        mov    cl, byte ptr [eax + 0x14]
        mov    ebx, dword ptr [esi + 0x1e0]
        add    eax, 0x14
        mov    byte ptr [esp + 0x14], cl
        mov    dx, word ptr [eax + 2]
        mov    word ptr [esp + 0x16], dx
        fld    dword ptr [ebx + 0x18]
        fcomp    dword ptr [edi + 0x58]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c527
        mov    eax, dword ptr [edi + 0x58]
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    edx, eax
        push    edx
        mov    ecx, ebx
        mov    dword ptr [ebx + 0x18], eax
        call    FUN_004e8dc0
        mov    dword ptr [esi + 0x1f0], 0
        jmp    L_c60a
L_c527:
        mov    eax, dword ptr [esi + 0x1f0]
        test    eax, eax
        je    L_c5e7
        mov    cl, byte ptr [eax + 0x14]
        mov    byte ptr [esp + 0x10], cl
        mov    dx, word ptr [eax + 0x16]
        mov    ecx, dword ptr [g_007dab44]
        mov    word ptr [esp + 0x12], dx
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x1c]
        xor    ecx, 0x85739531
        cmp    eax, ecx
        je    L_c5b2
        mov    dl, byte ptr [eax + 0x14]
        mov    ecx, dword ptr [g_007db098]
        cmp    dl, byte ptr [ecx + 0x28]
        je    L_c5b2
        mov    edx, dword ptr [eax + 4]
        cmp    dword ptr [edx], 0x421
        jne    L_c597
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [esi + 0x228]
        push    ecx
        lea    ecx, [esp + 0x28]
        call    FUN_0041c7d0
        jmp    L_c5d5
L_c597:
        fld    dword ptr [ebx + 0x18]
        push    ecx
        lea    edx, [ebx + 0xc]
        fstp    dword ptr [esp]
        push    edx
        lea    ecx, [esp + 0x38]
        call    FUN_0040ca40
        lea    eax, [esp + 0x30]
        push    eax
        jmp    L_c5cb
L_c5b2:
        fld    dword ptr [ebx + 0x18]
        push    ecx
        lea    ecx, [ebx + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        lea    ecx, [esp + 0x38]
        call    FUN_0040ca40
        lea    edx, [esp + 0x30]
        push    edx
L_c5cb:
        push    ebx
        lea    ecx, [esp + 0x28]
        call    FUN_0040cbb0
L_c5d5:
        mov    eax, dword ptr [esi + 0x1e4]
        push    eax
        lea    ecx, [esp + 0x44]
        call    FUN_0040c410
        jmp    L_c60a
L_c5e7:
        fld    dword ptr [ebx + 0x18]
        push    ecx
        lea    ecx, [ebx + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        lea    ecx, [esp + 0x38]
        call    FUN_0040ca40
        lea    edx, [esp + 0x30]
        push    edx
        push    ebx
        lea    ecx, [esp + 0x28]
        call    FUN_0040cbb0
L_c60a:
        mov    eax, dword ptr [edi + 0x30]
        mov    ecx, dword ptr [edi + 0x58]
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x1ec]
        push    eax
        mov    eax, dword ptr [edi + 0x50]
        push    ecx
        mov    ecx, dword ptr [edi + 0x54]
        push    edx
        push    eax
        push    ecx
        sub    esp, 0xc
        lea    edx, [esp + 0x60]
        mov    ecx, esp
        push    edx
        call    FUN_005a94e0
        push    ecx
        lea    eax, [esp + 0x34]
        mov    ecx, esp
        push    eax
        call    FUN_004ea0f0
        sub    esp, 0xc
        lea    edx, [esp + 0x50]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        mov    eax, dword ptr [esp + 0x6c]
        push    eax
        push    ecx
        lea    edx, [esp + 0x4c]
        mov    ecx, esp
        push    edx
        call    FUN_004ea0f0
        mov    ecx, dword ptr [esi + 0x198]
        push    0
        push    -1
        push    2
        push    0
        lea    eax, [esp + 0xb4]
        push    eax
        call    FUN_00507f90
        mov    ecx, dword ptr [esp + 0x74]
        push    eax
        push    ebp
        push    2
        push    ecx
        push    0
        push    2
        push    0x114
        lea    ecx, [esp + 0x100]
        call    FUN_005a93a0
        mov    edx, dword ptr [esp + 0x9c]
        push    0
        push    edx
        lea    eax, [esp + 0xa4]
        push    eax
        lea    ecx, [esp + 0x58]
        call    FUN_0041e690
        mov    ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    byte ptr [esp + 0x1c], cl
        mov    dx, word ptr [eax + 2]
        push    0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x54]
        push    ecx
        mov    word ptr [esp + 0x2a], dx
        call    FUN_004d9910
        add    esp, 0xc
        lea    edi, [esi + 0x220]
        push    eax
        mov    ecx, edi
        call    FUN_0041fcd0
        mov    edx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    esi, dword ptr [eax + 0x1c]
        xor    esi, 0x85739531
        mov    ebx, dword ptr [esi]
        mov    ecx, edi
        call    FUN_0041fd80
        push    eax
        mov    ecx, esi
        call    dword ptr [ebx + 0x28]
        lea    ecx, [esp + 0x4c]
        call    FUN_0041e710
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1a0
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x4c
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    7
        mov    edi, eax
        call    dword ptr [edx + 4]
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    ebp, dword ptr [esp + 0x5c]
        test    ebp, ebp
        je    L_c827
        push    ebx
        mov    ecx, esi
        call    FUN_005f07c0
        mov    bl, byte ptr [eax + 0x14]
        mov    si, word ptr [eax + 0x16]
        mov    ecx, dword ptr [edi + 0x50]
        mov    edx, dword ptr [edi + 0x54]
        add    eax, 0x14
        mov    eax, dword ptr [edi + 0x30]
        mov    dword ptr [esp + 0x14], eax
        lea    eax, [ebp + 0x14]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x64], edx
        mov    dword ptr [esp + 0x1c], 0x44
        mov    dword ptr [esp + 0x20], 4
        mov    dword ptr [esp + 0x24], 2
        mov    dword ptr [esp + 0x28], 0
        call    FUN_004ea0f0
        mov    ecx, dword ptr [esp + 0x60]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x2c], ecx
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x3c], 0x3f800000
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x44], 0
        mov    dword ptr [esp + 0x48], 0xbf800000
        mov    dword ptr [esp + 0x4c], 0xbf800000
        mov    dword ptr [esp + 0x50], 0xbf800000
        mov    byte ptr [esp + 0x34], bl
        mov    word ptr [esp + 0x36], si
        mov    byte ptr [esp + 0x38], 0
        mov    dword ptr [esp + 0x54], edx
        mov    byte ptr [esp + 0x58], 1
        mov    dword ptr [esp + 0x5c], eax
        call    FUN_004d5b70
        pop    ebx
L_c827:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x4c
        ret    4
        sub    esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esp + 0x20]
        mov    cl, byte ptr [edi + 0xc]
        mov    eax, dword ptr [edi + 0x14]
        mov    edx, dword ptr [edi + 0x10]
        mov    ebx, dword ptr [edi]
        mov    byte ptr [esi + 0x1ec], cl
        lea    ebp, [esi + 0x1f8]
        push    ebx
        mov    ecx, ebp
        mov    dword ptr [esi + 0x1f4], eax
        mov    dword ptr [esi + 0x1f0], edx
        call    FUN_0040c410
        lea    eax, [ebx + 0xc]
        push    eax
        lea    ecx, [ebp + 0xc]
        call    FUN_00421100
        mov    ecx, dword ptr [ebx + 0x18]
        mov    edx, dword ptr [edi + 4]
        mov    dword ptr [ebp + 0x18], ecx
        push    edx
        lea    ecx, [esi + 0x214]
        call    FUN_0040c410
        mov    edi, dword ptr [esi + 0x1f0]
        test    edi, edi
        je    L_c931
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x1c]
        xor    edx, 0x85739531
        cmp    edi, edx
        je    L_c931
        mov    ecx, dword ptr [g_007db098]
        mov    al, byte ptr [edi + 0x14]
        cmp    al, byte ptr [ecx + 0x28]
        je    L_c931
        mov    edx, dword ptr [edi + 4]
        cmp    dword ptr [edx], 0x421
        jne    L_c90c
        push    0x7b8d88
        lea    ecx, [esp + 0x14]
        call    FUN_0040c5d0
        mov    ecx, dword ptr [esi + 0x1e0]
        mov    edx, dword ptr [ecx + 0x18]
        lea    eax, [esp + 0x10]
        push    eax
        push    edx
        call    FUN_004e8dc0
        mov    eax, dword ptr [edi + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esi + 0x228]
        call    FUN_0041c830
        jmp    L_c941
L_c90c:
        mov    edx, dword ptr [g_007b8d88]
        mov    eax, dword ptr [g_007b8d8c]
        mov    ecx, dword ptr [g_007b8d90]
        mov    dword ptr [esi + 0x228], edx
        mov    dword ptr [esi + 0x22c], eax
        mov    dword ptr [esi + 0x230], ecx
        jmp    L_c941
L_c931:
        push    0x7b8d88
        lea    ecx, [esi + 0x228]
        call    FUN_0040c410
L_c941:
        mov    eax, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xb8]
        test    al, al
        je    L_ca70
        mov    ecx, esi
        call    FUN_005f07c0
        mov    edi, eax
        test    edi, edi
        je    L_ca34
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_ca34
        mov    ebx, dword ptr [edi + 0x5d0]
        cmp    ebx, -1
        je    L_c9db
        mov    ecx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [ecx]
        mov    edi, dword ptr [g_007dab40]
        mov    edx, dword ptr [esi + 0x78]
        xor    ebp, edi
        lea    edi, [esi + 0x78]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        mov    ecx, dword ptr [ecx + 0x30]
        lea    edx, [ebx + ebx*8]
        lea    eax, [ebx + edx*4]
        mov    edx, dword ptr [ebp + 0xc]
        lea    eax, [eax + eax*2]
        lea    eax, [eax + eax*4]
        shl    eax, 2
        sub    eax, ebx
        add    ecx, eax
        mov    eax, dword ptr [edi]
        xor    edx, 0x85739531
        lea    ebx, [edx + ecx*4 + 0x206084]
        mov    ecx, edi
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [eax + 0x4c]
        add    dword ptr [ebx], ecx
        jmp    L_ca34
L_c9db:
        mov    ecx, esi
        call    FUN_005f07c0
        mov    edx, dword ptr [g_007dab44]
        mov    edi, dword ptr [g_007dab40]
        mov    ebp, dword ptr [edx]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + 0x14]
        mov    eax, dword ptr [esi + 0x78]
        xor    ebp, edi
        lea    edi, [esi + 0x78]
        mov    ecx, edi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [eax + 0x30]
        mov    ecx, ebx
        shl    ecx, 7
        add    ecx, ebx
        shl    ecx, 3
        sub    ecx, ebx
        lea    eax, [edx + ecx*2]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [edi]
        xor    ecx, 0x85739531
        lea    ebx, [ecx + eax*4 + 0x3618]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [ebx]
        mov    eax, dword ptr [eax + 0x4c]
        add    ecx, eax
        mov    dword ptr [ebx], ecx
L_ca34:
        mov    ecx, esi
        call    FUN_005f07c0
        mov    cl, byte ptr [eax + 0xdc]
        test    cl, cl
        je    L_ca70
        mov    ecx, dword ptr [g_007dab44]
        mov    edi, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, esi
        xor    edi, edx
        call    FUN_005f07c0
        mov    ecx, dword ptr [edi + 0xc]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x14]
        xor    ecx, 0x85739531
        push    edx
        call    FUN_00544e30
L_ca70:
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        add    esi, 0x1e0
        push    esi
        push    6
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    0x14
    }
}
