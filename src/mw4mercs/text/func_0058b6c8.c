/*
 * FUN_0058b6c8 (extent 0x58b6c8-0x58bc21) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db098;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dc728;
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004e3020(void);
extern void __cdecl FUN_004e7640(void);
extern void __cdecl FUN_004f3f40(void);
extern void __cdecl FUN_004f5060(void);
extern void __cdecl FUN_004f5430(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_005347f0(void);
extern void __cdecl FUN_0053be60(void);
extern void __cdecl FUN_0058bc30(void);
extern void __cdecl FUN_0058bc60(void);
extern void __cdecl FUN_0058bcc0(void);
extern void __cdecl FUN_0058bd10(void);
extern void __cdecl FUN_0058bd40(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00767400(void);

__declspec(naked) void FUN_0058b6c8(void)
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
        mov    eax, dword ptr [ecx + 0x99c]
        test    eax, eax
        je    L_b6e9
        mov    ecx, dword ptr [eax + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    7
        call    dword ptr [eax + 4]
L_b6e9:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xf8
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    cx, word ptr [eax + 0x410]
        cmp    cx, word ptr [g_007db0ac]
        jne    L_b726
        mov    dx, word ptr [eax + 0x412]
        cmp    dx, word ptr [g_007db0ae]
        je    L_b995
L_b726:
        push    ebx
        push    ebp
        push    esi
        lea    ebx, [eax + 0x40c]
        push    1
        push    ebx
        lea    ecx, [esp + 0xcc]
        call    FUN_004d1f80
        mov    eax, dword ptr [esp + 0x100]
        test    eax, eax
        je    L_b986
        mov    eax, dword ptr [esp + 0xe0]
        test    eax, eax
        jbe    L_b986
        push    ebx
        call    FUN_004da920
        mov    ebp, eax
        mov    eax, dword ptr [edi + 0x8d0]
        add    esp, 4
        test    eax, eax
        je    L_b857
        push    0
        push    -1
        push    2
        push    0
        push    0x7b9460
        push    ebx
        push    2
        push    ebp
        push    0
        push    2
        push    0x90
        lea    ecx, [esp + 0x60]
        call    FUN_005347f0
        push    0x8bd5e8
        lea    ecx, [esp + 0x98]
        call    FUN_00767400
        push    0x8bd5e8
        lea    ecx, [esp + 0xb0]
        call    FUN_00767400
        mov    eax, dword ptr [esp + 0x34]
        push    0
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    ecx, [esp + 0x20]
        call    FUN_0041e690
        mov    ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov    dl, byte ptr [eax]
        mov    byte ptr [esp + 0x10], dl
        mov    ax, word ptr [eax + 2]
        push    0
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        mov    word ptr [esp + 0x1e], ax
        call    FUN_004d9910
        mov    esi, eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x1c]
        add    esp, 0xc
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov    eax, dword ptr [edi + 0x8d0]
        push    eax
        mov    ecx, esi
        mov    dword ptr [edi + 0x8c8], esi
        call    FUN_004f5060
        mov    ecx, esi
        call    FUN_004f5430
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        lea    ecx, [esp + 0x14]
        call    FUN_0041e710
L_b857:
        mov    eax, dword ptr [edi + 0x8d4]
        test    eax, eax
        je    L_b986
        push    2
        push    ebp
        push    0
        push    2
        push    0x90
        lea    ecx, [esp + 0x48]
        call    FUN_0053be60
        push    0x7b9460
        lea    ecx, [esp + 0x54]
        call    FUN_004f3f40
        push    ebx
        lea    ecx, [esp + 0x8c]
        mov    dword ptr [esp + 0x84], 2
        mov    dword ptr [esp + 0x88], 0
        call    FUN_00523e60
        push    0x8bd5e8
        lea    ecx, [esp + 0x98]
        mov    dword ptr [esp + 0x90], 0
        mov    dword ptr [esp + 0x94], 0xffffffff
        call    FUN_00767400
        push    0x8bd5e8
        lea    ecx, [esp + 0xb0]
        call    FUN_00767400
        mov    eax, dword ptr [esp + 0x34]
        push    0
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    ecx, [esp + 0x20]
        call    FUN_0041e690
        mov    ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov    dl, byte ptr [eax]
        mov    byte ptr [esp + 0x10], dl
        mov    ax, word ptr [eax + 2]
        push    0
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        mov    word ptr [esp + 0x1e], ax
        call    FUN_004d9910
        mov    edx, dword ptr [g_007dab40]
        mov    esi, eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0x1c]
        add    esp, 0xc
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov    eax, dword ptr [edi + 0x8d4]
        push    eax
        mov    ecx, esi
        mov    dword ptr [edi + 0x8cc], esi
        call    FUN_004f5060
        mov    ecx, dword ptr [edi + 0x8c8]
        call    FUN_004f5430
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        lea    ecx, [esp + 0x14]
        call    FUN_0041e710
L_b986:
        lea    ecx, [esp + 0xc4]
        call    FUN_004d21c0
        pop    esi
        pop    ebp
        pop    ebx
L_b995:
        pop    edi
        add    esp, 0xf8
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ecx, esi
        je    L_b9c7
        call    FUN_0058bc60
        mov    eax, 1
        mov    dword ptr [esi + 0x4c0], eax
        mov    byte ptr [esi + 0x930], al
        pop    esi
        ret    
L_b9c7:
        call    FUN_0058bd10
        mov    dword ptr [esi + 0x4c0], 0
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ecx, esi
        je    L_ba07
        call    FUN_0058bcc0
        mov    eax, 1
        mov    dword ptr [esi + 0x4c4], eax
        mov    byte ptr [esi + 0x931], al
        pop    esi
        ret    
L_ba07:
        call    FUN_0058bd40
        mov    dword ptr [esi + 0x4c4], 0
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
        sub    esp, 0x170
        push    esi
        push    edi
        push    0
        mov    edi, ecx
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x9c0]
        mov    esi, dword ptr [esp + 0x17c]
        mov    ax, word ptr [esi]
        cmp    ax, word ptr [g_007db0ac]
        jne    L_ba5b
        mov    cx, word ptr [esi + 2]
        cmp    cx, word ptr [g_007db0ae]
        je    L_bc16
L_ba5b:
        push    1
        push    esi
        lea    ecx, [esp + 0x7c]
        call    FUN_004d1f80
        mov    eax, dword ptr [esp + 0xb0]
        test    eax, eax
        je    L_bc0d
        mov    eax, dword ptr [esp + 0x90]
        test    eax, eax
        jbe    L_bc0d
        push    ebx
        push    esi
        call    FUN_004da920
        add    esp, 4
        push    0x7b9460
        lea    ecx, [esp + 0x2c]
        mov    ebx, eax
        call    FUN_00419460
        mov    edx, dword ptr [esp + 0x188]
        push    2
        push    0
        push    1
        push    edx
        lea    ecx, [esp + 0x38]
        call    FUN_0041fde0
        mov    ecx, dword ptr [esp + 0x184]
        lea    eax, [esp + 0xbc]
        push    eax
        call    FUN_00507f90
        fld    dword ptr [eax + 0xc]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x34]
        push    0x8bd5e8
        push    0x8bd5e8
        push    0
        push    -1
        push    2
        push    0
        mov    eax, ecx
        mov    dword ptr [esp + 0x2c], ecx
        mov    ecx, edx
        mov    dword ptr [esp + 0x30], edx
        lea    edx, [esp + 0x40]
        push    edx
        push    esi
        push    2
        push    ebx
        push    0
        push    2
        mov    dword ptr [esp + 0x84], ecx
        push    0x90
        lea    ecx, [esp + 0x120]
        mov    dword ptr [esp + 0x78], eax
        call    FUN_004e7640
        mov    eax, dword ptr [esp + 0xec]
        push    0
        push    eax
        lea    ecx, [esp + 0xf4]
        push    ecx
        lea    ecx, [esp + 0x64]
        call    FUN_0041e690
        mov    ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov    dl, byte ptr [eax]
        mov    byte ptr [esp + 0xc], dl
        mov    ax, word ptr [eax + 2]
        push    0
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esp + 0x60]
        push    edx
        mov    word ptr [esp + 0x1a], ax
        call    FUN_004d9910
        mov    ebx, dword ptr [g_007dab40]
        mov    esi, eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, ebx
        mov    ecx, dword ptr [ecx + 0x1c]
        add    esp, 0xc
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x48]
        mov    eax, dword ptr [edi + 0xd8]
        add    eax, 0x80
        fld    dword ptr [eax + 8]
        push    -1
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [eax + 0x18]
        push    1
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [eax + 0x28]
        push    2
        lea    ecx, [esp + 0x28]
        push    ecx
        fstp    dword ptr [esp + 0x34]
        lea    ecx, [esp + 0x38]
        call    FUN_0041fde0
        xor    edx, edx
        mov    dl, byte ptr [edi + 0x4bc]
        mov    ecx, edi
        push    edx
        call    FUN_0058bc30
        test    eax, eax
        pop    ebx
        je    L_bc04
        mov    edi, dword ptr [edi + 0x988]
        test    edi, edi
        je    L_bc04
        mov    ecx, dword ptr [edi + 4]
        cmp    dword ptr [ecx], 0x4ad
        jne    L_bc04
        mov    ecx, dword ptr [g_007dc728]
        push    eax
        push    0x40000000
        lea    edx, [esp + 0x2c]
        push    edx
        call    FUN_004e3020
L_bc04:
        lea    ecx, [esp + 0x54]
        call    FUN_0041e710
L_bc0d:
        lea    ecx, [esp + 0x74]
        call    FUN_004d21c0
L_bc16:
        pop    edi
        pop    esi
        add    esp, 0x170
        ret    0xc
    }
}
