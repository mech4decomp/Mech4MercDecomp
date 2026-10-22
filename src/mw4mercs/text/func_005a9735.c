/*
 * FUN_005a9735 (extent 0x5a9735-0x5a9ab4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_0076d3c8;
extern float  g_00782340;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db098;
extern int    g_007f2098;
extern int    g_007f255c;
extern int    g_007f2560;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004e7640(void);
extern void __cdecl FUN_004f5060(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_00507f90(void);

__declspec(naked) void FUN_005a9735(void)
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
        sub    esp, 0x1a4
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        fld    dword ptr [esi + 0x244]
        fcomp    dword ptr [g_0076d3c8]
        mov    ecx, eax
        mov    word ptr [esp + 4], 0xffff
        mov    word ptr [esp + 6], 0
        fnstsw  ax
        test    ah, 0x41
        je    L_978a
        mov    dx, word ptr [ecx + 0x98]
        mov    word ptr [esp + 4], dx
        mov    ax, word ptr [ecx + 0x9a]
        jmp    L_97ed
L_978a:
        fld    dword ptr [esi + 0x244]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        je    L_97b2
        mov    dx, word ptr [ecx + 0x9c]
        mov    word ptr [esp + 4], dx
        mov    ax, word ptr [ecx + 0x9e]
        jmp    L_97ed
L_97b2:
        fld    dword ptr [esi + 0x244]
        fcomp    qword ptr [g_00782340]
        fnstsw  ax
        test    ah, 1
        je    L_97da
        mov    dx, word ptr [ecx + 0xa0]
        mov    word ptr [esp + 4], dx
        mov    ax, word ptr [ecx + 0xa2]
        jmp    L_97ed
L_97da:
        mov    dx, word ptr [ecx + 0xa4]
        mov    word ptr [esp + 4], dx
        mov    ax, word ptr [ecx + 0xa6]
L_97ed:
        push    1
        lea    ecx, [esp + 8]
        push    ecx
        lea    ecx, [esp + 0xac]
        mov    word ptr [esp + 0xe], ax
        call    FUN_004d1f80
        mov    eax, dword ptr [esp + 0xe0]
        test    eax, eax
        je    L_9986
        mov    eax, dword ptr [esp + 0xc0]
        test    eax, eax
        jbe    L_9986
        push    ebx
        lea    edx, [esp + 8]
        push    edi
        push    edx
        call    FUN_004da920
        add    esp, 4
        push    0x7b9460
        lea    ecx, [esp + 0x30]
        mov    ebx, eax
        call    FUN_00419460
        mov    edi, dword ptr [esi + 0x198]
        lea    eax, [esp + 0xf0]
        push    eax
        mov    ecx, edi
        call    FUN_00507f90
        push    eax
        lea    ecx, [esp + 0x80]
        call    FUN_00419460
        fld    dword ptr [esp + 0x84]
        push    2
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x98]
        push    0
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0xac]
        push    1
        lea    ecx, [esp + 0x20]
        push    ecx
        fstp    dword ptr [esp + 0x2c]
        lea    ecx, [esp + 0x3c]
        call    FUN_0041fde0
        lea    edx, [esp + 0xf0]
        push    edx
        mov    ecx, edi
        call    FUN_00507f90
        fld    dword ptr [eax + 0xc]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x38]
        push    0x8bd5e8
        push    0x8bd5e8
        push    0
        push    -1
        push    2
        push    0
        mov    eax, ecx
        mov    dword ptr [esp + 0x3c], ecx
        mov    ecx, edx
        mov    dword ptr [esp + 0x40], edx
        lea    edx, [esp + 0x44]
        push    edx
        mov    dword ptr [esp + 0x64], eax
        lea    eax, [esp + 0x28]
        push    eax
        push    2
        push    ebx
        push    0
        push    2
        mov    dword ptr [esp + 0x88], ecx
        push    0x90
        lea    ecx, [esp + 0x154]
        call    FUN_004e7640
        mov    ecx, dword ptr [esp + 0x120]
        push    0
        push    ecx
        lea    edx, [esp + 0x128]
        push    edx
        lea    ecx, [esp + 0x68]
        call    FUN_0041e690
        mov    ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    byte ptr [esp + 0x10], cl
        mov    dx, word ptr [eax + 2]
        push    0
        lea    eax, [esp + 0x14]
        mov    word ptr [esp + 0x16], dx
        push    eax
        lea    ecx, [esp + 0x64]
        push    ecx
        call    FUN_004d9910
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    esi, eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x1c]
        add    esp, 0xc
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        push    edi
        mov    ecx, esi
        call    FUN_004f5060
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x48]
        lea    ecx, [esp + 0x5c]
        call    FUN_0041e710
        pop    edi
        pop    ebx
L_9986:
        lea    ecx, [esp + 0xa4]
        call    FUN_004d21c0
        pop    esi
        add    esp, 0x1a4
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [edx + 0x14]
        mov    dword ptr [ecx + 0x1f4], eax
        mov    al, byte ptr [edx + 0xc]
        mov    byte ptr [ecx + 0x1ec], al
        mov    eax, dword ptr [edx + 0x10]
        push    esi
        mov    dword ptr [ecx + 0x1f0], eax
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [eax]
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [ecx + 0x1f8], esi
        mov    esi, dword ptr [eax + 4]
        mov    dword ptr [ecx + 0x1fc], esi
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ecx + 0x200], esi
        mov    esi, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0x204], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    dword ptr [ecx + 0x208], esi
        mov    esi, dword ptr [eax + 0x14]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ecx + 0x210], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [ecx + 0x214], eax
        mov    eax, dword ptr [edx + 4]
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [ecx + 0x20c], esi
        mov    dword ptr [ecx + 0x218], eax
        mov    dword ptr [ecx + 0x21c], edx
        pop    esi
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
        nop    
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9aa8
        mov    eax, dword ptr [g_007f255c]
        mov    ecx, dword ptr [g_007f2560]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5a9af0
        push    0
        push    0
        push    ecx
        push    0x7851e0
        push    0x4a4
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f2098], esi
        pop    esi
        ret    
L_9aa8:
        mov    dword ptr [g_007f2098], 0
        pop    esi
        ret    
    }
}
