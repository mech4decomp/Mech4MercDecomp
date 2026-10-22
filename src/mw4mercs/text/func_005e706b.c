/*
 * FUN_005e706b (extent 0x5e706b-0x5e75f3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db098;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007f1f84;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_00421100(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_00544e30(void);
extern void __cdecl FUN_0054a780(void);
extern void __cdecl FUN_005922e0(void);
extern void __cdecl FUN_0059afb0(void);
extern void __cdecl FUN_005ef7f0(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_005f07d0(void);
extern void __cdecl FUN_00767400(void);

__declspec(naked) void FUN_005e706b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1a8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    esi, eax
        mov    cx, word ptr [esi + 0x90]
        cmp    cx, word ptr [g_007db0ac]
        lea    eax, [esi + 0x90]
        jne    L_70ae
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_7335
L_70ae:
        push    eax
        call    FUN_004da920
        add    esp, 4
        push    0x8bd5e8
        lea    ecx, [esp + 0xa0]
        mov    dword ptr [esp + 0x30], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea    ecx, [esp + 0x4c]
        call    FUN_00767400
        mov    ebp, dword ptr [edi + 0x198]
        lea    eax, [esp + 0xd4]
        push    eax
        mov    ecx, ebp
        call    FUN_00507f90
        mov    ecx, dword ptr [eax + 0xc]
        mov    ebx, dword ptr [edi + 0x1d4]
        fld    dword ptr [ebx + 0x18]
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        push    ecx
        mov    dword ptr [esp + 0x14], ecx
        lea    ecx, [ebx + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        lea    ecx, [esp + 0x68]
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_0040ca40
        lea    edx, [esp + 0x60]
        push    edx
        push    ebx
        lea    ecx, [esp + 0x38]
        call    FUN_0040cbb0
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x10]
        lea    eax, [esp + 0xd4]
        push    eax
        mov    ecx, ebp
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x38]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x3c]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x48]
        call    FUN_00507f90
        mov    ecx, dword ptr [eax + 0xc]
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x10], ecx
        push    0x7b9460
        lea    ecx, [esp + 0x70]
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00419460
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        push    0
        push    1
        mov    dword ptr [esp + 0x80], ecx
        push    2
        lea    ecx, [esp + 0x48]
        push    ecx
        lea    ecx, [esp + 0x7c]
        mov    dword ptr [esp + 0x98], edx
        mov    dword ptr [esp + 0xa8], eax
        call    FUN_0041fde0
        mov    ecx, dword ptr [esi + 0x80]
        mov    edx, dword ptr [esi + 0x78]
        mov    eax, dword ptr [esi + 0x7c]
        mov    dword ptr [esp + 0x28], ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x20], edx
        mov    dword ptr [esp + 0x24], eax
        call    FUN_005f07d0
        test    eax, eax
        je    L_71f0
        mov    ecx, edi
        call    FUN_005f07d0
        fld    dword ptr [esp + 0x28]
        fadd    dword ptr [eax + 0x440]
        fstp    dword ptr [esp + 0x28]
L_71f0:
        lea    edx, [esp + 0x6c]
        push    edx
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0xa4]
        call    FUN_0041c680
        mov    ecx, dword ptr [esi + 0x84]
        mov    edx, dword ptr [esi + 0x88]
        mov    eax, dword ptr [esi + 0x8c]
        mov    dword ptr [esp + 0x48], ecx
        mov    ecx, dword ptr [esi + 0x30]
        push    ecx
        mov    ecx, dword ptr [esi + 0x60]
        mov    dword ptr [esp + 0x50], edx
        mov    edx, dword ptr [esi + 0x68]
        push    edx
        mov    edx, dword ptr [esi + 0x5c]
        mov    dword ptr [esp + 0x58], eax
        mov    eax, dword ptr [esi + 0x64]
        push    eax
        push    ecx
        push    edx
        mov    ecx, edi
        call    FUN_005f07c0
        mov    ecx, eax
        call    FUN_0059afb0
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_004ea0f0
        mov    eax, dword ptr [esi + 0x58]
        mov    ecx, dword ptr [esi + 0x50]
        mov    edx, dword ptr [esi + 0x54]
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x6c]
        push    eax
        lea    ecx, [esp + 0xc4]
        push    ecx
        push    0
        push    -1
        push    4
        push    0
        lea    edx, [esp + 0xa8]
        push    edx
        lea    eax, [esi + 0x90]
        push    eax
        mov    eax, dword ptr [esp + 0x70]
        push    2
        push    eax
        push    0
        push    2
        push    0xb4
        lea    ecx, [esp + 0x15c]
        call    FUN_005922e0
        mov    ecx, dword ptr [esp + 0x104]
        push    0
        push    ecx
        lea    edx, [esp + 0x10c]
        push    edx
        lea    ecx, [esp + 0xc0]
        call    FUN_0041e690
        mov    ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    byte ptr [esp + 0x1c], cl
        mov    dx, word ptr [eax + 2]
        push    0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0xbc]
        push    ecx
        mov    word ptr [esp + 0x2a], dx
        call    FUN_004d9910
        mov    ecx, dword ptr [g_007dab44]
        mov    ebx, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        add    esp, 0xc
        xor    edx, ebx
        mov    ecx, dword ptr [edx + 0x1c]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        mov    edi, dword ptr [edi + 0x17c]
        test    edi, edi
        je    L_7329
        mov    esi, dword ptr [esi + 0x30]
        cmp    esi, 0x79
        je    L_7329
        cmp    esi, 0x7a
        je    L_7329
        push    3
        mov    ecx, edi
        call    FUN_0054a780
L_7329:
        lea    ecx, [esp + 0xb4]
        call    FUN_0041e710
L_7335:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1a8
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
        nop    
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    cl, byte ptr [edi + 0xc]
        mov    eax, dword ptr [edi + 0x14]
        mov    edx, dword ptr [edi + 0x10]
        mov    ebx, dword ptr [edi]
        mov    byte ptr [esi + 0x1e0], cl
        lea    ebp, [esi + 0x1ec]
        push    ebx
        mov    ecx, ebp
        mov    dword ptr [esi + 0x1e8], eax
        mov    dword ptr [esi + 0x1e4], edx
        call    FUN_0040c410
        lea    eax, [ebx + 0xc]
        push    eax
        lea    ecx, [ebp + 0xc]
        call    FUN_00421100
        mov    ecx, dword ptr [ebx + 0x18]
        mov    edx, dword ptr [edi + 4]
        mov    dword ptr [ebp + 0x18], ecx
        push    edx
        lea    ecx, [esi + 0x208]
        call    FUN_0040c410
        mov    ecx, esi
        call    FUN_005ef7f0
        test    al, al
        je    L_74f5
        mov    ecx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0xb8]
        test    al, al
        je    L_74e4
        mov    ecx, esi
        call    FUN_005f07c0
        mov    edi, eax
        test    edi, edi
        je    L_74a8
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_74a8
        mov    ebx, dword ptr [edi + 0x5d0]
        cmp    ebx, -1
        je    L_744f
        mov    edx, dword ptr [g_007dab44]
        mov    edi, dword ptr [g_007dab40]
        mov    ebp, dword ptr [edx]
        mov    eax, dword ptr [esi + 0x78]
        xor    ebp, edi
        lea    edi, [esi + 0x78]
        mov    ecx, edi
        call    dword ptr [eax + 4]
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
        jmp    L_74a8
L_744f:
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
L_74a8:
        mov    ecx, esi
        call    FUN_005f07c0
        mov    cl, byte ptr [eax + 0xdc]
        test    cl, cl
        je    L_74e4
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
L_74e4:
        mov    esi, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [esi]
        push    0
        push    6
        mov    ecx, esi
        call    dword ptr [eax + 4]
L_74f5:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x4c
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [edi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    7
        mov    esi, eax
        call    dword ptr [edx + 4]
        mov    ebp, dword ptr [esp + 0x5c]
        test    ebp, ebp
        je    L_75ea
        push    ebx
        mov    ecx, edi
        call    FUN_005f07c0
        mov    bl, byte ptr [eax + 0x14]
        mov    di, word ptr [eax + 0x16]
        mov    ecx, dword ptr [esi + 0x50]
        mov    edx, dword ptr [esi + 0x54]
        add    eax, 0x14
        mov    eax, dword ptr [esi + 0x30]
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
        mov    word ptr [esp + 0x36], di
        mov    byte ptr [esp + 0x38], 2
        mov    dword ptr [esp + 0x54], edx
        mov    byte ptr [esp + 0x58], 1
        mov    dword ptr [esp + 0x5c], eax
        call    FUN_004d5b70
        pop    ebx
L_75ea:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x4c
        ret    4
    }
}
