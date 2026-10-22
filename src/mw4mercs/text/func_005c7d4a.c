/*
 * FUN_005c7d4a (extent 0x5c7d4a-0x5c7ec9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_005dd2f0(void);
extern void __cdecl FUN_005faee0(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064dda0(void);
extern void __cdecl FUN_0064df20(void);
extern void __cdecl FUN_0064df30(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e600(void);

__declspec(naked) void FUN_005c7d4a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    ebp, dword ptr [esi + 0x170]
        push    edi
        mov    ecx, ebp
        mov    dword ptr [esp + 0x10], esi
        call    FUN_005faee0
        mov    ebx, dword ptr [eax]
        mov    ecx, ebp
        call    FUN_005faee0
        cmp    ebx, dword ptr [eax + 4]
        je    L_7dcf
L_7d76:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007dab40]
        mov    edi, dword ptr [ebx]
        xor    ecx, eax
        mov    esi, dword ptr [ecx + 0x20]
        xor    esi, 0x85739531
        push    edi
        mov    ecx, esi
        call    FUN_00600940
        mov    ecx, eax
        call    FUN_0064e600
        cmp    al, 1
        jne    L_7dbc
        push    edi
        mov    ecx, esi
        call    FUN_00600940
        mov    ecx, eax
        call    FUN_0064e5a0
        mov    ecx, eax
        call    FUN_0064df30
        cmp    al, 1
        je    L_7ddc
L_7dbc:
        mov    ecx, ebp
        add    ebx, 4
        call    FUN_005faee0
        cmp    ebx, dword ptr [eax + 4]
        jne    L_7d76
        mov    esi, dword ptr [esp + 0x10]
L_7dcf:
        mov    ecx, esi
        call    FUN_005dd2f0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
L_7ddc:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        pop    ecx
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
        sub    esp, 0xc
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x170]
        push    esi
        push    edi
        mov    ecx, ebp
        call    FUN_005faee0
        mov    ebx, dword ptr [eax]
        mov    ecx, ebp
        call    FUN_005faee0
        cmp    ebx, dword ptr [eax + 4]
        je    L_7e84
L_7e12:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007dab40]
        mov    edi, dword ptr [ebx]
        xor    ecx, eax
        mov    esi, dword ptr [ecx + 0x20]
        xor    esi, 0x85739531
        push    edi
        mov    ecx, esi
        call    FUN_00600940
        mov    ecx, eax
        call    FUN_0064e600
        cmp    al, 1
        jne    L_7e75
        push    edi
        mov    ecx, esi
        call    FUN_00600940
        mov    ecx, eax
        call    FUN_0064e5a0
        mov    esi, eax
        mov    ecx, esi
        call    FUN_0064df20
        cmp    al, 1
        jne    L_7e75
        mov    ecx, esi
        call    FUN_0064e100
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [eax]
        push    edx
        mov    ecx, esi
        call    FUN_0064dda0
        test    eax, eax
        je    L_7e75
        cmp    eax, ebp
        jne    L_7e90
L_7e75:
        mov    ecx, ebp
        add    ebx, 4
        call    FUN_005faee0
        cmp    ebx, dword ptr [eax + 4]
        jne    L_7e12
L_7e84:
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0xc
        ret    4
L_7e90:
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        fld    dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x18], eax
        fxch    st(1)
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x18]
        fstp    dword ptr [eax]
        pop    edi
        pop    esi
        fstp    dword ptr [eax + 4]
        pop    ebp
        mov    dword ptr [eax + 8], ecx
        mov    al, 1
        pop    ebx
        add    esp, 0xc
        ret    4
    }
}
