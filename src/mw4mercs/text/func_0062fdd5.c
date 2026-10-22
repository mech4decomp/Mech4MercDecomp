/*
 * FUN_0062fdd5 (extent 0x62fdd5-0x63002c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007db0b0;
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_00501b70(void);
extern void __cdecl FUN_0050ced0(void);
extern void __cdecl FUN_006f3310(void);

__declspec(naked) void FUN_0062fdd5(void)
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
        sub    esp, 0xf4
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x100]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x64
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501b70
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    esi, eax
        push    0
        lea    ecx, [esp + 0xb0]
        mov    dword ptr [esi], 0x64
        call    FUN_0040dd50
        mov    cx, word ptr [g_007db0ae]
        mov    ax, word ptr [g_007db0ac]
        push    0
        lea    edx, [esp + 0xb0]
        push    edx
        mov    word ptr [esi + 0x62], cx
        mov    ecx, dword ptr [edi + 4]
        push    0x78d46c
        mov    word ptr [esi + 0x60], ax
        call    FUN_00412390
        test    al, al
        je    L_fff9
        mov    eax, dword ptr [esp + 0xac]
        push    0
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_004d2000
        mov    eax, dword ptr [esp + 0x44]
        test    eax, eax
        je    L_febb
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        jbe    L_febb
        lea    ecx, [esp + 8]
        call    FUN_004d24f0
        test    al, al
        je    L_febb
        mov    cx, word ptr [esp + 0x48]
        mov    dx, word ptr [esp + 0x4a]
        mov    word ptr [esi + 0x60], cx
        lea    ecx, [esp + 8]
        mov    word ptr [esi + 0x62], dx
        call    FUN_004d2630
        test    al, al
        jne    L_fff0
        mov    eax, dword ptr [g_007db0b0]
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_004d2840
        jmp    L_fff0
L_febb:
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        lea    ecx, [esp + 0x50]
        call    FUN_00415180
        push    0
        lea    ecx, [esp + 0x60]
        mov    dword ptr [esp + 0x58], 0
        mov    dword ptr [esp + 0x5c], 0
        mov    dword ptr [esp + 0x50], 0x76cd9c
        call    FUN_0041ee70
        lea    edx, [esp + 0xb8]
        push    edx
        lea    ecx, [esp + 0x50]
        mov    dword ptr [esp + 0x50], 0x76d1f0
        call    FUN_00412b80
        mov    edi, dword ptr [g_007db0b0]
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        lea    eax, [esp + 0x4c]
        mov    dword ptr [g_007db0b0], eax
        xor    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + 0x40]
        xor    eax, 0x85739531
        je    L_ffe1
        push    0
        lea    ecx, [esp + 0x88]
        call    FUN_0041ee70
        mov    eax, dword ptr [g_007dab40]
        lea    ecx, [esp + 0x84]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        lea    edx, [esp + 0xb0]
        push    edx
        xor    eax, dword ptr [ecx]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        call    FUN_006f3310
        mov    edx, dword ptr [esp + 0x98]
        sub    edx, dword ptr [esp + 0x94]
        je    L_ffc0
        lea    eax, [esp + 0x4c]
        push    eax
        lea    ecx, [esp + 0x88]
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_004d2680
        mov    dx, word ptr [esp + 0x48]
        mov    ax, word ptr [esp + 0x4a]
        lea    ecx, [esp + 8]
        mov    word ptr [esi + 0x60], dx
        mov    word ptr [esi + 0x62], ax
        call    FUN_004d2630
        test    al, al
        jne    L_ffd5
        lea    ecx, [esp + 0x4c]
        push    ecx
        lea    ecx, [esp + 0xc]
        call    FUN_004d2840
        jmp    L_ffd5
L_ffc0:
        mov    dx, word ptr [g_007db0ac]
        mov    ax, word ptr [g_007db0ae]
        mov    word ptr [esi + 0x60], dx
        mov    word ptr [esi + 0x62], ax
L_ffd5:
        lea    ecx, [esp + 0x84]
        call    FUN_0041ef60
L_ffe1:
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [g_007db0b0], edi
        call    FUN_00412b60
L_fff0:
        lea    ecx, [esp + 8]
        call    FUN_004d21c0
L_fff9:
        lea    ecx, [esp + 0xac]
        call    FUN_0040de20
        pop    edi
        pop    esi
        add    esp, 0xf4
        ret    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    0xa0
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_0050ced0
        add    esp, 4
        pop    esi
        ret    
    }
}
