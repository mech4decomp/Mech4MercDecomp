/*
 * FUN_00591f8c (extent 0x591f8c-0x5923e1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db098;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_0054a780(void);
extern void __cdecl FUN_005922e0(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_005f07d0(void);
extern void __cdecl FUN_00767400(void);

__declspec(naked) void FUN_00591f8c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1d8
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
        mov    dword ptr [esp + 0x4c], eax
        jne    L_1fd2
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_22c6
L_1fd2:
        push    eax
        call    FUN_004da920
        add    esp, 4
        push    0x8bd5e8
        lea    ecx, [esp + 0x98]
        mov    dword ptr [esp + 0x60], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea    ecx, [esp + 0x80]
        call    FUN_00767400
        mov    ebp, dword ptr [edi + 0x198]
        lea    eax, [esp + 0xfc]
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
        lea    ecx, [esp + 0x44]
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_0040ca40
        lea    edx, [esp + 0x3c]
        push    edx
        push    ebx
        lea    ecx, [esp + 0x6c]
        call    FUN_0040cbb0
        fld    dword ptr [esp + 0x64]
        fsub    dword ptr [esp + 0x10]
        lea    eax, [esp + 0xfc]
        push    eax
        mov    ecx, ebp
        fstp    dword ptr [esp + 0x74]
        fld    dword ptr [esp + 0x6c]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x78]
        fld    dword ptr [esp + 0x70]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x7c]
        call    FUN_00507f90
        mov    ecx, dword ptr [eax + 0xc]
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x10], ecx
        push    0x7b9460
        lea    ecx, [esp + 0xb0]
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00419460
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x3c], ecx
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    ecx, [esp + 0xb0]
        mov    dword ptr [esp + 0x44], edx
        mov    dword ptr [esp + 0x48], eax
        call    FUN_0040d030
        push    0
        push    1
        push    2
        lea    edx, [esp + 0x7c]
        push    edx
        lea    ecx, [esp + 0xbc]
        call    FUN_0041fde0
        mov    ecx, dword ptr [esi + 0x7c]
        mov    eax, dword ptr [esi + 0x78]
        mov    edx, dword ptr [esi + 0x80]
        mov    dword ptr [esp + 0x2c], ecx
        mov    dword ptr [esp + 0x28], eax
        mov    dword ptr [esp + 0x30], edx
        mov    ecx, edi
        call    FUN_005f07d0
        test    eax, eax
        je    L_2125
        mov    ecx, edi
        call    FUN_005f07d0
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [eax + 0x440]
        fstp    dword ptr [esp + 0x30]
L_2125:
        lea    eax, [esp + 0xac]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        lea    ecx, [esp + 0x9c]
        call    FUN_0041c680
        mov    ecx, dword ptr [esi + 0x8c]
        mov    edx, dword ptr [esi + 0x84]
        mov    eax, dword ptr [esi + 0x88]
        mov    dword ptr [esp + 0x84], ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x7c], edx
        mov    dword ptr [esp + 0x80], eax
        call    FUN_005f07c0
        mov    edx, dword ptr [esi + 0x9c]
        mov    ecx, dword ptr [esi + 0x98]
        mov    dword ptr [esp + 0x20], edx
        mov    edx, dword ptr [esi + 0x68]
        mov    dword ptr [esp + 0x48], edx
        mov    edx, dword ptr [esi + 0x64]
        mov    dword ptr [esp + 0x24], edx
        mov    edx, dword ptr [esi + 0x60]
        mov    dword ptr [esp + 0x50], edx
        mov    edx, dword ptr [esi + 0x5c]
        mov    dword ptr [esp + 0x34], edx
        mov    edx, dword ptr [esi + 0x58]
        mov    dword ptr [esp + 0x58], edx
        mov    edx, dword ptr [esi + 0x50]
        mov    dword ptr [esp + 0x38], ecx
        mov    ecx, dword ptr [esi + 0x30]
        push    ecx
        mov    ecx, dword ptr [esp + 0x4c]
        mov    dword ptr [esp + 0x64], edx
        mov    edx, dword ptr [esi + 0x54]
        push    ecx
        mov    ecx, dword ptr [esp + 0x58]
        mov    dword ptr [esp + 0x5c], edx
        mov    edx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x40]
        push    ecx
        push    edx
        push    ecx
        add    eax, 0x14
        mov    ecx, esp
        push    eax
        call    FUN_004ea0f0
        mov    eax, dword ptr [esp + 0x70]
        mov    ecx, dword ptr [esp + 0x78]
        mov    edx, dword ptr [esp + 0x6c]
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0xa0]
        push    eax
        mov    eax, dword ptr [esp + 0x74]
        lea    ecx, [esp + 0xbc]
        push    ecx
        mov    ecx, dword ptr [esp + 0x88]
        push    0
        push    -1
        push    4
        push    0
        lea    edx, [esp + 0xe8]
        push    edx
        push    eax
        push    2
        push    ecx
        push    0
        push    2
        push    0xb4
        lea    ecx, [esp + 0x184]
        call    FUN_005922e0
        mov    edx, dword ptr [esp + 0x38]
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x12c]
        push    0
        mov    dword ptr [esp + 0x1e4], edx
        mov    dword ptr [esp + 0x1e8], eax
        push    ecx
        lea    edx, [esp + 0x134]
        push    edx
        lea    ecx, [esp + 0xe8]
        call    FUN_0041e690
        mov    ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    byte ptr [esp + 0x1c], cl
        mov    dx, word ptr [eax + 2]
        push    0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0xe4]
        push    ecx
        mov    word ptr [esp + 0x2a], dx
        call    FUN_004d9910
        mov    ecx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        xor    edx, ebp
        mov    ecx, dword ptr [edx + 0x1c]
        add    esp, 0xc
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        mov    ecx, dword ptr [edi + 0x17c]
        test    ecx, ecx
        je    L_22ba
        push    3
        call    FUN_0054a780
L_22ba:
        lea    ecx, [esp + 0xdc]
        call    FUN_0041e710
L_22c6:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1d8
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 8], ecx
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esi + 0x14], ecx
        push    0x7dc694
        lea    ecx, [esi + 0x18]
        mov    dword ptr [esi + 4], 2
        mov    dword ptr [esi + 0xc], edx
        mov    dword ptr [esi + 0x10], eax
        call    FUN_004ea0f0
        mov    edx, dword ptr [esp + 0x20]
        push    edx
        lea    ecx, [esi + 0x1c]
        call    FUN_00419460
        mov    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x24]
        mov    dword ptr [esi + 0x4c], eax
        mov    eax, dword ptr [esp + 0x1c]
        mov    dx, word ptr [eax]
        mov    ax, word ptr [eax + 2]
        mov    dword ptr [esi + 0x50], ecx
        mov    ecx, dword ptr [esp + 0x30]
        mov    word ptr [esi + 0x56], ax
        mov    eax, dword ptr [esp + 0x34]
        mov    word ptr [esi + 0x54], dx
        mov    edx, dword ptr [esp + 0x2c]
        mov    dword ptr [esi + 0x58], ecx
        push    eax
        lea    ecx, [esi + 0x60]
        mov    dword ptr [esi + 0x5c], edx
        call    FUN_00767400
        mov    ecx, dword ptr [esp + 0x38]
        push    ecx
        lea    ecx, [esi + 0x78]
        call    FUN_00767400
        mov    edx, dword ptr [esp + 0x3c]
        mov    eax, dword ptr [esp + 0x44]
        mov    cl, byte ptr [esp + 0x48]
        mov    dword ptr [esi + 0x90], edx
        mov    dx, word ptr [esp + 0x4a]
        mov    dword ptr [esi + 0x94], eax
        mov    eax, dword ptr [esp + 0x40]
        mov    byte ptr [esi + 0x98], cl
        mov    ecx, dword ptr [esp + 0x4c]
        mov    word ptr [esi + 0x9a], dx
        mov    edx, dword ptr [esp + 0x50]
        mov    dword ptr [esi + 0x9c], eax
        mov    eax, dword ptr [esp + 0x54]
        mov    dword ptr [esi + 0xa0], ecx
        mov    ecx, dword ptr [esp + 0x58]
        mov    dword ptr [esi + 0xa4], edx
        mov    edx, dword ptr [esp + 0x5c]
        mov    dword ptr [esi + 0xa8], eax
        mov    dword ptr [esi + 0xac], ecx
        mov    dword ptr [esi + 0xb0], edx
        mov    eax, esi
        pop    esi
        ret    0x58
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
