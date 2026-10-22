/*
 * FUN_005cd8e7 (extent 0x5cd8e7-0x5cdda9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f23d8;
extern int    g_007f244c;
extern int    g_007f25c0;
extern int    g_007f268c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00581210(void);
extern void __cdecl FUN_00581330(void);
extern void __cdecl FUN_005b38b0(void);
extern void __cdecl FUN_005cd950(void);
extern void __cdecl FUN_005d2340(void);
extern void __cdecl FUN_005d65c0(void);
extern void __cdecl FUN_005d65e0(void);
extern void __cdecl FUN_005d6610(void);
extern void __cdecl FUN_005d6660(void);
extern void __cdecl FUN_005d6680(void);
extern void __cdecl FUN_005d67d0(void);
extern void __cdecl FUN_005db6e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005cd8e7(void)
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
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x4dc
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d93b
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f23d8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005cd950
        mov    esi, eax
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_d93b:
        xor    esi, esi
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x48]
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        sub    esp, 0xc
        mov    eax, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005db6e0
        lea    ecx, [esp + 0x2c]
        lea    edi, [esi + 0x420]
        push    ecx
        xor    ebx, ebx
        mov    ecx, edi
        mov    dword ptr [esi + 0x3e8], ebx
        call    FUN_005d65c0
        lea    edx, [esp + 0x2c]
        push    edx
        lea    ecx, [esi + 0x478]
        call    FUN_005d65e0
        lea    eax, [esp + 0x2c]
        lea    ebp, [esi + 0x484]
        push    eax
        mov    ecx, ebp
        call    FUN_005d6610
        lea    edx, [esp + 0x2c]
        lea    ecx, [esi + 0x490]
        push    edx
        call    FUN_005b38b0
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esi + 0x4b0]
        call    FUN_005b38b0
        lea    ecx, [esp + 0x2c]
        push    ecx
        lea    ecx, [esi + 0x4c8]
        call    FUN_005d6610
        mov    edx, dword ptr [g_007f244c]
        push    edx
        mov    dword ptr [esi], 0x787ef4
        call    FUN_006f4950
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x36c], eax
        mov    dword ptr [esi + 0x370], eax
        mov    dword ptr [esi + 0x374], eax
        mov    dword ptr [esi + 0x378], eax
        mov    dword ptr [esi + 0x37c], eax
        mov    dword ptr [esi + 0x380], eax
        mov    dword ptr [esi + 0x390], eax
        mov    dword ptr [esi + 0x394], eax
        mov    dword ptr [esi + 0x398], eax
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x18], eax
        lea    eax, [esp + 0x10]
        mov    dword ptr [esi + 0x4a4], ebx
        push    eax
        lea    ecx, [esi + 0x39c]
        mov    dword ptr [esi + 0x45c], ebx
        mov    dword ptr [esi + 0x470], ebx
        mov    dword ptr [esi + 0x364], ebx
        mov    dword ptr [esi + 0x368], ebx
        mov    dword ptr [esi + 0x3d4], ebx
        mov    byte ptr [esi + 0x4ac], bl
        mov    dword ptr [esi + 0x4a8], ebx
        call    FUN_0040c410
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esi + 0x384]
        mov    dword ptr [esp + 0x14], 0xbf800000
        mov    dword ptr [esp + 0x18], 0xbf800000
        mov    dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        mov    dword ptr [esp + 0x10], 0xbf800000
        mov    dword ptr [esp + 0x14], 0xbf800000
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esi + 0x3ec]
        mov    dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esi + 0x3f8]
        mov    dword ptr [esp + 0x14], 0xbf800000
        mov    dword ptr [esp + 0x18], 0xbf800000
        mov    dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esi + 0x404]
        mov    dword ptr [esp + 0x14], 0xbf800000
        mov    dword ptr [esp + 0x18], 0xbf800000
        mov    dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esi + 0x410]
        mov    dword ptr [esp + 0x14], 0xbf800000
        mov    dword ptr [esp + 0x18], 0xbf800000
        mov    dword ptr [esp + 0x1c], 0xbf800000
        call    FUN_0040c410
        mov    eax, dword ptr [edi + 4]
        cmp    eax, dword ptr [edi + 8]
        mov    dword ptr [esi + 0x41c], ebx
        mov    dword ptr [esi + 0x430], ebx
        mov    dword ptr [esp + 0x2c], ebx
        je    L_db67
        cmp    eax, ebx
        je    L_db5f
        mov    dword ptr [eax], ebx
L_db5f:
        add    eax, 4
        mov    dword ptr [edi + 4], eax
        jmp    L_db76
L_db67:
        push    1
        lea    ecx, [esp + 0x30]
        push    ecx
        push    eax
        mov    ecx, edi
        call    FUN_00581210
L_db76:
        mov    eax, dword ptr [edi + 4]
        cmp    eax, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x2c], ebx
        je    L_db90
        cmp    eax, ebx
        je    L_db88
        mov    dword ptr [eax], ebx
L_db88:
        add    eax, 4
        mov    dword ptr [edi + 4], eax
        jmp    L_db9f
L_db90:
        push    1
        lea    edx, [esp + 0x30]
        push    edx
        push    eax
        mov    ecx, edi
        call    FUN_00581210
L_db9f:
        mov    eax, dword ptr [edi + 4]
        cmp    eax, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x2c], ebx
        je    L_dbb9
        cmp    eax, ebx
        je    L_dbb1
        mov    dword ptr [eax], ebx
L_dbb1:
        add    eax, 4
        mov    dword ptr [edi + 4], eax
        jmp    L_dbc8
L_dbb9:
        push    1
        lea    ecx, [esp + 0x30]
        push    ecx
        push    eax
        mov    ecx, edi
        call    FUN_00581210
L_dbc8:
        mov    eax, dword ptr [edi + 4]
        cmp    eax, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x2c], ebx
        je    L_dbed
        lea    edx, [esp + 0x2c]
        push    edx
        push    eax
        call    FUN_00581330
        mov    eax, dword ptr [edi + 4]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [edi + 4], eax
        jmp    L_dbfc
L_dbed:
        push    1
        lea    ecx, [esp + 0x30]
        push    ecx
        push    eax
        mov    ecx, edi
        call    FUN_00581210
L_dbfc:
        mov    eax, dword ptr [edi + 4]
        cmp    eax, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x2c], ebx
        je    L_dc21
        lea    edx, [esp + 0x2c]
        push    edx
        push    eax
        call    FUN_00581330
        mov    eax, dword ptr [edi + 4]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [edi + 4], eax
        jmp    L_dc30
L_dc21:
        push    1
        lea    ecx, [esp + 0x30]
        push    ecx
        push    eax
        mov    ecx, edi
        call    FUN_00581210
L_dc30:
        push    ebx
        mov    ecx, esi
        mov    dword ptr [esi + 0x42c], ebx
        mov    byte ptr [esi + 0x434], bl
        mov    byte ptr [esi + 0x435], bl
        mov    dword ptr [esi + 0x3e4], ebx
        mov    dword ptr [esi + 0x3e0], ebx
        mov    dword ptr [esi + 0x3dc], ebx
        mov    dword ptr [esi + 0x450], ebx
        mov    dword ptr [esi + 0x3a8], ebx
        mov    dword ptr [esi + 0x3ac], ebx
        mov    dword ptr [esi + 0x3b0], ebx
        mov    dword ptr [esi + 0x3b4], ebx
        call    FUN_005d2340
        mov    eax, dword ptr [ebp]
        mov    edx, dword ptr [ebp + 8]
        lea    edi, [ebp + 8]
        sub    edx, eax
        sar    edx, 2
        cmp    edx, 0xa
        mov    byte ptr [esi + 0x3cc], bl
        mov    byte ptr [esi + 0x3cd], bl
        mov    byte ptr [esi + 0x459], bl
        mov    byte ptr [esi + 0x3ce], bl
        mov    byte ptr [esi + 0x3cf], bl
        jae    L_dd05
        mov    edx, dword ptr [ebp + 4]
        mov    ecx, edx
        sub    ecx, eax
        sar    ecx, 2
        cmp    eax, ebx
        mov    dword ptr [esp + 0x28], ecx
        je    L_dce9
        push    edx
        push    eax
        push    0xa
        mov    ecx, ebp
        call    FUN_005d67d0
        mov    ecx, dword ptr [edi]
        mov    dword ptr [esp + 0x2c], eax
        mov    eax, dword ptr [ebp]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_005d6660
        mov    eax, dword ptr [esp + 0x2c]
        jmp    L_dcf3
L_dce9:
        push    0x28
        call    FUN_004084d0
        add    esp, 4
L_dcf3:
        mov    edx, dword ptr [esp + 0x28]
        lea    ecx, [eax + edx*4]
        mov    dword ptr [ebp], eax
        add    eax, 0x28
        mov    dword ptr [ebp + 4], ecx
        mov    dword ptr [edi], eax
L_dd05:
        push    0x14
        lea    ecx, [esi + 0x490]
        call    FUN_005d6680
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea    ecx, [esp + 0x1c]
        call    FUN_0040c9c0
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esi + 0x4bc]
        call    FUN_0040c410
        mov    edi, dword ptr [esi + 0x170]
        cmp    edi, ebx
        mov    dword ptr [esi + 0x460], ebx
        mov    dword ptr [esi + 0x3d0], ebx
        mov    dword ptr [esi + 0x3d8], ebx
        mov    dword ptr [esi + 0x4d4], ebx
        mov    dword ptr [esi + 0x35c], ebx
        mov    dword ptr [esi + 0x360], ebx
        je    L_dd98
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_dd80
        mov    dword ptr [esi + 0x35c], edi
L_dd80:
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_dd98
        mov    dword ptr [esi + 0x360], edi
L_dd98:
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    0x10
    }
}
