/*
 * FUN_0061ef41 (extent 0x61ef41-0x61f10f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f268c;
extern int    g_007f26a4;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_005b7120(void);
extern void __cdecl FUN_005b71d0(void);
extern void __cdecl FUN_005b7560(void);
extern void __cdecl FUN_0061c1a0(void);
extern void __cdecl FUN_0061ef90(void);

__declspec(naked) void FUN_0061ef41(void)
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
        mov    ecx, dword ptr [esp + 4]
        call    FUN_005b7120
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        call    FUN_005b71d0
        ret    0xc
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
        call    FUN_005b7560
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [eax + 0x2c]
        test    esi, esi
        je    L_efb6
        mov    eax, dword ptr [g_007f26a4]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_efb6
        mov    eax, dword ptr [esi + 0x280]
        pop    esi
        ret    
L_efb6:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        call    FUN_0061c1a0
        cmp    al, 1
        mov    esi, dword ptr [esp + 8]
        jne    L_efe4
        push    esi
        call    FUN_0061ef90
        add    esp, 4
        test    eax, eax
        je    L_efe4
        cmp    byte ptr [eax + 0xdc], 1
        je    L_efeb
L_efe4:
        mov    ecx, esi
        call    FUN_005b7120
L_efeb:
        pop    esi
        ret    4
        nop    
        push    ebp
        call    FUN_0061c1a0
        cmp    al, 1
        mov    ebp, dword ptr [esp + 8]
        jne    L_f01e
        push    ebp
        call    FUN_0061ef90
        add    esp, 4
        test    eax, eax
        je    L_f01e
        cmp    byte ptr [eax + 0xdc], 1
        jne    L_f01e
        fld    dword ptr [g_0076c5b0]
        pop    ebp
        ret    0xc
L_f01e:
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    esi
        mov    esi, dword ptr [ebp + 0x2c]
        test    esi, esi
        push    edi
        je    L_f0be
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_f0be
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xf4]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x40
        jne    L_f0be
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        xor    edx, edx
        mov    dl, byte ptr [ebx + 0x18]
        lea    edi, [ebx + 0x18]
        xor    ecx, 0x85739531
        push    edx
        call    FUN_004cdfa0
        test    eax, eax
        je    L_f0be
        push    edi
        mov    ecx, eax
        call    FUN_004ceeb0
        mov    edi, eax
        test    edi, edi
        je    L_f0be
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x60]
        mov    edx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], edx
        call    dword ptr [eax + 0x60]
        mov    ecx, dword ptr [esp + 0x14]
        cmp    eax, ecx
        jne    L_f0be
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xf4]
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
L_f0be:
        mov    eax, dword ptr [esp + 0x18]
        push    ebx
        push    eax
        mov    ecx, ebp
        call    FUN_005b71d0
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
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
        call    FUN_0061c1a0
        cmp    al, 1
        mov    esi, dword ptr [esp + 8]
        jne    L_f104
        push    esi
        call    FUN_0061ef90
        add    esp, 4
        test    eax, eax
        je    L_f104
        cmp    byte ptr [eax + 0xdc], 1
        je    L_f10b
L_f104:
        mov    ecx, esi
        call    FUN_005b7560
L_f10b:
        pop    esi
        ret    4
    }
}
